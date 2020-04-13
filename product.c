#include "product.h"

int selectMenu(){ //메뉴를 고른다 (조회, 추가, 수정, 삭제, 저장, 검색, 종료)
	int menu;
	printf("\n==과자관리 프로그램==\n");
	printf("1. 조회\n2. 추가\n3. 수정\n4. 삭제\n5. 저장\n6. 검색\n0. 종료\n\n");
	printf("원하는 메뉴는? ");
	scanf("%d", &menu);
	return menu;
}
void readSnack(Snack s){ //한개의 과자 정보를 읽어온다
	printf("%8d원 %3dg %7d원 %4d점  %s", s.price, s.weight, s.standardPrice, s.starNum, s.name);
}

int addSnack(Snack *s){ //과자 정보를 추가한다
	printf("제품명은? ");
	getchar();
	fgets(s->name, 50, stdin);
	printf("중량은? ");
	scanf("%d", &s->weight);
	printf("가격은? ");
	scanf("%d", &s->price);
	printf("표준가격은? ");
	scanf("%d", &s->standardPrice);
	printf("별점수은? ");
	scanf("%d", &s->starNum);
	printf("\n=> 추가됨!\n");
	return 1;
}

int updateSnack(Snack *s){ //과자 정보를 수정한다
	printf("제품명은? ");
	getchar();
	fgets(s->name, 50, stdin);
	printf("중량은? ");
	scanf("%d", &s->weight);
	printf("가격은? ");
	scanf("%d", &s->price);
	printf("표준가격은? ");
	scanf("%d", &s->standardPrice);
	printf("별점수은? ");
	scanf("%d", &s->starNum);
	printf("=> 수정됨!\n");
	return 1;
}
int deleteSnack(Snack *s){ //과자 정보를 삭제한다
	s->weight= -1;
	s->price= -1;
	s->standardPrice= -1;
	s->starNum= -1;
	printf("=> 삭제됨!\n");
	return 1;
}

