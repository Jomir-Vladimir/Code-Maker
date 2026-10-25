#pragma once

#include <string>
#include <vector>

class Command {
public:
  std::string name;
  std::vector <std::string> arguments;

  short str_to_int() {
    short code = 0;
    for (char chr : name) {
      code += (short)chr;
    }
    return code;
  }
};

