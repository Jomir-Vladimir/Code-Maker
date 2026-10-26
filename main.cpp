#include "core.hpp"
#include "consolOutput.hpp"
#include "stringToCommand.hpp"

bool test(std::vector <std::string> asd){
  std::cout << "succses";
  return true;
}

int main (int argc, char *argv[]){
  std::vector<exeCommand> exeCommands = {
    {"-H", test},
    {"--hex", test},
    {"-G", test},
    {"--generate", test},
    {"-B", test},
    {"--build", test},
    {"-C", test},
    {"--cmake", test},
    {"-Ti", test},
    {"-Te", test}
  };
  Core core(ConsolOutput, &exeCommands);
  core.execute(toCommand(argv, argc));
  return 0;
}
