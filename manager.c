#include "manager.h"

void listSnack(Snack *s, int count){ 	
	printf("\n번호    가격  중량 표준가격 별점수  제품명");
        printf("\n========================================\n");
        for(int i = 0; i< count; i++){
		if(s[i].weight == -1 && s[i].price == -1 && s[i].standardPrice == -1 && s[i].starNum){
			continue;
		}
                printf("%2d", i+1);
                readSnack(s[i]);
        }
}
int selectSnack(Snack *s, int count){ 
	int num;
	listSnack(s, count);
	printf("\n번호를 고르세요 (취소: 0) ");
	scanf("%d", &num);
	return num;
}
