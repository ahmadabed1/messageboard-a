#include <iostream>
#include <string>
#include "Direction.hpp"

namespace ariel
{

class Board { 
  public:
  Board();
  void post(int x , int y ,Direction z, std::string str);
  std::string read(int x , int y ,Direction z, int len);
  void show();
};
}