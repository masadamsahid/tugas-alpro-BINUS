//
// Created by masad on 7/9/2023.
//

#include <stdio.h>

struct EntityData{};

struct DesignReport{};

/*Return berupa array of strings yang merupakan entity names*/
/*Menerima 2 argumen sebuah string designName, serta alamat pointer dari array of strings pDesignEntityNames*/
char** getDesignEntityNames(char *designName, char **pDesignEntityNames);

/*Return berupa EntityData*/
/*Memiliki parameter pEntityNames yang berupa pointer dari array of strings*/
struct EntityData produceDesignReports(char **pEntityNames);

/*Return berupa EntityData*/
/*Memiliki parameter pEntityNames yang berupa pointer dari array of strings*/
struct EntityData collateEntities(char **pEntityNames);

/*Return beripa DesignReport*/
/*Membutuhkan entityData dengan tipe EntityData sebagai argument ketika di-invoke*/
struct DesignReport generateReport(struct EntityData entityData);

int main(){
  return 0;
}


