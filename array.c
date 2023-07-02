//
// Created by masad on 6/29/2023.
//

#include <stdio.h>
#include <conio.h>

void printPembatas(){
  printf("-------------+------------------------------------------+----------+-------\n");
}

int main(){
  
  int N = 5;
  
  
  char *codes[] = {
    "COMP6112036",
    "MATH6184036",
    "COMP6742036",
    "CHAR6019036",
    "COMP6802036"
  };
  
  char *courses[] = {
    "Algorithm and Programming",
    "Discrete Mathematics and Linear Algebra",
    "Algorithm Design and Analysis",
    "Character Building: Pancasila",
    "Program Design Methods"
  };
  
  int credits[] = {6,6,4,2,2};
  char grades[] = {'A','B','A','A','C'};
  
  
  printf("Press any key to open the content...");
  getch();
  
  printf("\n\n");
  
  printf("                      DAFTAR MATA KULIAH YANG DIAMBIL\n\n");
  
  printf("%12s | %-40s | %-8s | %-6s\n", "Code", "Course Name", "Credits", "Grades");
  printPembatas();
  for (int i = 0; i < N; i++) {
    printf("%12s | %-40s | %-8d | %-6c\n", codes[i], courses[i], credits[i], grades[i]);
  }
  
  printf("\n\nPress any key to close...");
  
  getch();
  
  return 0;
}

