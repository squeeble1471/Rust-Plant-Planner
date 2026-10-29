#include <iostream>
#include <array>
#include <vector>


int arrayMaker()

{
  std::vector<std::array<char, 6>> plantArray; 
  std::string genomeString;
  if (plantFile.is_open())
  {
    while (getline(plantFile, genomeString))
    {
      std::cout << genomeString << '\n';
    }
  }

  return 0;
}