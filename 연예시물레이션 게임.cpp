#include <stdio.h>
#include <windows.h>
#include <conio.h> 

void menu(void); // menu
void choice(void); //choice
int start (void); //start

int main()
{
	menu();
	choice();
	start();
	
	return 0;
}
////////////////////MENU//////////////////////
void menu(void){
	printf("□■□■□■□■□■□■□■□■□■□■□■\n");Sleep(100);
	printf("□                                        ■\n");
	printf("□  본 격 연 예 시 물 레 이 션 게 임      ■\n");Sleep(100);
	printf("□                                        ■\n");
	printf("□■□■□■□■□■□■□■□■□■□■□■\n");Sleep(100);
	
	printf("\n\n");
	
	printf("스토리 설명 : 길을 걷다가 넘어진 당신 내 앞에 운명에 상대가 나타는데..."); Sleep(500);
	
	printf("\n\n");
	printf("\t\t\t\t\t\tTeamH4C - H61cker _ Cyh \n");Sleep(100);
}

///////////////////CHOCIE//////////////////
void choice (void){
	
	static int sex;
	static int age;
	static char name[50];
	printf("성별을 선택해주세요 : 1 - (남자)  2 - (여자)  ");
	scanf("%d",&sex);
	
	printf("\n\n");
	
	printf("나이를 적어주세요 : ");
	scanf("%d",&age);
	
	printf("\n\n");
	
	printf("이름을 적어주세요 : ");
	scanf("%s",name);
}

int start (void){
	int answer;
	
	printf("\n\n");
	
	printf("여성(남성) 이 넘어진 나를 위해 손을 뻗어서 일으켜준다\n 당신이 할 말은 ?");
	printf("\n\n");
	printf("1. 고맙습니다 \n");
	printf("2. 이거 일부러 넘어진거임 \n");
	
	scanf("%d",&answer);
	
	if(answer == 1){
	
		printf("여성(남성) : 네, 조심히 들어가세요~\n");
		exit(0);
	}
	else if(answer == 2){
		static int answer_2;
		printf("여성(남성) : 어머 박력있쩡 영훈찡@@");
		
		printf("\n\n");
		printf("나 : (먹혀 들었군..크하하하하)\n");
		printf("\n\n");
		printf("여성(남성) 이 말을 건다...\n\n"); 
		printf("뭐 좋아하세요 ???");
		
		printf("\n\n");
		printf("나 : (나에게 식은죽 먹기군..크카카카카카카하하) \n");
		printf("\n\n");
		printf("1. 너 (캬 지리구)");
		printf("\n\n");
		printf("2. 책을 좋아합니다 ");
		printf("\n\n");
		
		scanf("%d",&answer_2);
		
		if(answer_2==1)
		{
			printf("이 변태 세끼!!! 꺼져버렷 \n\n");
			exit(0);
		}
		
		else if (answer_2==2){
			static int answer_3;
			printf("어머..분위기 있으시네요 \n\n");
			printf("여성(남성): 저 오래전부터 당신을 사랑했어요...어디 조용한곳 가실레요??");
			printf("\n\n");
			printf("1. 모텔           ");
			printf("2. 여성(남성) 집 "); 
			printf("\n\n");
			scanf("%d",&answer_3);
			if(answer_3 == 1){
				printf("모텔이 폭파 되어서 하늘나라로..가셨습니다..\n\n");
				exit(0);
			}
			else if (answer_3 == 2){
				printf("귀여운 아기를 낳고 결혼해서 평생평생 행복하게 살았습니다~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
				while(1)
					MessageBox(NULL,"10년뒤...그들은 이혼하게됩니다..T^T","축하해요!!!!",MB_OK);
			} 
			
		}
	}
	
	return 0;	
	
}
