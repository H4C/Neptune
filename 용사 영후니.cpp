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
	
	printf("#================��� �ֿ����� ����==================# \n");
	
	printf("========��� �ֿ���. �״� �������� ������ �������� �Ѵ�========\n");
	
	while (1) 
	{
	   printf("=====���� ���� =====\n");
	   printf("1. ���� \n");
	   printf("2. ������\n");
	   printf("3. ��ȭ\n");
	   printf("4. �Ʒ� \n");
	   
	   scanf("%d", &select);
	   
	   if (select == 1) //���� 
	   {
	   	  printf("=======���� �����Դϴ�=======\n");
	   	  printf("1~3������ �����ϼż� ������ ��� ���⸦ �缼�� (��¥)\n"); 
		  printf("1. ���ǰ�\n");
		  printf("2. ���ǰ�\n");
		  printf("3. ���ǰ�\n");
		  
		  scanf("%d",&sword);
		  
		  switch (sword) 
		  {
		    case 1:
		    	printf("���� ���� �����ϼ̽��ϴ�!\n");
				printf("������ �̸��� ���� �ֿ����Դϴ�!\n");
				break;
			case 2:
			    printf("���� ���� �����ϼ̽��ϴ�!\n");
				printf("������ �̸��� ���� �ֿ����Դϴ�!\n");
				break;
			case 3:
				printf("���� ���� �����ϼ̽��ϴ�!\n");
				printf("������ �̸��� ���� �ֿ����Դϴ�!\n");
				break;
			default :
				printf("��ȣ ������ �߸��ϼ̽��ϴ�! \n");
				break; 
		  }
		}
		
		if (select == 2) //������ 
		{
			printf("=======������ �Դϴ�======\n");
			printf("1~3������ �����ϼż� ������ �´� ���͸� �����ϼ���! ����! \n");
			printf("�� �������� Ŭ����� �Ѵܰ辿 �� 3�ܰ���� ���������� �ö󰩴ϴ�!\a\a\n"); 
			printf("1. �ر�\n");
			printf("2. �ھ˶�\n");
			printf("3. ���ڸ�\n");
			
			scanf("%d",&arena);
			
			switch (arena)
			{
				case 1:
					printf("��! �߼Ŀ��� �ر��� Ƣ��Դ�!!!!\a\a\a\a\n");
					printf("���� ����� �����ֽʽÿ�!\n");
					printf("1. �����ϱ�\a\n");
					printf("2. ���ϱ�\a\n");
					printf("3.�� 500�� �˼� ���ļ� ����ϱ�\a\n");
					scanf("%d",&arena2);
					switch (arena2)
					{
						case 1:
							printf("�ر��� �����ƽ��ϴ�!\a\a\a\a\n");
							break;
						case 2:
							printf("�ر��� ȭ���� ��ġ ���ϰ� ���������ϴ�!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("�˼� ���ļ��� �ر��� ����Ͽ����ϴ�!\a\a\a\a\a\a\n");
							break;
						default :
							printf("��ȣ ������ �߸��ϼ̽��ϴ�!\n");
							break; 
					}
				case 2:
					printf("��! �������� �ھ˶� ��Ÿ����!!!!!\a\a\a\a\a\a\n");
					printf("���� ����� �����ֽʽÿ�!\n");
					printf("1. �����ϱ�\a\n");
					printf("2. ���ϱ�\a\n");
					printf("3.�� 500�� �˼� ���ļ� ����ϱ�\a\n");
					scanf("%d",&arena3);
					switch (arena3)
					{
						case 1:
							printf("�ھ˶� �����ƽ��ϴ�!\a\a\a\a\n");
							break;
						case 2:
							printf("�ھ˶�  ȭ���� ��ġ ���ϰ� ���������ϴ�!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("�˼� ���ļ��� �ھ˶�  ����Ͽ����ϴ�!\a\a\a\a\a\a\n");
							break;
						default :
							printf("��ȣ ������ �߸��ϼ̽��ϴ�!\n");
							break; 
					}
				case 3:
					printf("��! �������� ���ڸ��� ��Ÿ����!!!!!\a\a\a\a\a\a\n");
					printf("���� ����� �����ֽʽÿ�!\n");
					printf("1. �����ϱ�\a\n");
					printf("2. ���ϱ�\a\n");
					printf("3.�� 500�� �˼� ���ļ� ����ϱ�\a\n");
					scanf("%d",&arena3);
					switch (arena3)
					{
						case 1:
							printf("���ڸ���  �����ƽ��ϴ�!\a\a\a\a\n");
							break;
						case 2:
							printf("���ڸ���  ȭ���� ��ġ ���ϰ� ���������ϴ�!\a\a\a\a\a\a\n");
							break;
						case 3:
						    printf("�˼� ���ļ��� ���ڸ���  ����Ͽ����ϴ�!\a\a\a\a\a\a\n");
							break;
						default :
							printf("��ȣ ������ �߸��ϼ̽��ϴ�!\n");
							break; 
					}
				break;
			}	 
			}
		if (select == 3) //��ȭ 
		{
			printf("������ ��ȭ�� å������ �ֿ���2�Դϴ�! �ߺ�Ź�帳�ϴ�!\n");
			printf("������ ���͵帱����?\a\n");
			
			printf("��ȭ�� ���ϽŴٸ� 1���� �����ּ���!\a\n");
			printf("��ȭ�� ���Ͻ��� �ʴ´ٸ��� �ƹ���ȣ�� �����ּ���~!\n");
			
			scanf("%d",&build);
			
			switch (build)
			{
				case 1:
					printf("��ȭ�� �����ϼ̽��ϴ�! �����ϼ���~�Ǥ�\n");
					break;
				default :
				    printf("������ �����̽ñ��� ��ȭ�� �������� ���п����ϴ�^^\n");
					break; 
		    }
		    
		}
		if (select == 4) // �Ʒ�
		{
			printf("===========�Ʒ����Դϴ�========\n");
			printf("������ ���͵帱����?! \a\a\a\a\n");
			printf("1~3������ �������ּ���!\n");
			printf("1. �ٷ� ��ȭ�ϱ�\n");
			printf("2. �˼� ��ȭ�ϱ�\n");
			printf("3. ���ǵ� ��ȭ�ϱ�\n");
			
			scanf("%d",&training2);
			
			switch (training2)
			{
				case 1:
				  printf("�ٷ��� ��ȭ�Ͻôٰ� �����ϼż� ����ϼ̽��ϴ�!\n");
				  break;
				
				case 2:
				  printf("�˼��� ��ȭ�ϴٰ� �ڱ� ���� �¾Ƽ� ����߽��ϴ�!\n");
				  break;
				
				case 3:
				  printf("���ǵ� ��ȭ�ϴٰ� ���� �ܾ ����߽��ϴ�!\n");
				  break;
			}
			printf("�Ʒ��� ���½��ϴ�!\a\n"); 
		}	 
	}
     return 0;
} 
