#include <stdio.h>
#include <unistd.h>
int main(){
for(int i=0; i<5; i++){
fork();
sleep(5);
}
return 0;
}
//each fork splits process into 2 therefore the number of fork calls will result in 2^n processes
