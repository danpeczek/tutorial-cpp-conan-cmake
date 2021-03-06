#include "animals/Animal.hpp"

#include <stdexcept>

namespace animals {

  Animal::Animal(const std::string& name, const int number_of_limbs)
  : name(name),
    number_of_limbs(number_of_limbs){
    if(name.empty()) {
      throw std::invalid_argument("Animal name should not be empty.");
    }

    if (number_of_limbs < 0) {
      throw std::invalid_argument("Animal should have non zero number of limbs.");
    }
  }

  std::string Animal::GetName() const { return name; }
  int Animal::GetLimbs() const { return number_of_limbs; }

  std::ostream& operator<<(std::ostream& out, const Animal& animal) {
    return out << "Animal:\nName: [" << animal.GetName() <<"]\n"
      << "Limbs: [" << animal.GetLimbs() << "]";
  }
}