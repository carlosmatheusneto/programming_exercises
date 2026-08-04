#include <iostream>

int main(){
  int n = 0, a = 0;
  std::cin >> n;
  std::string s = "aa";
  for(int i = 0; i < n; i++){ 
    std::string aux;
    std::cin >> aux;
    if(s != aux){
      std::cout << "sexo" << std::endl;
      a++;  
    }
    s = aux;
  }
  std::cout << a << std::endl;
  return 0;
}
