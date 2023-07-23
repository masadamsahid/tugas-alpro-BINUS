//
// Created by masad on 7/23/2023.
//

#include <stdio.h>
#include <stdlib.h>

int search_idx(int arr[], int length, int target){
  for (int i = 0; i < length; i++) {
    if(arr[i] == target) return i;
  }
  return -1;
};

void print_all(int arr[], int length){
  printf("[");
  for (int i = 0; i < length; i++) {
    printf("%d", arr[i]);
    if(i < (length - 1)) printf(", ");
  }
  printf("]");
}

int main(){
  
  int SIZE = 9;
  int data[SIZE];
  
  // entry data
  printf("Input 9 angka:\n");
  for (int i = 0; i < SIZE; i++) {
    scanf("%d", &data[i]);
  }
  
  // input data yang ingin di cari
  printf("\n\nAnda ingin mencari angka apa? ");
  int target;
  scanf("%d", &target);
  
  // search data
  int idx = search_idx(data, SIZE, target);
  
  if(idx >= 0) printf("Angka %d terdapat pada indeks %d.\n", target, idx);
  else printf("Angka tidak ditemukan pada data.\n");
  
  // print all
  print_all(data, SIZE);
  
  return 0;
}



