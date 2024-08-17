#include "person.hpp"
#include <iostream>
#include <cmath>

namespace person {
// class::func

std::string Person::get_readable_height() const noexcept {
  std::uint32_t inches = static_cast<std::uint32_t>(m_height) % 12;
  std::uint32_t ft = static_cast<std::uint32_t>(m_height / 12);
  std::string height = std::to_string(ft) + "' " + std::to_string(inches) + "\"";

  return height;
}
  
Person::Person(std::string name, std::uint32_t age, std::string bday, double height) noexcept {
  m_name = name; 
  m_age = age; 
  m_bday = bday;
  m_height = height;
}

Person::Person() noexcept {
  m_name = "noname"; 
  m_age = 0; 
  m_bday = "unknown";
  m_height = 0.0;
}

std::ostream &operator<<(std::ostream &ostream, const Person &person) noexcept {
  ostream << "Name: " << person.name() << ", Height: " << person.get_readable_height() << ", Date of Birth: " << person.bday() << ", Age: " << person.age();
  return ostream;
}

  
} // namespace person

// semi-colon only for classes
