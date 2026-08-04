#include <iostream>
#include <string>
#include <cctype>

int main(){
  std::string s;
  std::cin >> s;
  int l = 0, u = 0;
  for(int i = 0; i < s.length(); i++){
    if(std::islower(s[i])){
      l++;
    }else{
      u++;
    }
  }
  for(int i = 0; i < s.length(); i++){
    if( l >= u){
      s[i] = std::tolower(s[i]);
    }else{
      s[i] = std::toupper(s[i]);
    }
    std::cout << s[i];
  }
  std::cout << std::endl;
}
