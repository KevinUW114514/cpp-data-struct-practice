#pragma once

namespace cxx::data_structure {

template <typename T> class _Node {
  T val;

public:
  _Node(T val) : val(val) {}
};
} // namespace cxx::data_structure