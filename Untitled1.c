#include<stdio.h>

int main ()

{
   int l,r,i=1,vl=0,vr=0;
   scanf("%d%d",&l,&r);

    for (i=1;(vr-vl)<l;i++)
    {
        vl+=l;
        vr+=r;

    }
     printf("%d\n",i);


    return 0;
}
