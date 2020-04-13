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

} 
void searchSnackStarNum(Snack *s, int count){

}

