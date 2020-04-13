#include "saveload.h"

void saveSnackList(Snack *s, int count){
        FILE *fp;
        fp = fopen("snack.txt", "wt");
        for(int i=0; i<count; i++){
                if(s[i].weight != -1 || s[i].price != -1 || s[i].standardPrice != -1 || s[i].starNum != -1){
                        fprintf(fp,"%d %d %d %d %s", s[i].price, s[i].weight, s[i].standardPrice, s[i].starNum, s[i].name);
                }
        }
        fclose(fp);
        printf("저장됨!\n");
}
int loadSnackList(Snack s[]){
        int count = 0;
        FILE *fp;
        fp = fopen("snack.txt", "rt");
        if(fp == NULL){
                printf("=> 파일 없음\n");
                return 0;
        }
        while(count++){
                fscanf(fp,"%d %d %d %d %[^\n]", &s[count].price, &s[count].weight, &s[count].standardPrice, &s[count].starNum, s[count].name);
                if(feof(fp)){
                        break;
                }
        }
        fclose(fp);
        printf("=>로딩 성공\n");
        return count;
}

