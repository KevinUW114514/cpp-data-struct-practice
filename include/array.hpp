#pragma once

#include "_linked_list.hpp"

namespace cxx::data_structure {

namespace array {
enum DSOptions {
  Array,
  LinkedList,
};
}

template <typename T> class Array {
  array::DSOptions ds;

public:
  Array(array::DSOptions ds_option = array::Array) {
    if (ds_option == array::Array) {
      ds = array::Array;
    } else {
      ds = array::LinkedList;
    }
  }
};

} // namespace cxx::data_structure