//kakao.c

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kakao.h"

int add(Kakao * k){
	printf("추가할 친구의 이름은? ");
	fgets(k->name,100,stdin);
	k->name[strlen(k->name)-1]= '\0';

	printf("추가할 친구의 생일은? ex) 05 25 ");
	scanf("%d %d", &k->birth_month, &k->birth_day);

	printf("추가할 친구의 카스 유무는? (No: 0) ");
	scanf("%d", &k->is_kakaostory);

	printf("추가할 친구의 전화번호 유무는? (No: 0) ");
	scanf("%d", &k->is_phone_num);

	if(is_phone_num){
		getchar();
		printf("추가할 친구의 전화번호는? ");
		scanf("%[^\n]s", k->phone_num);
	}

	printf("추가할 친구의 프로필뮤직은? ");
	scanf("%[^\n]s", k->profine_music);

	printf("추가할 친구의 즐겨찾기 유무는? (No: 0) ");
	scanf("%d", &k->is_bookmark);
}
