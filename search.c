//search.c

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "search.h"

void search_name(Kakao * k[], int index){
	char s_name[50];
	int check = 0;
	printf("검색할 이름은? ");
	getchar();
	scanf("%[^\n]s", s_name);
	
	printf("No Name    Birthday  KakaoStory  Bookmark  PhoneNumber  ProfileMusic\n");
	for(int i =0; i<index; i++){
		if(k[i]->birth_month==-1 || k[i]->birth_day==-1) continue;
		if(strstr(k[i]->name, s_name)){
			check = 1;
			printf("%2d ", i+1);
			read(*k[i]);
		}
	}
	if(!check)	printf("=> 해당 친구가 없습니다.\n");
}
