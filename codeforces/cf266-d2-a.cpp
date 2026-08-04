#include <iostream>
#include <string>

int main(){
  int n = 0;
  std::cin >> n;
  std::string s;
  std::cin >> s;
  char last = s[0];
  int c = 0;
  for(int i = 1; i < n; i++){
    if(s[i] == last){
      c++;
    }
    last = s[i];
  }
  std::cout << c << std::endl;
}
