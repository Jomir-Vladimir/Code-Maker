#include "core.hpp"
#include "consolOutput.hpp"
#include "stringToCommand.hpp"

int main (int argc, char *argv[]){
  Core core(ConsolOutput);
  core.execute(toCommand(argv, argc));
  return 0;
}
