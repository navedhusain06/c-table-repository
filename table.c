#include"stdio.h"
#include"conio.h"

void main()
{
int no,limit,i;
clrscr();

printf("\n Enter the number : ");
scanf("%d",&no);

printf("\n Enter the limit : ");
scanf("%d", &limit);

i=1;
do
{
	printf("\n %d*%d=%d",no,i,no*i);
i++;
}while(i<=limit);


getch();
}




