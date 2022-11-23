// Do not change
#include <iostream>
#include <fstream>


#include <list>
#include <vector>
#include <deque>

#include "my_sort.hpp"

// Change here
// All occurences of XXX need to be replaced with
// something more meaningful


template<class ValueType, class ContainerType>
void read_file_to_cont(std::ifstream& f, ContainerType& c) {
  ValueType line;

  while(f >> line) {
    c.push_back(line);
  }
}

template<class ValueType, class ContainerType>
void read_and_sort(std::ifstream& fi, std::ofstream& fo) {
  ContainerType container;
  read_file_to_cont<ValueType, ContainerType>(fi, container);

  auto begin = container.begin();
  auto end = container.end();
  my_selection_sort(begin, end);

  for (auto val : container) {
    fo << val << std::endl;
  }
}

template <class ValueType>
void read_and_sort_decide_container(std::ifstream& fi, std::ofstream& fo) {
  char line;
  fi >> line;
  fo << line << std::endl;

  switch(line)
  {
  case 'l':
    read_and_sort<ValueType, std::list<ValueType>>(fi, fo);
    break;
  case 'v':
    read_and_sort<ValueType, std::vector<ValueType>>(fi, fo);
    break;
  case 'd':
    read_and_sort<ValueType, std::deque<ValueType>>(fi, fo);
    break;
  default:
		throw std::runtime_error("Expected container type in second line of the file");
    return;
  }
}

void read_and_sort_decide_valuetype(std::ifstream& fi, std::ofstream& fo) {
  char line;
  fi >> line;
  fo << line << std::endl;

  switch(line)
  {
  case 'i':
    read_and_sort_decide_container<int>(fi, fo);
    break;
  case 'u':
    read_and_sort_decide_container<unsigned int>(fi, fo);
    break;
  case 'f':
    read_and_sort_decide_container<float>(fi, fo);
    break;
  case 'd':
    read_and_sort_decide_container<double>(fi, fo);
    break;
  case 'c':
    read_and_sort_decide_container<char>(fi, fo);
    break;
  case 's':
    read_and_sort_decide_container<std::string>(fi, fo);
    break;
  default:
		throw std::runtime_error("Expected value type in first line of the file");
    return;
  }
}



