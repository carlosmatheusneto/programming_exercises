#include <iostream>

int main(){
  int n_problems = 0;
  int sum = 0;
  std::cin >> n_problems;
  for(int i = 0; i < n_problems; i++){
    int a,b,c;
    std::cin >> a >> b >> c;
    if(a+b+c >= 2){
      sum++;
    }
  }
  std::cout << sum << std::endl;
}
