#include <iostream>

int main(){
  int n = 0;  
  std::cin >> n;
  int sum = 0, sum2 = 0;  
  for(int i = 0; i < n; i++){
    int aux = 0;
    std::cin >> aux;
    sum = sum + aux;
    if(sum < 0){
      sum2++;
      sum = 0;
    }
  }
  std::cout << sum2 << std::endl;
}
