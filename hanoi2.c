#include<stdio.h>
#include<conio.h>
void move(int,int,int,int);
void main()
{
int disks=3;
clrscr();
printf("follow these moves:\n");
move(disks,1,3,2);
getch();
}
void move(int count,int start,int finish,int temp)
{
if(count>0)
{
move(count-1,start,temp,finish);
printf("Move disk %d from %d to %d\n",count,start,finish);
move(count-1,temp,finish,start);
}
}


