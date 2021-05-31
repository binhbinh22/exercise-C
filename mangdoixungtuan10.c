#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("nhập chiều dài mảng: %d ", n);
    int a[100];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=0; i < n;i++)
    {
        if(a[i] == a[n-1-i])
        {
            printf("mảng đối xứng");
        }
        if ( a[i] != a[n-1-i]) {
            printf("mảng không đối xứng");
        }

    }
}