//
// Created by masad on 6/19/2023.
//

#include <stdio.h>

int main(){
  
  int angka[] = {10, 200, 300};
  
  int * alamatAngka0;
  alamatAngka0 = &angka[0];
  
  int * alamatAngka1 = &angka[1];
  int * alamatAngka2 = &angka[2];
  
  printf("Alamat memori angka indeks ke-%d: adalah %p\n", 0, alamatAngka0);
  printf("Alamat memori angka indeks ke-%d: adalah %p\n", 1, alamatAngka1);
  printf("Alamat memori angka indeks ke-%d: adalah %p\n", 2, alamatAngka2);
  
  printf("\n\n=====================================\n\n");
  
  printf("Akses value dengan pointer angka ke-%d: adalah %d\n", 0, *alamatAngka0);
  printf("Akses value dengan pointer angka ke-%d: adalah %d\n", 1, *alamatAngka1);
  printf("Akses value dengan pointer angka ke-%d: adalah %d\n", 2, *alamatAngka2);
  
  printf("\n\n=====================================\n\n");
  
  printf("Value %3d ada pada alamat %p\n", *alamatAngka0, alamatAngka0);
  printf("Value %3d ada pada alamat %p\n", *alamatAngka1, alamatAngka1);
  printf("Value %3d ada pada alamat %p\n", *alamatAngka2, alamatAngka2);
  
  printf("\n");
  
  getchar();
  
  return 0;
}
