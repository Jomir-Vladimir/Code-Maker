#pragma once

#include <string>
#include <vector>

class Command {
public:
  std::string name;
  std::vector <std::string> arguments;

  short str_to_int() {
    short code = 0;
    for (short index = 0; name[index]; index++) {
      code += ((short)name[index]) * (index + 1);
    }
    return code;
  }
};

