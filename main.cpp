#include "core.hpp"
#include "consolOutput.hpp"

int main (int argc, char *argv[]){
  Command command;
  command.name = argv[1];
  Core core(ConsolOutput, command);
  core.execute();
  return 0;
}
