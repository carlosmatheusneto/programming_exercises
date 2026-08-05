#include <iostream>

int main(){

  int n = 0, s = 0;
  std::cin >> n >> s;
  int  i = 1;
  while(n * i % 10 != s and n * i % 10 != 0){
    i++;
  }
  std::cout << i << std::endl;
  return 0;
}
