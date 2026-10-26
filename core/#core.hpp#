#pragma once

#include "../domain/command.hpp"

class Core {
private:
  void(*print)(std::string);
public:
  Core (void (*inPrint)(std::string)){
    print = inPrint;
  }
  void execute(Command command){
    switch(command.str_to_int()){
    //// text editor ////

    /// hex editor ///
    // foton -H <file>
    case 189: {print("open hex editor"); break;}
    // foton --hex <file>
    case 1451: {print("open hex editor"); break;}

    //// project generation ////
      
    // foton -G <path to foton file>
    case 187: {print("project generation"); break;}
    // foton --generation <path to foton file>
    case 8213: {print("project generation"); break;}

    //// template file ////

    // foton -Te <template file>
    case 516: {print("export template file"); break;}
    // foton -Ti <template file>
    case 528: {print("inport template file"); break;}

    //// project build ////

    // foton -B <path to Makefile>
    case 177: {print("build"); break;}
    // foton --build <path to Makefile>
    case 2770: {print("build"); break;}

    //// system build ////

    // foton -C <path to CMakeLists.txt>
    case 179: {print("system build"); break;}
    // foton --cmake <path to CMakeLists.txt>
    case 2702: {print("system build"); break;}

    /// simple editor ///
    
    default:{print("open file"); break;}
    }
  } 
};
