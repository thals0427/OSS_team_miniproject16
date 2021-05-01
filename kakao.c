//kakao.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "kakao.h"

int add(Kakao * k){
	printf("추가할 친구의 이름은? ");
	fgets(k->name,100,stdin);
	k->name[strlen(k->name)-1]= '\0';

	printf("추가할 친구의 생일은? ex) 05 25 ");
	scanf("%d %d", &k->birth_month, &k->birth_day);

	printf("추가할 친구의 카스 유무는? (No: 0) ");
	int n1;	
	scanf("%d", &n1);
	k->is_kakaostory = n1;   //bool 타입에 scanf가 안돼서 이렇게 해요!

	getchar();
	printf("추가할 친구의 전화번호는? ");
	scanf("%[^\n]s", k->phone_num);

	getchar();
	printf("추가할 친구의 프로필뮤직은? ");
	scanf("%[^\n]s", k->profile_music);

	printf("추가할 친구의 즐겨찾기 유무는? (No: 0) ");
	int n2;
	scanf("%d", &n2);
	k->is_bookmark = n2;
}
