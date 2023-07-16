//
// Created by masad on 7/14/2023.
//
// Test inputs are provided in the "./contact-list inputs.txt" file

#include <stdio.h>
#include <conio.h>

typedef struct Contact_s {
  char nama[20];
  char no_hp[20];
  char no_kantor[20];
  char nama_perusahaan[20];
  char email_address[20];
} Contact;

void printPembatas();

int main(){
  
  int n;
  printf("Ingin memasukkan berapa kontak? ");
  scanf("%d", &n);
  fflush(stdin);
  
  Contact contacts[n];
  
  char buffer[100];
  
  for (int i = 0; i < n; i++) {
    printf("\n");
    
    printf("Input detail kontak #%d\n", i+1);
    
    printf("Masukkan nama (max. 16): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %16[^\n]", contacts[i].nama);
    
    printf("Masukkan nomor hp (max. 20): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %20[^\n]", contacts[i].no_hp);
    
    printf("Masukkan nomor kantor (max. 20): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %20[^\n]", contacts[i].no_kantor);
    
    printf("Masukkan nama perusahaan (max. 16): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %16[^\n]", contacts[i].nama_perusahaan);
    
    printf("Masukkan alamat email (max. 32): ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer," %32[^\n]", contacts[i].email_address);
    
  }
  
  
  printf("\n\n");
  
  
  printPembatas();
  printf("  | %51s DAFTAR KONTAK %50s |\n", "", "");
  printPembatas();
  printf("  | %-16s | %-20s | %-20s | %-16s | %-32s |\n", "Nama", "No. HP", "No. Kantor", "Nama Perusahaan", "Alamat Email");
  printPembatas();
  
  for (int i = 0; i < n; i++) {
    printf(
      "  | %-16s | %20s | %20s | %-16s | %-32s |\n",
      contacts[i].nama,
      contacts[i].no_hp,
      contacts[i].no_kantor,
      contacts[i].nama_perusahaan,
      contacts[i].email_address
    );
  }
  printPembatas();
  
  
  printf("\n\nPress any key to exit... ");
  getch();
  
  return 0;
}

void printPembatas(){
  printf("  +--%-16s+-%-20s-+-%-20s-+-%-16s-+-%-32s-+\n", "----------------", "--------------------", "--------------------", "----------------", "--------------------------------");
}

