//file.c

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include "kakao.h"

void save_data(Kakao * k[], int count){
	FILE * fp;
	fp = fopen("kakao.txt","wt");
	for(int i=0; i<count; i++){
		if(k[i]->birth_month==-1 || k[i]->birth_day==-1) continue;
		fprintf(fp,"%d %d %d %d%s\n%s\n%s\n", k[i]->birth_month, k[i]->birth_day, k[i]->is_kakaostory, k[i]->is_bookmark, k[i]->name, k[i]->phone_num, k[i]->profile_music);
	}
	fclose(fp);
	printf("=> 저장됨 !!\n");
}

int load_data(Kakao * k[]){
	int i =0;
	FILE * fp;
	fp = fopen("kakao.txt","rt");
	if(fp == NULL){
		printf("=> 파일없음!!\n");
		return 0;
	}
	else{
		while(!feof(fp)){
			k[i] = (Kakao *)malloc(sizeof(Kakao));
			int n1,n2;
			if(fscanf(fp,"%d %d %d %d", &k[i]->birth_month, &k[i]->birth_day, &n1, &n2)<4) break;
			k[i]->is_kakaostory = n1;
			k[i]->is_bookmark = n2;

			fgets(k[i]->name,100,fp);
			k[i]->name[strlen(k[i]->name)-1] = '\0';
			fgets(k[i]->phone_num,100,fp);
			k[i]->phone_num[strlen(k[i]->phone_num)-1] = '\0';
			fgets(k[i]->profile_music,100,fp);
			k[i]->profile_music[strlen(k[i]->profile_music)-1] = '\0';
			i++;
		}
		printf("=> 로딩성공 !!\n");
	}
	fclose(fp);
	return i;
}
