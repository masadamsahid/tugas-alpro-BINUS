//
// Created by masad on 6/29/2023.
//

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  
  char nama1[20];
  char *nama2;
  char *nama3[20];
  
  strcpy(nama1, "Brisia Jodie"); // cara assign ke nama1
  nama2 = "Brisia Jodie"; // cara assign ke nama2
  nama3[0] = "Brisia Jodie #0"; // cara assign ke nama3[0]
  
  printf("nama1=%s\n", nama1);
  printf("nama2=%s\n", nama2);
  printf("nama3[0]=%s\n", nama3[0]);
  
  
  int lengthNama3 = sizeof(nama3)/ sizeof(nama3[0]);
  
  // cara assign ke nama3[0] dengan looping
  for (int i = 1; i < lengthNama3; i++) {
    char namaTiga[20];
    sprintf(namaTiga, "Brisia Jodie #%d", i);
    nama3[i] = malloc(strlen(namaTiga) + 1);
    strcpy(nama3[i], namaTiga);
  }
  
  printf("\n");
  
  printf("    %5s | %-20s\n", "Index", "Value");
  printf(" ---------+--------------------------\n");
  
  for (int i = 0; i < lengthNama3; i++) {
    printf("      %03d | %-20s\n", i, nama3[i]);
  }
  
  getch();
  
  return 0;
}

