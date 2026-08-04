#include <iostream>
#include <vector>

int main(){
  int n = 0;
  std::cin >> n;
  std::vector<int> home(n);
  std::vector<int> away(n);
  for(int i = 0; i < n; i++){
    std::cin >> home[i] >> away[i];
  }
  int sum = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      if(i != j && home[i] == away[j]){
        sum++;
      }
    }
  }
  std::cout << sum << std::endl;
}
