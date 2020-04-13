#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50]; 
    int weight; 
    int price; 
    int standardPrice;
    int starNum; 
}Snack; 

int selectMenu(); 
void readSnack(Snack s);

int addSnack(Snack *s); 
int updateSnack(Snack *s);
int deleteSnack(Snack *s); 

void saveSnackList(Snack *s, int count); 
int loadSnackList(Snack s[]); 

void listSnack(Snack *s, int count); 
int selectSnack(Snack *s, int count); 

