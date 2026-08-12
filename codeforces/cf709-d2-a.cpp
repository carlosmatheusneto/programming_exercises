#include <iostream>

int main(){
  int n, b, d;
  int resp = 0, sum = 0;
  std::cin >> n >> b >> d;
  for(int i = 0; i < n; i++){
    int s;
    std::cin >> s;
    if(s <= b){
      sum = sum + s;
      if(sum > d){
        resp++;
        sum = 0;
      }
    }
  }
  std::cout << resp << std::endl;
  return 0;
}
