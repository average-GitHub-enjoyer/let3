#include <iostream>
#include <sstream>
#include <string>

int charToInt(char ch){
  /* Перевод из ASCII в числа */
  int result = (int)ch;
  if (result > 96) {
    return result - 87;
  }else if (result > 64){
    return result - 55;
  }else{
    return result - 48;
  }
}

long int pow(int n, int p){ // n - число; p - степень
  if (p == 0){
    return 1;
  }else{
    return n*pow(n, p - 1);
  }
}

long int hexToDec(std::string str){

  /* Откидывает 0x и знаки */
  bool is_negative = (str[0] == '-');
  int s = 0;
  if (str[0] == '-' || str[0] == '+') {
    s += 3;
  } else if (str[0] == '0') {
    s += 2;
  }

  /* Перевод из шестнадцатиричной системы в десятичную */
  long int result = 0;
  int maxIndex = str.size() - 1;
  for (int i=maxIndex; i >= s; i--) {
    result += charToInt(str[i]) * pow(16, maxIndex - i);
  }
  return is_negative ? -result : result;
}

int main(int argc, char** argv) {

  for (int i = argc - 1; i > 0; i--) {
    std::cout << hexToDec(argv[i]) + 100 + N << std::endl;
  }
}
