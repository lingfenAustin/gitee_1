#include <stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        // ����ո�
        for (j = 0; j < 13 - i; j++)
            printf(" ");
        // ����Ǻ�
        for (k = 0; k < 2 * i + 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}
