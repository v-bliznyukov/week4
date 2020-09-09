# include <stdio.h>
# include <stdlib.h>

int main ()
{

int n=3;
int f=fork();
int pid=getpid();
//fork returns 0 if it is a child process
if(f==0){
printf("Hello from child [%d-%d]\n",pid, n);}
else{
//another number if it is a parent process
printf("Hello from parent [%d-%d]\n",pid,n);}
return 0;
}
