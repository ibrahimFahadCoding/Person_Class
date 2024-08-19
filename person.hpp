#if !defined(PERSON_HPP) 
#define PERSON_HPP

#include <cstdint>
#include <string>
#include <ostream>

namespace person {

class Person {
  std::string m_name;
  std::uint32_t m_age;
  std::string m_bday;
  double m_height;
  [[nodiscard]] std::string get_readable_height() const noexcept;
 public: 
  Person(std::string name, std::uint32_t age, std::string bday, double height) noexcept;
  Person() noexcept;
  [[nodiscard]] std::string name() const noexcept { return m_name; }
  [[nodiscard]] std::uint32_t age() const noexcept { return m_age; }
  [[nodiscard]] std::string bday() const noexcept { return m_bday; }
  [[nodiscard]] double height() const noexcept { return m_height; }
  void set_height(double height) noexcept { m_height = height; }

  void celbday() noexcept { ++m_age; }
  friend std::ostream &operator<<(std::ostream &ostream, const Person &person) noexcept; 
};

std::ostream &operator<<(std::ostream &ostream, const Person &person) noexcept; 
  
} // namespace person

#endif // PERSON_HPP

