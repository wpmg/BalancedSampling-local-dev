#include <stddef.h>
#include <stdexcept>
#include <string>
#include <utility>

#include "uniform.h"
#include "IndexListClass.h"

IndexList::IndexList() {}
IndexList::IndexList(const size_t t_N) {
  list = new size_t[t_N];
  reverse = new size_t[t_N];
  len = t_N;
  capacity = t_N;
}
IndexList::~IndexList() {
  delete[] list;
  delete[] reverse;
}

IndexList* IndexList::Copy() {
  IndexList* il = new IndexList(capacity);

  for (size_t i = 0; i < capacity; i++) {
    il->list[i] = list[i];
    il->reverse[i] = reverse[i];
  }

  il->len = len;

  return il;
}

IndexList* IndexList::CopyLen() {
  IndexList* il = new IndexList(capacity);

  for (size_t i = 0; i < len; i++) {
    il->list[i] = list[i];
    il->reverse[list[i]] = i;
  }

  il->len = len;

  return il;
}

size_t* IndexList::CopyList() {
  size_t* il = new size_t[len];

  for (size_t i = 0; i < len; i++)
    il[i] = list[i];

  return il;
}

size_t IndexList::Length() {
  return len;
}

size_t IndexList::Capacity() {
  return capacity;
}

void IndexList::Fill() {
  for (size_t i = 0; i < capacity; i++) {
    list[i] = i;
    reverse[i] = i;
  }

  len = capacity;
  return;
}

void IndexList::Resize(const size_t t_len) {
  if (t_len > capacity) {
    throw std::range_error("(resize) Inadmissable value of len");
  }

  len = t_len;
  return;
}

void IndexList::Shuffle() {
  for (size_t i = 0; i < len - 1; i++) {
    size_t k = i + sizeuniform(len - i);
    if (i == k)
      continue;

    std::swap(list[i], list[k]);
    reverse[list[i]] = i;
    reverse[list[k]] = k;
  }

  return;
}

void IndexList::Set(const size_t id) {
  if (id >= capacity) {
    throw std::range_error("(set) Inadmissible value of id");
  }

  list[id] = id;
  reverse[id] = id;
}

void IndexList::Add(const size_t id) {
  if (id >= capacity) {
    throw std::range_error("(add) Inadmissible value of id");
  }

  // k must not be smaller then len, or it already exists
  if (reverse[id] < len) {
    throw std::range_error("(add) Inadmissible value of k");
  }

  list[len] = id;
  reverse[id] = len;
  len += 1;
}

size_t IndexList::Get(const size_t k) {
  if (k >= len) {
    throw std::range_error("(get) Inadmissible value of k");
  }

  return list[k];
}

size_t IndexList::GetK(const size_t id) {
  if (id >= capacity) {
    throw std::range_error("(getK) Inadmissable value of id");
    // return SIZE_MAX;
  }

  return reverse[id];
}

size_t IndexList::GetLast() {
  if (len == 0) {
    throw std::range_error("(GetLast) No last element");
  }

  return list[len - 1];
}

bool IndexList::Exists(const size_t id) {
  if (id >= capacity)
    return false;

  return reverse[id] < len;

}
size_t IndexList::Draw() {
  size_t k = intuniform(len);
  return list[k];
}

void IndexList::Erase(const size_t id) {
  if (id >= capacity) {
    throw std::range_error(
      "(erase, 1) Inadmissible value of id: " + std::to_string(id) +
      ", len: " + std::to_string(len)
    );
  }

  size_t k = reverse[id];

  if (k >= len) {
    throw std::range_error(
      "(erase, 2) Inadmissible value of id: " + std::to_string(id) +
      ", k: " + std::to_string(k) +
      ", len: " + std::to_string(len)
    );
  }

  len -= 1;
  reverse[id] = capacity;

  // Early return, no need to swap
  if (k == len) {
    return;
  }

  list[k] = list[len];
  reverse[list[k]] = k;

  return;
}
