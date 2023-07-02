//
// Created by masad on 6/28/2023.
//

#include <stdio.h>
#include <conio.h>

void swapByValue(int a, int b);
void pauser();

int main(){
  
  int a=1, b=2;
  
  printf("==== BEFORE swapByValue() ====\n");
  printf("a = %4d\n", a);
  printf("b = %4d\n", b);
  
  printf("\n");
  pauser();
  
  swapByValue(a, b);
  
  printf("\n");
  pauser();
  
  printf("==== AFTER  swapByValue() ====\n");
  printf("a = %4d\n", a);
  printf("b = %4d\n", b);
  
  printf("\n");
  pauser();
  
  return 0;
}


void swapByValue(int a, int b){
  printf("==== MULAI  swapByValue()  ====\n");
  
  int temp = a;
  a = b;
  b = temp;
  
  printf("a = %4d\n", a);
  printf("b = %4d\n", b);
  
  printf("==== SELESAI swapByValue() ====\n");
}

void pauser(){
  printf("Press any key to continue...\n\n");
  getch();
}