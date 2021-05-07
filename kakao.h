//kakao.h

typedef struct Kakao{
	char name[100];   //내 카카오톡에 저장된 이름
	int birth_month;  //생일 달
	int birth_day;    //생일 날
	bool is_kakaostory; //카카오 스토리 연동 유무
	bool is_phone_num;  //전화번호 유무
        char phone_num[20]; //전화번호 
        char phone_num[20]; //전화번호 (-빼고 저장)
	char profile_music[200]; //프로필뮤직
	bool is_bookmark;   //즐겨찾기 유무
} Kakao;

int add(Kakao * k); //친구 추가하는 함수, 정상적으로 추가되었으면 1을 리턴
void read(Kakao k); //친구 한 명 출력하는 함수
void list_k(Kakao * k[], int index); //친구 목록 출력하는 함수
