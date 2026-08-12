#include <iostream>

int main(){
  int x = 1, k = 0;
  while(x != 0){
    std::cin >> x;
    for(int i = 1; i <= x; i++){
      if(x % i == 0){
        k++;
      } 
    }
    if(k % 2 == 0){
      std::cout << "no" << std::endl;
    }
    else{
      std::cout << "yes" << std::endl;
    }
    k = 0;
  }
  return 0;
}
