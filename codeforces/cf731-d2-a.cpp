#include <iostream>
#include <string>

int main(){
  int sum = 0;
  int arr[26] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,12,11,10,9,8,7,6,5,4,3,2,1};
  std::string s;
  std::cin >> s;
  for(int i = 0; i < s.length(); i++){
    sum = sum + arr[s[i] - 'a'];
    std::cout << sum << std::endl;
    int num = 26 - (s[i] - 'a');
    for(int j = 0; j < 26; j++){
      if(arr[j] == 13){
        num = num * (-1);
      }
      arr[j] = arr[j] + num;
    }
    for(int k = 0; k < 26; k++){
      std::cout << arr[k];
    }
    std::cout << std::endl;
  }
}
