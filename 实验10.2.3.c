#include <stdio.h>
#define N 10
void insert(int* p, int x, int n) // x表示待插入的数值，n表示数组中已有的数值的个数。
{
    int i, j; // 不允许再定义其它变量和数组
    j = x;
    for (i = n; i > 0 && p[i - 1] > j; i--)
    {
        p[i] = p[i - 1];
    }
    p[i] = j;
}

int main()
{
    int i, m, a[N] = { 10, 12, 14, 17, 20, 25, 28, 31, 40 };
    scanf("%d", &m);
    insert(a, m, 9);
    for (i = 0; i < N; i++)
        printf("%4d", a[i]);
    printf("\n");
    return 0;
}