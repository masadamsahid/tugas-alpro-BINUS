//
// Created by masad on 7/14/2023.
//

#include <stdio.h>

struct Student{
  char id[16];
  char name[64];
};

typedef struct{
  char id[16];
  char name[64];
} Lecturer;

struct Student getStudent();
Lecturer getLecturer();

int main(){
  
  struct Student student1 = {"STD-001", "Mahasiswa 1"};
  Lecturer lecturer1 = {"LCR-001", "Dosen 1"};
  
  return 0;
}

struct Student getStudent(){
  struct Student std = {};
  return std;
};

Lecturer getLecturer(){
  Lecturer lcr = {};
  return lcr;
};
