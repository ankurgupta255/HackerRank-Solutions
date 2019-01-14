#include<stdio.h>
int main()
{
    int i=0;
    int x1=0;
    int x2=0;
    int v1=0;
    int v2=0;
    int a[100];
    int b[100];
    int flag=0;
    scanf("%d %d %d %d ",&x1,&v1,&x2,&v2);
    for(i=0;i<10000;i++)
    {
        a[i]=x1+(i*v1);
        b[i]=x2+(i*v2);
        if(a[i]==b[i])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
        printf("NO");
}
