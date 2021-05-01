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
	return 1;
}

void read(Kakao k){
	printf("%s %d월 %d일 ", k.name, k.birth_month, k.birth_day);
	printf("[카스: %s] ", k.is_kakaostory ? "yes" : "no");
	printf("[즐찾: %s] ", k.is_bookmark ? "yes" : "no");
	printf("%s %s \n", k.phone_num, k.profile_music);
}

void list_k(Kakao * k[], int index){
	printf("No Name    Birthday  KakaoStory  Bookmark  PhoneNumber  ProfileMusic\n");
	for(int i =0; i<index; i++){
		if(k[i]->birth_month == -1 || k[i]->birth_day == -1) continue;
		printf("%2d ", i+1);
		read(*k[i]);
	}
}

int update_num(Kakao * k[], int index){
	list_k(k, index);
	printf("수정할 친구 번호는? ");
	int num;
	scanf("%d", &num);
	return num;
}

int update(Kakao * k){
	
	printf("수정할 친구의 이름은? ");
	fgets(k->name,100,stdin);
	k->name[strlen(k->name)-1]= '\0';

	printf("수정할 친구의 생일은? ex) 05 25 ");
	scanf("%d %d", &k->birth_month, &k->birth_day);

	printf("수정할 친구의 카스 유무는? (No: 0) ");
	int n1;	
	scanf("%d", &n1);
	k->is_kakaostory = n1;   //bool 타입에 scanf가 안돼서 이렇게 해요!

	getchar();
	printf("수정할 친구의 전화번호는? ");
	scanf("%[^\n]s", k->phone_num);

	getchar();
	printf("수정할 친구의 프로필뮤직은? ");
	scanf("%[^\n]s", k->profile_music);

	printf("수정할 친구의 즐겨찾기 유무는? (No: 0) ");
	int n2;
	scanf("%d", &n2);
	k->is_bookmark = n2;
	return 1;
}

int delete_num(Kakao * k[], int index){
	list_k(k, index);
	printf("삭제할 친구 번호는? ");
	int num;
	scanf("%d", &num);
	return num;
}

int delete_kakao(Kakao * k){
	k->birth_month = -1;
	k->birth_day = -1;
	printf("=> 삭제됨 !!\n");

	return 1;
}
