//
// Created by masad on 6/12/2023.
//


#include "stdio.h"

float aPlusBMinusC (float a, float b, float c){
  return a + b -c;
}

float bMinusCThenDividedByDThenMultiplyByA(float a, float b, float c, float d){
  return a * ((b - c)/d);
}

int main(){
  
  float a, b, c, d;
  
  printf("Enter A: ");
  scanf("%f", &a);
  
  printf("Enter B: ");
  scanf("%f", &b);
  
  printf("Enter C: ");
  scanf("%f", &c);
  
  printf("Enter D: ");
  scanf("%f", &d);
  
  printf("\n============ RESULTS ============\n\n");
  
  float x = aPlusBMinusC(a, b, c);
  printf("%-20s = %.2f + %.2f - %.2f = %.2f\n", "A + B - C", a, b, c, x);
  
  printf("\n");
  
  float y = bMinusCThenDividedByDThenMultiplyByA(a, b, c, d);
  printf("%-20s = %.2f * ((%.2f - %.2f) / %.2f) = %.2f\n", "A * ((B - C) / D)", a, b, c, d, y);
  
  fflush(stdin);
  
  getchar();
  
  return 0;
}