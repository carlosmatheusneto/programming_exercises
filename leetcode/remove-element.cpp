class Solution {
public:
  int removeElement(vector<int>& nums, int val) {
    int k = 0;
    int x = nums.size() - 1;
    for(int i = 0; i <= x; i++){
      if(nums[i] == val){
        int aux = nums[x];
        nums[x] = nums[i];
        nums[i] = aux;
        x--;
        i--;
      }
      else{
        k++;
      }
    }
    return k;
  }
};
