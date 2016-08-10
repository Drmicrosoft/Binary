#include<stdio.h>
void mayar ( int x );

void mayar ( int x )
{
int i =0;
int y [7]={1,2,4,8,16,32,64};
int z [7]={0,0,0,0,0,0,0};
for(i=6;i>=0;i--)
printf("z[%d] = %c \n",i,z[i]);

for(i=6;i>=0;i--)
{
if(x/y[i]>0)
{
z[i]=1;
x=x-y[i];
}
else 
{
z[i]=0;
}


}
for(i=6;i>=0;i--)
printf("z[%d] = %d \n",i,z[i]);
	
}




int main ()
{
int x = 0 ; 
printf("enter yourt number");
scanf("%d",&x);
mayar(x);
}
