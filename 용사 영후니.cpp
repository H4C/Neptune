#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int select = 0;
	int sword = 0;
	int arena = 0;
	int arena2 = 0;
	int arena3 = 0;
	int arena4 = 0;
	int build = 0;
	int training=0;
	int training2=0;
	
	srand(time(NULL));
	
	printf("#================용사 최영훈의 전설==================# \n");
	
	printf("========용사 최영훈. 그는 이제부터 여행을 떠나려고 한다========\n");
	
	while (1) 
	{
	   printf("=====시작 마을 =====\n");
	   printf("1. 상점 \n");
	   printf("2. 투기장\n");
	   printf("3. 강화\n");
	   printf("4. 훈련 \n");
	   
	   scanf("%d", &select);
	   
	   if (select == 1) //상점 
	   {
	   	  printf("=======무기 상점입니다=======\n");
	   	  printf("1~3번까지 선택하셔서 마음에 드는 무기를 사세요 (공짜)\n"); 
		  printf("1. 불의검\n");
		  printf("2. 물의검\n");
		  printf("3. 흙의검\n");
		  
		  scanf("%d",&sword);
		  
		  switch (sword) 
		  {
		    case 1:
		    	printf("불의 검을 선택하셨습니다!\n");
				printf("용사님의 이름은 불의 최영훈입니다!\n");
				break;
			case 2:
			    printf("물의 검을 선택하셨습니다!\n");
				printf("용사님의 이름은 물의 최영훈입니다!\n");
				break;
			case 3:
				printf("흙의 검을 선택하셨습니다!\n");
				printf("용사님의 이름은 흙의 최영훈입니다!\n");
				break;
			default :
				printf("번호 선택을 잘못하셨습니다! \n");
				break; 
		  }
		}
		
		if (select == 2) //투기장 
		{
			printf("=======투기장 입니다======\n");
			printf("1~3번까지 선택하셔서 레벨의 맞는 몬스터를 공략하세요! 용사님! \n");
			printf("각 스테이지 클리어마다 한단계씩 총 3단계까지 스테이지가 올라갑니다!\a\a\n"); 
			printf("1. 팽귄\n");
			printf("2. 코알라\n");
			printf("3. 잠자리\n");
			
			scanf("%d",&arena);
			
			switch (arena)
			{
				case 1:
					printf("앗! 야셍에서 팽귄이 튀어나왔다!!!!\a\a\a\a\n");
					printf("용사님 명령을 내려주십시요!\n");
					printf("1. 도발하기\a\n");
					printf("2. 욕하기\a\n");
					printf("3.제 500장 검술 돌파술 사용하기\a\n");
					scanf("%d",&arena2);
					switch (arena2)
					{
						case 1:
							printf("팽귄이 도망쳤습니다!\a\a\a\a\n");
							break;
						case 2:
							printf("팽귄이 화나서 가치 욕하고 도망갔습니다!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("검술 돌파술로 팽귄이 사망하였습니다!\a\a\a\a\a\a\n");
							break;
						default :
							printf("번호 선택을 잘못하셨습니다!\n");
							break; 
					}
				case 2:
					printf("앗! 나무에서 코알라가 나타났다!!!!!\a\a\a\a\a\a\n");
					printf("용사님 명령을 내려주십시요!\n");
					printf("1. 도발하기\a\n");
					printf("2. 욕하기\a\n");
					printf("3.제 500장 검술 돌파술 사용하기\a\n");
					scanf("%d",&arena3);
					switch (arena3)
					{
						case 1:
							printf("코알라가 도망쳤습니다!\a\a\a\a\n");
							break;
						case 2:
							printf("코알라가  화나서 가치 욕하고 도망갔습니다!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("검술 돌파술로 코알라가  사망하였습니다!\a\a\a\a\a\a\n");
							break;
						default :
							printf("번호 선택을 잘못하셨습니다!\n");
							break; 
					}
				case 3:
					printf("앗! 나무에서 잠자리가 나타났다!!!!!\a\a\a\a\a\a\n");
					printf("용사님 명령을 내려주십시요!\n");
					printf("1. 도발하기\a\n");
					printf("2. 욕하기\a\n");
					printf("3.제 500장 검술 돌파술 사용하기\a\n");
					scanf("%d",&arena3);
					switch (arena3)
					{
						case 1:
							printf("잠자리가  도망쳤습니다!\a\a\a\a\n");
							break;
						case 2:
							printf("잠자리가  화나서 가치 욕하고 도망갔습니다!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("검술 돌파술로 잠자리가  사망하였습니다!\a\a\a\a\a\a\n");
							break;
						default :
							printf("번호 선택을 잘못하셨습니다!\n");
							break; 
					}
				break;
			}	 
			}
		if (select == 3) //강화 
		{
			printf("용사님의 강화를 책임지는 최영훈2입니다! 잘부탁드립니다!\n");
			printf("무엇을 도와드릴가요?\a\n");
			
			printf("강화를 원하신다면 1번을 눌러주세요!\a\n");
			printf("강화를 원하시지 않는다면은 아무번호나 눌러주세요~!\n");
			
			scanf("%d",&build);
			
			switch (build)
			{
				case 1:
					printf("강화의 실패하셨습니다! 수고하세요~ㅗㅗ\n");
					break;
				default :
				    printf("현명한 선택이시군요 강화는 원래부터 실패였습니다^^\n");
					break; 
		    }
		    
		}
		if (select == 4) // 훈련
		{
			printf("===========훈련장입니다========\n");
			printf("무엇을 도와드릴가요?! \a\a\a\a\n");
			printf("1~3번까지 선택해주세요!\n");
			printf("1. 근력 강화하기\n");
			printf("2. 검술 강화하기\n");
			printf("3. 스피드 강화하기\n");
			
			scanf("%d",&training2);
			
			switch (training2)
			{
				case 1:
				  printf("근력을 강화하시다가 실패하셔서 사망하셨습니다!\n");
				  break;
				
				case 2:
				  printf("검술을 강화하다가 자기 검의 맞아서 사망했습니다!\n");
				  break;
				
				case 3:
				  printf("스피드 강화하다가 숨이 멎어서 사망했습니다!\n");
				  break;
			}
			printf("훈련을 끝냈습니다!\a\n"); 
		}	 
	}
     return 0;
} 
