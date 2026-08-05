#include <iostream>
#include <string>

int main(){
  std::string s, t;
  std::cin >> s;
  std::cin >> t;
  int i = 0, pos = 1;
  while(i < t.length()){
    if(s[pos-1] == t[i]){
      pos++;  
    } 
    i++;
  }
  std::cout << pos << std::endl;
}
