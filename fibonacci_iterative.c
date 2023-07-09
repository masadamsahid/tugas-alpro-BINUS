//
// Created by masad on 7/6/2023.
//

#include <stdio.h>
#include <time.h>

long findFibonacciIteratively(int n) {
  
  long fibo = 0;
  long current = 1;
  long prev = 0;
  for (int i = 1; i < n; i++) {
    fibo = current + prev;
    prev = current;
    current = fibo;
  }
  
  return fibo;
}

int main() {
  
//  printf("Cari bilangan fibonacci ke berapa? ");
//  int n;
//  scanf("%d)", &n);

  int n = 50;
  
  clock_t time;
  time = clock();
  
  printf("\nFibo ke-%d adalah %li\n", n, findFibonacciIteratively(n));
  
  time = clock() - time;
  double execution_duration = ((double) time)/CLOCKS_PER_SEC;
  
  printf("\n\nIterative function execution finished in %f seconds\n", execution_duration);
  
  getchar();
  
  int arr[n];
  
  return 0;
}

