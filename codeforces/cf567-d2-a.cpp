#include <iostream>
#include <algorithm>

int main(){
  int n;
  std::cin >> n;
  long long arr[n];
  for(int i = 0; i < n; i++){
    long long x = 0;
    std::cin >> x;
    arr[i] = x;
  }
  for(int i = 0; i < n; i++){
    long long min;
    long long max;
    if(i == 0){
      min = arr[1] - arr[0];
    }
    else if(i == n-1){
      min = arr[n-1] - arr[n-2];
    }
    else{
      min = std::min(arr[i] - arr[i-1], arr[i+1] - arr[i]);
    }
    max = std::max(arr[i] - arr[0], arr[n-1] - arr[i]);
    std::cout << min << " " << max <<  " " << "\n";
  }
  return 0;
}
