#pragma once

//// text editor ////

    /// hex editor ///
    // foton -H <file>
    // foton --hex <file>
    
    //// project generation ////
      
    // foton -G <path to foton file>
    // foton --generation <path to foton file>
    
    //// template file ////

    // foton -Te <template file>
    // foton -Ti <template file>
    
    //// project build ////

    // foton -B <path to Makefile>
    // foton --build <path to Makefile>
    
    //// system build ////

    // foton -C <path to CMakeLists.txt>
    // foton --cmake <path to CMakeLists.txt>
    
    /// simple editor ///

#include "../domain/command.hpp"

class Core {
private:
  //// Ports ////
  void(*print)(std::string);
  std::vector<exeCommand> *exeCommands;
public:
  Core (void (*inPrint)(std::string), std::vector<exeCommand> *inExeCommands){
    print = inPrint;
    exeCommands = inExeCommands;
  }
  void execute(ioCommand inCommand){
    for (exeCommand exe_Command : *exeCommands){
      if (inCommand.name == exe_Command.name){
        exe_Command.function(inCommand.arguments);
      }
    }
  } 
};
