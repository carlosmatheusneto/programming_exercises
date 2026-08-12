#include <iostream>

int main(){
  int n;
  std::cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++){
    int x = 0;
    std::cin >> x;
    std::cout << x << std::endl;
    arr[x-1] = i + 1;
  }
  for(int i = 0; i < n; i++){
    std::cout << arr[i] << " ";
  }
  std::cout << std::endl;
}
