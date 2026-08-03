#include <iostream>

int main (){
  int n_persons = 0;
  int height = 0;
  std::cin >> n_persons >> height;
  int width = 0;
  for (int i = 0; i < n_persons; i++){
    int aux = 0;
    std::cin >> aux;
    if(aux > height){
      width += 2;
    }else{
      width += 1;
    }
  }
  std::cout << width;
}
