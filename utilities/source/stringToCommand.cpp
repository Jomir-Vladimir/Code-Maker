#include "stringToCommand.hpp"
#include <string>

ioCommand toCommand (char *table[], int count){
  ioCommand command;
  uint8_t index = 2;
  command.name = table[1];
  for (std::string str = count > index ? table[2]: table[0]; count > index; str = table[index++]) {
      command.arguments.push_back(str);
  }
  return command;
};
