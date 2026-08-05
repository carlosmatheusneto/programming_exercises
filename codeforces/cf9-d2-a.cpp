#include <algorithm>
#include <iostream>

int main(){
  int y = 0, w = 0;
  std::cin >> y >> w;
  int d = 7 - std::max(y, w);
  int arr[3] = {6, 3, 2};
  for(int i = 0; i < 3; i++){
    if(d % arr[i] == 0){
      std::cout << d/arr[i] <<"/" << 6/arr[i] << std::endl;
      return 0;
    }
  }
  std::cout << d << "/6" << std::endl;
  return 0;
}
