#include <iostream>

int main(){
  char c = ' ';
  int arr[26] = {0};
  while(c != '}'){
    std::cin >> c;
    if(c != '{' and c != '{'){
      arr[c - 'a'] = 1;
    } 
  }
  int sum = 0;
  for(int i = 0; i < 26; i++){
    if(arr[i] == 1){
      sum++;  
    } 
  }
  std::cout << sum << std::endl;
  return 0;
}
