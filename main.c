//main.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "kakao.h"
#include "search.h"
#include "file.h"
#define SIZE 100

int select_menu(){
	int menu;
	printf("\n*************************\n");
	printf("1. 친구 추가\n2. 친구 목록\n3. 친구 정보 수정\n4. 친구 삭제\n5. 이름으로 친구 검색\n8. 파일로 저장\n9. 파일 불러오기\n0. 종료\n");	
	printf("*************************\n");
	scanf("%d", &menu);
	getchar();
	return menu;
}

int main(){
	Kakao * k[SIZE];

	int menu;
	int count = 0;
	int index = 0;

	while(1){
		menu = select_menu();

		printf("\n");
		if(menu == 1){
			k[index] = (Kakao *)malloc(sizeof(Kakao));
			count += add(k[index++]);
		}
		if(menu == 2) list_k(k, index); 
		else if(menu == 3){
			int num = update_num(k, index);
			getchar();
			update(k[num-1]);
		}
		else if(menu == 4){
			int num = delete_num(k, index);
			int check;
			printf("정말로 삭제하시겠습니까? (삭제: 1) ");
			scanf("%d", &check);
			if(check == 1){
				if(delete_kakao(k[num-1]))
				count--;
			}
			else{
				printf("취소되었습니다 !!\n");
			}
		}
		else if(menu == 5) search_name(k, index);
		else if(menu == 6) search_bd(k, index);
		else if(menu == 7) search_phone_num(k, index);
		else if(menu == 8) save_data(k, index);
		else if(menu == 9){ 
			index = load_data(k);
			count = index;
		}
		else if(menu == 0) break;
	}

	return 0;
}
