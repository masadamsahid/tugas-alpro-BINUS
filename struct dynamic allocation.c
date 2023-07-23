//
// Created by masad on 7/23/2023.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Student_s {
  int id;
  char name[32];
  char studyProgramme[32];
  float gpa;
} Student;

void fill_with_n_chars(char character, int number_of_chars, char * dest){
  for (int i = 0; i < number_of_chars; i++) {
    dest[i] = character;
  }
  dest[number_of_chars] = '\0';
}

int main(){
  
  char dash5[51]; fill_with_n_chars('-', 5, dash5);
  char dash10[11]; fill_with_n_chars('-', 10, dash10);
  char dash16[17]; fill_with_n_chars('-', 16, dash16);
  char dash32[33]; fill_with_n_chars('-', 32, dash32);
  
  int n;
  printf("Berapa jumlah mahasiswa? ");
  scanf("%d", &n);
  getchar();
  
  Student * arrMhs = (Student *) malloc(sizeof(Student) * n);
  
  
  for (int i = 0; i < n; i++) {
    printf("\n");
    
    printf("Masukkan ID: ");
    scanf("%d", &arrMhs[i].id); getchar();
    
    printf("Masukkan nama: ");
    scanf("%[^\n]", arrMhs[i].name); getchar();
    
    printf("Masukkan prodi: ");
    scanf("%[^\n]", arrMhs[i].studyProgramme); getchar();
    
    printf("Masukkan GPA: ");
    scanf("%f", &arrMhs[i].gpa); getchar();
    
  }
  
  printf("\n");
  
  
  printf(" +-%10s---%16s---%32s---%5s-+\n", dash10, dash16, dash32, dash5);
  printf(" | %28sDAFTAR MAHASISWA%28s |\n", "", "");
  printf(" +-%10s---%16s---%32s---%5s-+\n", dash10, dash16, dash32, dash5);
  printf(" | %-10s | %-16s | %-32s | %-5s |\n", "ID", "Nama", "Prodi", "GPA");
  printf(" +-%10s-+-%16s-+-%32s-+-%5s-+\n", dash10, dash16, dash32, dash5);
  
  for (int i = 0; i < n; i++) {
    printf(" | %-10d | %-16s | %-32s | %5.2f |\n", arrMhs[i].id, arrMhs[i].name, arrMhs[i].studyProgramme, arrMhs[i].gpa);
  }
  
  printf(" +-%10s-+-%16s-+-%32s-+-%5s-+\n", dash10, dash16, dash32, dash5);
  
  printf("\n\n");
  
  getchar();
  
  free(arrMhs);
  
  return 0;
}

