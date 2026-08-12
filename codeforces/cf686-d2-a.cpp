#include <iostream>

int main(){
  long long int n, l ,a;
  char c;
  int sum = 0;  
  std::cin >> n >> l;
  for(int i = 0; i < n; i++){
    std::cin >> c >> a;
    if(c == '+'){
      l = l + a;
    }
    else{
      if(l < a){
        sum++; 
      }
      else{
        l = l - a;
      }
    }
  }
  std::cout << l << " " << sum << std::endl;
  return 0;
}
