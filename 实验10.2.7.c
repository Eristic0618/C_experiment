#include <stdio.h>
#define N 10
int search(int *p, int x, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (p[i] == x)
            return i;
    }
    return -1;
}
int main()
{
    int indx, m, a[N] = {10, 20, 35, 40, 43, 44, 45, 50, 51, 60};
    scanf("%d", &m);
    indx = search(a, m, N);
    if (indx >= 0)
        printf("index=%d\n", indx);
    else
        printf("NOEXIST\n");
    return 0;
}