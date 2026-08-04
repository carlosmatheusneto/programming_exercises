#include <iostream>
#include <string>
#include <algorithm>

int main(){
  std::string a, b;
  std::cin >> a >> b;

  int n = a.size();
    
  for (int i = 0; i < n; i++) {
    char ca = tolower(a[i]);
    char cb = tolower(b[i]);
    if (ca < cb) {
      std::cout << -1 << std::endl;
      return 0;
    }else if (ca > cb) {
      std::cout << 1 << std::endl;
      return 0;
    }
  }  
  std::cout << 0 << std::endl;
    
}
