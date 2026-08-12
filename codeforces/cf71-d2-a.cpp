#include <iostream>
#include <string>


int main(){
  int l, n;
  std::string s;
  std::cin >> n;
  for(int i = 0; i < n; i++){
    std::cin >> s;
    if(s.length() > 10){
      char k = s[0], f = s[s.length()-1];
      std::cout << k << s.length() - 2 << f << std::endl; 
    }
    else{
      std::cout << s << std::endl;
    }
  }
  return 0;
}
