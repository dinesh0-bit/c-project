#include<stdio.h>
#include<conio.h>
void display(int n);
int main()
{
	int n;
	printf("Enter any numbers");
	scanf("%d",&n);
	display(n);
	getch();
	
}
void display(int n)
{
	int i,j,c;
	for(i=1;i<=n;i++);
{ 
c=0;
for(j=1;j<=i;j++);
{
	if(i%j==0)
	c=c+1;	
}
if(c<=2)
printf("%d",i);
}
}

