#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//猜数游戏
int main()
{	
	srand(time(0));
	int number = srand() % 10 + 1;
	int count = 0;
	int a = 0;
	printf("我已经想好了一个1到100之间的数。\n");
	do {
		printf("请猜出这个1到100之间的数：");
		scanf_s("%d", &a);
		count++;
		if (a > number) {
			printf("傻逼，你猜的数大了。\n");
		}
		else if (a < number) {
			printf("傻逼，你猜的数小了。\n");
		}
	} while (a != number);
	printf("你用了%d次猜对了，真蠢。\n", count);
	
	return 0;
}
