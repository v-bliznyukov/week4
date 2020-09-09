#include <stdio.h>
#include <stdlib.h>   

int main(){
//create a char array to store command
	char command[1000];
	while(1){
                //scan the command
		fgets(command,1000,stdin);
                //intialize an array of pointersto strings of parameters, make each element null
		char *parameter[1000];		
		for(int i=0;i<1000;i++){
			parameter[i]=NULL;
		}
		int i=0;
                int k, j;
                //first parameter element is a command itself, allocate memory to it and cast the returned pointer
		parameter[0]=(char*)malloc(1000);	
		while(1){ 
                        //untill we dont meet space next line or end of string character, we add characters of command into actual command(not a parameter)
			if(command[i]!=' ' && command[i]!='\n' && command[i]!='\0'){
				parameter[k][j]=command[i];
				i++,j++;
			}
                        //when we meet space we encounter a parameter and store it in the next array cell
			else if(command[i]==' '){
                               //allocate new memory for it, discard counter j
				i++,j=0,k++;
				parameter[k]=(char*)malloc(1000);
			}
                       //otherwise we came to the end of the line
			else{
				break;
			}
		}
                 //runs 2 processes,1 background
		int pid=fork();
                //if it is a child process execute the instruction 
		if(pid==0){
			execvp(parameter[0],parameter,NULL);
		}
	}
	return 0;
}