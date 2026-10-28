#pragma once

#include <iostream>
#include <string>

class Token {
private:
  short indexLine;
  std::string key;
  std::string value;
public:
  void setKey(std::string newKey){
    key = newKey;
  }
  void setValue(std::string newValue){
    value = newValue;
  }
  void setIndexLine(short newIndexLine){
    indexLine = newIndexLine;
  }
  bool compareKey(std::string otherKey){
    return key == otherKey;
  }
  bool compareValue(std::string otherValue){
    return value == otherValue;
  }
  std::string returnKey(){
    return key;
  }
  std::string returnValue(){
    return value;
  }
  short returnIndexLine(){
    return indexLine;
  }
  void printKey(){
    std::cout << key << "\n";
  }
  void printValue(){
    std::cout << value << "\n";
  }
  void printIndexLine(){
    std::cout << indexLine << "\n";
  }
};
