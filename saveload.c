#include <stdio.h>

void saveSnackList(Snack *s, int count){
	FILE *fp;
	fp = fopen("snack.txt", "wt");
	for(int i=0; i<count; i++){
		if(s[i].weight != -1 && s[i].price != -1 && s[i].standardPrice != -1 && s[i].starNum){
			fprintf("%d %d %d %d %s\n", s.price, s.weight, s.standardPrice, s.starNum, s.name);
		}	
	}
	fclose(fp);
	printf("저장됨!\n");
} 
int loadSnackList(Snack s[]){
	int count = 0;
	FILE *fp;
	fp = fopen("food.txt", "rt");
	if(fp == NULL){
		printf("=> 파일 없음\n");
		return 0;
	}
	while(count++){
		fscanf(fp, "%d %c %[^\n]", &f[count].price, &f[count].type, f[count].name);
		if(feof(fp)){
			break;
		}
	}
	fclose(fp);
	printf("=>로딩 성공\n");
	return count;
}
