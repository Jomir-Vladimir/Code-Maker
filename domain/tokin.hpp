#pragma once

#include <iostream>

template<typename T1, typename T2>
class Tokin {
private:
  T1 key;
  T2 value;
public:
  void setKey(T1 newKey){
    key = newKey;
  }
  void setValue(T2 newValue){
    value = newValue;
  }
  bool compareKey(T1 otherKey){
    return key == otherKey;
  }
  bool compareValue(T2 otherValue){
    return value == otherValue;
  }
  T1 returnKey(){
    return key;
  }
  T2 returnValue(){
    return value;
  }
  void printKey(){
    std::cout << key << "\n";
  }
  void printValue(){
    std::cout << value << "\n";
  }
};
