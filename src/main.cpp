#include <iostream>
#include <sstream>
#include <string>

long int hexToDec(std::string str){
  long int n;
  long int result;
  std::stringstream ss;
  std::istringstream(str) >> std::hex >> n;
  ss << std::dec << n;
  ss >> result;
  return result;
}

int main(int argc, char** argv) {
  for (int i = argc - 1; i > 0; i--) {
    std::cout << hexToDec(argv[i]) + 100 + N << std::endl;
  }
}
