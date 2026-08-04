#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main(){
  int n = 0;
  std::cin >> n;
  std::vector<int> v(n);
  for(int i = 0; i < n; i++){
    int aux = 0;
    std::cin >> aux;
    v.push_back(aux);
  }
  std::sort(v.begin(), v.end(), std::greater<int>());
  int a = 0, b = 0;
  bool last_one = true;
  for(int i = 0; i < n; i++){
    if(last_one){
      a = a + v[i]; 
      last_one = false;
    }else{
      b = b + v[i];
      last_one = true;
    }
  }
  std::cout << a << " " << b << std::endl;
}
