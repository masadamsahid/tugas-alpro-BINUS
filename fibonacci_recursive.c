//
// Created by masad on 7/6/2023.
//

#include <stdio.h>
#include <time.h>

long findFibonacciRecursively(int n) {
  
  if(n <= 1){
    return n;
  } else {
    return findFibonacciRecursively(n - 2) + findFibonacciRecursively(n - 1);
  }
  
}

int main() {
  
//  printf("Cari bilangan fibonacci ke berapa? ");
//  int n;
//  scanf("%d)", &n);

  int n = 50;
  
  clock_t time;
  time = clock();
  
  printf("\nFibo ke-%d adalah %li\n", n, findFibonacciRecursively(n));
  
  time = clock() - time;
  double execution_duration = ((double) time)/CLOCKS_PER_SEC;
  
  printf("\n\nRecursive function execution finished in %f seconds\n", execution_duration);
  
  getchar();
  
  return 0;
}
