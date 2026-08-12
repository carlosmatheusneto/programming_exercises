#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  int n, x;
  std::cin >> n;
  std::vector<int> a, b, c;
  for(int i = 0; i < n; i++){
    std::cin >> x;
    switch(x){
      case 1:
        a.push_back(i);
        break;
      case 2:
        b.push_back(i);
        break;
      case 3:
        c.push_back(i);
        break;
      default:
        break;
    }
  }
  int min = std::min({a.size(), b.size(), c.size()});
  std::cout << min << std::endl;
  for(int i = 0; i < min; i++){
    std::cout << a[i] << " " << b[i] << " " << c[i] << std::endl;
  }
}
