#include <iostream>
#include <string>

int main(){
  int a[26] = {0};
  std::string s;
  std::cin >> s;
  for(int i = 0; i < s.length(); i++){
    a[s[i] - 'a'] = 1;
  } 
  int sum = 0;  
  for(int i = 0; i < 26; i++){
    if (a[i] == 1){
      sum++;
    }
  }
  if(sum % 2 == 1){
    std::cout << "IGNORE HIM!" << std::endl;
    return 0;
  }
  std::cout << "CHAT WITH HER!" << std::endl;
  return 0;
}
