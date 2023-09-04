#include <cstring>
#include <iostream>
#include "new.h"

int main (int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "Error: No arguments provided\n";
    return 1;
  }
  if (strcmp(argv[1], "new") == 0) {
    if (argc < 3) {
              std::cout << "Error: No project name provided. trike new command syntax: trike new <project_name>.\n";
      return 1;
    }
    trike_new(argc - 3, argv + 3, argv[2]);
  }
  return 0;
}
