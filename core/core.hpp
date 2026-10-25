#pragma once

#include "../domain/command.hpp"

class Core {
private:
  void(*print)(std::string);
  Command command;
public:
  Core (void (*inPrint)(std::string), Command InComand){
    print = inPrint;
    command = InComand;
  }
  void execute(){
    switch(command.str_to_int()){
    case 65: {print("qwerty"); break;}
    }
  } 
};
