//
// Created by masad on 7/21/2023.
//

#include <stdio.h>

void merge_sort(int arr[], int length);
void merge_sort_split(int arr[], int left, int right);
void merge_sort_join(int arr[], int left, int middle, int right);

int find_idx_from_arr(int target, int arr[], int length);

void print_array(int arr[], int length);

int main(){
  
  int n;
  printf("Input jumlah elemen Array: ");
  scanf("%d", &n);
  
  int arr[n];
  
  printf("Input %d angka (dipisah dengan enter):\n", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  
  
  merge_sort(arr, n);
  
  printf("\n");
  
  int target;
  printf("Input angka yang akan dicari: ");
  scanf("%d", &target);
  
  int idx = find_idx_from_arr(target, arr, n);
  
  if (idx >= 0) printf("Angka ditemukan pada index ke - %d\n", idx);
  else printf("Angka tidak ditemukan\n");
  
  printf("Urutan angka yang diinputkan: ");
  print_array(arr, n);
  printf("\n");
  
  getchar();
  
  return 0;
}

void merge_sort(int arr[], int length){
  merge_sort_split(arr, 0, length - 1);
};

void merge_sort_split(int arr[], int left, int right){
  if (left < right){
    int middle = left + (right - left)/2;
    
    
    merge_sort_split(arr, left, middle);
    merge_sort_split(arr, middle + 1, right);
    
    merge_sort_join(arr, left, middle, right);
  }
}

void merge_sort_join(int arr[], int left, int middle, int right){
  
  int left_length = middle - left + 1;
  int right_length = right - middle;
  
  // temporary array
  int arr_left[left_length];
  int arr_right[right_length];
  
  // assign values for left array
  for (int i = 0; i < left_length; i++) {
    arr_left[i] = arr[left + i];
  }
  
  // assign values for right array
  for (int i = 0; i < right_length; i++) {
    arr_right[i] = arr[middle + 1 + i];
  }
  
  // Joining
  for (int i = 0, j = 0, k = left; k <= right; k++) {
    
    if ((i < left_length) && (j >= right_length || arr_left[i] <= arr_right[j])){
      arr[k] = arr_left[i];
      i++;
    } else {
      arr[k] = arr_right[j];
      j++;
    }
    
  }
}


int find_idx_from_arr(int target, int arr[], int length){
  
  for (int i = 0; i < length; i++) {
    if (arr[i] == target){
      return i;
    }
  }
  
  return -1;
}





void print_array(int arr[], int length){
  for (int i = 0; i < length; i++) {
    printf("%d", arr[i]);
    if (i != length-1) printf(" ");
  }
}
