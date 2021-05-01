//main.c

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include "kakao.h"
#define SIZE 100

int select_menu(){
	int menu;
	printf("\n*************************\n");
	printf("1. 친구 추가\n2. 친구 목록\n3. 친구 정보 수정\n4. 파일 저장\n5. 파일 불러오기\n0. 종료\n");
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
		else if(menu == 0) break;
	}

	return 0;
}
