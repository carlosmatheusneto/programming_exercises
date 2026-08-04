#include <iostream>
#include <string>

int main(){
  int arr[4];
  for(int i = 0; i < 4; i++){
    std::cin >> arr[i];
  }
  int sum = 0;
  std::string s;
  std::cin >> s;
  for(int i = 0; i < s.length(); i++){
    sum = sum + arr[s[i] - '1'];
  }
  std::cout << sum << std::endl;
}
