#pragma once

#include <string>
#include <vector>

struct ioCommand {
  std::string name;
  std::vector <std::string> arguments;
};

struct exeCommand {
  std::string name;
  bool (*function)(std::vector <std::string>);
};
