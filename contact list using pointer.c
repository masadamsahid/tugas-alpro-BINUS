//
// Created by masad on 7/14/2023.
//
// Test inputs are provided in the "./contact-list inputs.txt" file

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Contact_s {
  char nama[16];
  char no_hp[20];
  char no_kantor[20];
  char nama_perusahaan[16];
  char email_address[32];
} Contact;

Contact ** inputContacts(int howMany);
void printContacts(Contact ***pContacts, int length);
void printPembatas();

int main(){
  
  int n;
  printf("Ingin memasukkan berapa kontak? ");
  scanf("%d", &n);
  fflush(stdin);
  
  Contact **pContacts = inputContacts(n);
  
  printf("\n\n");
  
  printContacts(&pContacts, n);
  
  
  printf("\n\nPress any key to exit... ");
  getch();
  
  return 0;
}

Contact ** inputContacts(int howMany){
  
  char buffer[100];
  
  Contact **pContacts;
  
  pContacts = malloc(sizeof(Contact *) * howMany);
  for (int i = 0; i < howMany; i++) {
    pContacts[i] = malloc(sizeof (Contact));
  }
  
  for (int i = 0; i < howMany; i++) {
    printf("\n");
    
    printf("Input detail kontak #%d\n", i+1);
    
    printf("Masukkan nama (max. 16): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %16[^\n]", pContacts[i]->nama);
    
    printf("Masukkan nomor hp (max. 20): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %20[^\n]", pContacts[i]->no_hp);
    
    printf("Masukkan nomor kantor (max. 20): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %20[^\n]", pContacts[i]->no_kantor);
    
    printf("Masukkan nama perusahaan (max. 16): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %16[^\n]", pContacts[i]->nama_perusahaan);
    
    printf("Masukkan alamat email (max. 32): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %32[^\n]", pContacts[i]->email_address);
    
  }
  
  return pContacts;
};

void printContacts(Contact ***pContacts, int length){
  
  printPembatas();
  printf("  | %52s DAFTAR KONTAK %52s |\n", "", "");
  printPembatas();
  printf("  | %-16s | %-20s | %-20s | %-16s | %-32s |\n", "Nama", "No. HP", "No. Kantor", "Nama Perusahaan", "Alamat Email");
  printPembatas();
  
  for (int i = 0; i < length; i++) {
    printf(
      "  | %-16s | %20s | %20s | %-16s | %-32s |\n",
      (*pContacts)[i]->nama,
      (*pContacts)[i]->no_hp,
      (*pContacts)[i]->no_kantor,
      (*pContacts)[i]->nama_perusahaan,
      (*pContacts)[i]->email_address
    );
  }
  printPembatas();
  
};

void printPembatas(){
  printf("  +--%-16s+-%-20s-+-%-20s-+-%-16s-+-%-32s-+\n", "----------------", "--------------------", "--------------------", "----------------", "--------------------------------");
}

