#include <iostream>
#include <string>

int main(){
  int n_games = 0;
  int a = 0;
  int d = 0;
  std::string string;
  std::cin >> n_games;
  std::cin >> string;
  for(int i = 0; i < n_games; i++){
    if (string[i] == 'A'){
      a++; 
    }else{
      d++;
    }
  }
  if(a == d){
    std::cout << "Friendship";
  }else if (a > d){
    std::cout << "Anton";
  }else{
    std::cout << "Danik";
  }
  return 0;
} 
