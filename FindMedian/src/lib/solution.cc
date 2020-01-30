  
#include "solution.h"
#include <iostream>
int Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.empty() == 1) {
    return -1;
  }
  int index = inputs.size();
  int mid = index / 2;
  int result;
  if (index % 2 == 1){
      result = inputs[mid];
  }else{
      result = (inputs[mid - 1] + inputs[mid]) / 2;
  }
  
  return result;
}

