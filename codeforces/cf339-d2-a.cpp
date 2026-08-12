#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main(){
  std::string s;
  std::cin >> s;
  std::vector<int> v;
  for(int i = 0; i < s.length(); i++){
    if(s[i] != '+'){
      v.push_back((int)s[i] - '0'); 
    }
  }
  std::sort(v.begin(), v.end());
  for(auto it = v.begin(); it != v.end(); it++){
    std::cout << *it;
    if(it != v.end() - 1){
      std::cout << "+";
    }
  }
  std::cout << std::endl;
  return 0;
}
