#include<stdio.h>
#include<stdlib.h>
main()
{
int i=3;
int pid,res;
pid=fork();
if(pid==0)
printf("%d",i*i);
res=wait();
else
printf("oops");
}

