#include "stdio.h"

int main(){
  int size = 0;
  scanf("%d", &size);
  for(int i = 0; i < size; i++){
    int arr[4] = {0};
    scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
    if(arr[0] == arr[1] & arr[1] == arr[2] & arr[2] == arr[3]){
      puts("YES");
    }
    else{
      puts("NO");
    }
  }
  return 0;
}
