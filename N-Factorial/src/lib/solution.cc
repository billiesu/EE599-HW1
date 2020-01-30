#include "solution.h"
int Solution::NoRecursiveFactorial(int input) { 
  if(input < 1 || input > 12){
    return input < 1 ? 1 : -1;
  }

int sum = 1;
  for(int i = 1; i <= input; i++) {
    sum *= i;
  } 
  return sum;
}
int Solution::RecursiveFactorial(int input) { 

  if(input < 1 || input > 12){
    return input < 1 ? 1 : -1;
  }

  return RecursiveFactorial(input - 1) * input;
}



