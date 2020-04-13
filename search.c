#include "search.h"

void searchSnackName(Snack *s, int count){
	int scount = 0;
	char search[50];
	printf("검색할 이름은?");
	scanf("%s", search);
	printf("\n번호    가격  중량 표준가격 별점수  제품명");
	printf("\n========================================");
	for(int i =0; i<count; i++){
		if(strstr(s[i].name, search)){
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("=> 검색된 데이터 없음!");
	} 
}
 
void searchSnackPrice(Snack *s, int count){
	int scount = 0;
	int min=0, max=0;
	printf("검색할 최소가격과 최대 가격을 입력하세요(inclusive)");
	printf("최소가격: ");
	scanf("%d", &min);
	printf("최대가격: ");
	scanf("%d", &max);
	for(int i =0; i<count; i++){
		if(s[i].price >= min && s[i].price <= max){
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("검색된 데이터 없음!");
	}
} 
void searchSnackStarNum(Snack *s, int count){
	int scount = 0;
	int min=0, max=0;
	printf("검색할 최소, 최대 별 개수를 입력하세요(inclusive)");
	printf("최소별점: ");
	scanf("%d", &min);
	printf("최대별점: ");
	scanf("%d", &max);
	for(int i =0; i<count; i++){
		if(s[i].starNum >= min && s[i].starNum <= max){
			readSnack(s[i]);
			scount++;
		}
	}
	if(scount == 0){
		printf("검색된 데이터 없음!");
	}
} 



