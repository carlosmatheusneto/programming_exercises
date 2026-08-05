#include <iostream>

int main(){
  int l = 0, att = 0;
  std::cin >> l;
  int arr[l];
  for(int i = 0; i < l; i++){
    std::cin >> arr[i];
  }
  std::cin >> att;
  for(int i = 0; i < att; i++){
    int x = 0, y = 0;
    std::cin >> x >> y;
    int e = y - 1;
    int d = arr[x-1] - y;
    if(x-2 >= 0){
      arr[x-2] = arr[x-2] + e; 
    }
    if(x < l){
      arr[x] = arr[x] + d; 
    }
    arr[x-1] = 0;
  }
  for(int i = 0; i < l; i++){
    std::cout << arr[i] << std::endl;
  }
}
