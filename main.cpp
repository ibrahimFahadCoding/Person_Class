#include <iostream>
#include "person.hpp"

int main() {
  person::Person bob("Bob", 13, "September 20, 2010", 59.7);
  std::cout << bob.age() << std::endl;
  std::cout << bob << std::endl;
  bob.celbday();
  std::cout << bob.age() << std::endl;

  person::Person billy;
  std::cout << billy << std::endl;
}
