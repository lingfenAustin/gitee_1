#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//������Ϸ
int main()
{	
	srand(time(0));
	int number = srand() % 10 + 1;
	int count = 0;
	int a = 0;
	printf("���Ѿ������һ��1��100֮�������\n");
	do {
		printf("��³����1��100֮�������");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("ɵ�ƣ���µ������ˡ�\n");
		}
		else if (a < number) {
			printf("ɵ�ƣ���µ���С�ˡ�\n");
		}
	} while (a != number);
	printf("������%d�β¶��ˣ������\n", count);
	
	return 0;
}
