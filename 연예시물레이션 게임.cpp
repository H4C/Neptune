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
	printf("�����������������������\n");Sleep(100);
	printf("��                                        ��\n");
	printf("��  �� �� �� �� �� �� �� �� �� �� ��      ��\n");Sleep(100);
	printf("��                                        ��\n");
	printf("�����������������������\n");Sleep(100);
	
	printf("\n\n");
	
	printf("���丮 ���� : ���� �ȴٰ� �Ѿ��� ��� �� �տ� ��� ��밡 ��Ÿ�µ�..."); Sleep(500);
	
	printf("\n\n");
	printf("\t\t\t\t\t\tTeamH4C - H61cker _ Cyh \n");Sleep(100);
}

///////////////////CHOCIE//////////////////
void choice (void){
	
	static int sex;
	static int age;
	static char name[50];
	printf("������ �������ּ��� : 1 - (����)  2 - (����)  ");
	scanf("%d",&sex);
	
	printf("\n\n");
	
	printf("���̸� �����ּ��� : ");
	scanf("%d",&age);
	
	printf("\n\n");
	
	printf("�̸��� �����ּ��� : ");
	scanf("%s",name);
}

int start (void){
	int answer;
	
	printf("\n\n");
	
	printf("����(����) �� �Ѿ��� ���� ���� ���� ��� �������ش�\n ����� �� ���� ?");
	printf("\n\n");
	printf("1. �����ϴ� \n");
	printf("2. �̰� �Ϻη� �Ѿ������� \n");
	
	scanf("%d",&answer);
	
	if(answer == 1){
	
		printf("����(����) : ��, ������ ������~\n");
		exit(0);
	}
	else if(answer == 2){
		static int answer_2;
		printf("����(����) : ��� �ڷ����� ������@@");
		
		printf("\n\n");
		printf("�� : (���� �����..ũ��������)\n");
		printf("\n\n");
		printf("����(����) �� ���� �Ǵ�...\n\n"); 
		printf("�� �����ϼ��� ???");
		
		printf("\n\n");
		printf("�� : (������ ������ �Աⱺ..ũīīīīīī����) \n");
		printf("\n\n");
		printf("1. �� (ļ ������)");
		printf("\n\n");
		printf("2. å�� �����մϴ� ");
		printf("\n\n");
		
		scanf("%d",&answer_2);
		
		if(answer_2==1)
		{
			printf("�� ���� ����!!! �������� \n\n");
			exit(0);
		}
		
		else if (answer_2==2){
			static int answer_3;
			printf("���..������ �����ó׿� \n\n");
			printf("����(����): �� ���������� ����� ����߾��...��� �����Ѱ� ���Ƿ���??");
			printf("\n\n");
			printf("1. ����           ");
			printf("2. ����(����) �� "); 
			printf("\n\n");
			scanf("%d",&answer_3);
			if(answer_3 == 1){
				printf("������ ���� �Ǿ �ϴó����..���̽��ϴ�..\n\n");
				exit(0);
			}
			else if (answer_3 == 2){
				printf("�Ϳ��� �Ʊ⸦ ���� ��ȥ�ؼ� ������ �ູ�ϰ� ��ҽ��ϴ�~!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n");
				while(1)
					MessageBox(NULL,"10���...�׵��� ��ȥ�ϰԵ˴ϴ�..T^T","�����ؿ�!!!!",MB_OK);
			} 
			
		}
	}
	
	return 0;	
	
}
