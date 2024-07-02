#include <stdio.h>

int main(void)
{
    int ar[100];
    int * const ptr_ar = ar;

    int i=0;
    while (scanf("%d", &*(ptr_ar+i)) && *(ptr_ar+i)!=78)
    {
        i++;
    }

    for (int j =0;j<i;++j)
    {
        printf("%d ", *(ptr_ar+j));
    }

    // здесь продолжайте программу

    return 0;
}