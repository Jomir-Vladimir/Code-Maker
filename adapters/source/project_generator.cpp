#include "project_generator.hpp"

int fileCheck(std::string fileName) {
  if (std::filesystem::exists(fileName)) {
    if(fileName == "ProjectConfig.txt") {
      return 0;
    }
    else {
      return 1;
    }
  }
  return 2;
}

bool tokenCheck(std::string *buffer){
  bool openParathesis = false;
  bool closeParathesis = false;
  for (char chr : *buffer){
    switch(chr){
    case ')': { closeParathesis = true; break; }
    case '(': { openParathesis = true; break; }
  }
  }
  if (openParathesis && closeParathesis){
      return true;
  }
  else {
    return false;
  }
}

int tokenizator(std::string fileName) {
  std::fstream file(fileName);
  std::string buffer;
  while(getline(file, buffer)){
    if (!tokenCheck(&buffer)){
      return 3;
    }
    else {
      return 0;
    }
  }
}

int generator(std::vector<std::string> arguments){
  if (arguments.size() == 1){
    switch(fileCheck(arguments.back())){
    case 1: { return 1; break; }
    case 2: { return 2; break; }
    case 0: { return tokenizator(arguments.back()); break; }
    }
  }
  else {
    return 5;
  }
}
