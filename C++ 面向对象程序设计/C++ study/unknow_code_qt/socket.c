
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "en_decryption.h"
#include "ui.h"
#include "strOp.h"
int execmd(char* cmd,char* result) {
    char buffer[128];               
    FILE *pipe = _popen(cmd, "r"); 
    if (!pipe)
          return 0;
        
    while(!feof(pipe)) {
    if(fgets(buffer, 128, pipe)){
            strcat(result,buffer);
        }
    }
    _pclose(pipe);
    return 1;
}

void get_key(char *key, char *username, char *password){
    char result[33]="";
    char command[1000];
    strcpy(command,"curl -s \"http://47.91.222.94/hmk1/get_key.php?username=");
    strcat(command,username);
    strcat(command,"&password=");
    strcat(command,password);
    strcat(command,"\"");
    if(1==execmd(command,result)){
        strcat(key,result);
    }
	else{
        printf("Connect to server error, Please try again later.");
        exit(0);
    }
