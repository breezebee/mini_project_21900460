#include "product.h"
#include "manager.h"
#include "saveload.h"

int main(void){
#ifdef DEBUG
	printf("Debug: [%s : %d] %s\n",__FILE__,__LINE__,__func__);
#endif
        Snack s[100];
        int count = 0, menu = 0;
        int curcount = 0;
        while (1){
                menu = selectMenu();
                if (menu == 0) break;
                if (menu == 1 || menu == 3 || menu == 4){
                        if(count == 0){
                                continue;
                        }
                }
                if (menu == 1){
			if(count > 0){
                        	listSnack(s,curcount);
			}
#ifdef DEBUG
	printf("\nDebug:[%s : %d] %s %s %s",__FILE__,__LINE__,__func__,__DATE__,__TIME__);
	printf("\nDebug: [listSnack called] count = %d, curcount = %d\n", count, curcount);
#endif
                }
                else if (menu == 2){
                        count += addSnack(&s[curcount++]);
#ifdef DEBUG
	printf("\nDebug:[%s : %d] %s %s %s",__FILE__,__LINE__,__func__,__DATE__,__TIME__);
	printf("\nDebug: [addSnack called] count = %d, curcount = %d\n", count, curcount);
#endif
                }
                else if (menu == 3){
                        int no = selectSnack(s, curcount);
			if(no==0){
				printf("취소되었습니다.");
                                continue;
                        }
                        updateSnack(&s[no-1]);
                }
                else if (menu == 4){
                        int no, deleteok;
                        no = selectSnack(s, curcount);
                        if(no==0){
                                printf("취소되었습니다.");
                                continue;
                        }
                        printf("정말 삭제하시겠습니까?(예:1)");
                        scanf("%d", &deleteok);
                        if(deleteok == 1){
                                deleteSnack(&s[no-1]);
                                count--;
                        }
#ifdef DEBUG
	printf("\nDebug:[%s : %d] %s %s %s",__FILE__,__LINE__,__func__,__DATE__,__TIME__);
	printf("\nDebug: [deleteSnack called] count = %d, curcount = %d\n", count, curcount);
#endif
                }
        }
        printf("종료됨!\n");
        return 0;
}

