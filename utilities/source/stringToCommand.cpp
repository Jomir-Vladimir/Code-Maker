#include "stringToCommand.hpp"
#include <string>

Command toCommand (char *table[], int count){
  Command command;
  uint8_t index = 2;
  command.name = table[1];
  for (std::string str = count > index ? table[2]: table[0]; count > index; str = table[index++]) {
      command.arguments.push_back(str);
  }
  return command;
};
