#include <fstream>
#include <iostream>
#include <sstream>

#include "fileReader.h"

int fileReader()
{
  std::ifstream plantFile("plants.txt");
  if(!plantFile)
  {
    std::cout << "Unable to open plants.txt";
    return 1;
  }
  else
  {
    std::cout << "Opening ""plants.txt""... \n";
  }
  return 0;
}


