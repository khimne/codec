/* Sắp xếp chèn : Di chuyển các phần tử có giá trị lớn hơn
giá trị key về sau một vị trí so với vị trí ban đầu của nó
*/

#include<stdio.h>
#define MAX 100
void nhap(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void xuat(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}
void sapxep(int a[],int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=k;
    }
}
int main()
{
    int n=0;  scanf("%d",&n);
    int a[MAX];
    nhap(a,n);
    xuat(a,n);
    sapxep(a,n);
    // printf("Day so da sap xep: \n");
    xuat(a,n);

    return 0;
}
