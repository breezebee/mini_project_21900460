#include "search.h"

void searchSnackName(Snack *s, int count){
	int scount = 0;
	char search[50];
	printf("검색할 이름은?");
	scanf("%s", search);
	printf("\n번호    가격  중량 표준가격 별점수  제품명");
        printf("\n========================================\n");
	for(int i =0; i<count; i++){
		if(strstr(s[i].name, search)){
			printf("%2d", i+1);
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("=> 검색된 데이터 없음!\n");
	} 
}
 
void searchSnackPrice(Snack *s, int count){
	int scount = 0;
	int min=0, max=0;
	printf("검색할 최소가격과 최대 가격을 입력하세요\n");
	printf("최소가격: ");
	scanf("%d", &min);
	printf("최대가격: ");
	scanf("%d", &max);
	printf("\n번호    가격  중량 표준가격 별점수  제품명");
        printf("\n========================================\n");
	for(int i =0; i<count; i++){
		if(s[i].price >= min && s[i].price <= max){
			printf("%2d", i+1);
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("검색된 데이터 없음!\n");
	}
} 
void searchSnackStarNum(Snack *s, int count){
	int scount = 0;
	int min=0, max=0;
	printf("검색할 최소, 최대 별 개수를 입력하세요\n");
	printf("최소별점: ");
	scanf("%d", &min);
	printf("최대별점: ");
	scanf("%d", &max);
	printf("\n번호    가격  중량 표준가격 별점수  제품명");
        printf("\n========================================\n");
	for(int i =0; i<count; i++){
		if(s[i].starNum >= min && s[i].starNum <= max){
			printf("%2d", i+1);
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("검색된 데이터 없음!\n");
	}
} 



