hgjhg nano ex3.c#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdlib.h>
int main(){
//array of characters to store command
char commandline[1000];
while(1){
 //scans the command of most 1000 caracters
 fgets(commandline, 1000, stdin);
//executes command
system(commandline);
}
return 0;}
