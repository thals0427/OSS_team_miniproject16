//kakao.h

typedef struct Kakao{
	char name[100];   //내 카카오톡에 저장된 이름 
	int birth_month;  //생일 달 
	int birth_day;    //생일 날 
	bool is_kakaostory; //카카오 스토리 연동 유무  
	bool is_phone_num;  //전화번호 유무
        char phone_num[20]; //전화번호 (-빼고 저장)
	char profile_music[200]; //프로필뮤직 
	bool is_bookmark;   //즐겨찾기 유무 	
} Kakao;

int add(Kakao * k); //친구 추가하는 함수, 정상적으로 추가되었으면 1을 리턴
void read(Kakao k); //친구 한 명 출력하는 함수
int update(Kakao * k); //친구 정보 수정하는 함수, 정상적으로 수정되었으면 1을 리턴 
int delete_kakao(Kakao * k); //친구 삭제하는 함수, 정상적으로 삭제되었으면 1을 리턴 

void list_k(Kakao * k[], int index); //친구 목록 출력하는 함수 
int update_num(Kakao * k[], int index); //수정할 친구 번호 고르는 함수 
int delete_num(Kakao * k[], int index); //삭제할 친구 번호 고르는 함수 

void save_data(Kakao * k[], int count); //file에 저장하는 함수 
int load_data(Kakao * k[]); //file에서 데이터 불러오는 함수, 친구수를 리턴 
