#include <iostream>
#include <cstdlib>

int main(){
  int row = 0;
  int collumn = 0;
  int value = 0;
  for (int i = 1; i < 6; i++){
    for(int j = 1; j < 6; j++){
      std::cin >> value; 
      if(value == 1){
        row = abs(3 - i);
        collumn = abs(3 - j);
      std::cout << row+collumn << std::endl;
      break;
      }
    }
  }
  return 0;
}
