
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<io.h>

#include "socket.h"
#include "strOp.h"
 char str[32768];
extern int sign;
 char file_name[100];
extern int cnt_p[100],s;
int len,i;
int sign = 1;
char txt[1000];
void clean_str(char *temp){
	while(temp[i++]!='\0'){
		temp[i-1]='\0';
	}
}
void show_menu(){
	printf("            =========String Manager==========\n");
	printf("            Your file has been encrypted automaticly.\n");
	printf("            - I: Load a file into a string in memory\n");
	printf("            - B: Combine another file to tail\n");
	printf("            - O: Output/save the string in memory to file. \n");
	printf("            - W: Count the word number in the file\n");
	printf("            - C: Count the character number in the file \n");
	printf("            - L: Count the line numbers of the file \n");
	printf("            - F: Find a word in the file \n");
	printf("            - R: Replace a word by a new word in the file\n");
	printf("            - P: Print the file\n");
	printf("            - Q: Quit the program.\n");
	printf("            - D: Quit and Decrypt file.\n");
	printf("            ==================================\n");
}
void menu_choice(){
	char command;
	char c;
	FILE *fp;
	printf("Please provide us a command:");
	setbuf(stdin,NULL);
	scanf("%c",&command);
	switch(command){
		case 'D':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			fp=fopen(file_name,"w+");
			len=strlen(str);
			char str1[32768];
			
			fprintf(fp,"%s",str1);
			fclose(fp);
			printf("Thanks for using, Your file has been decrypted!\n");
			exit(0);
		}
		case 'I':{
			clean_str(str);
			fp=fopen(file_name,"r+");
			fgets(str,32768,fp);
			while((fgets(txt,1000,fp))!=NULL){
				strcat(str,txt);
			}
			fclose(fp);
			sign=1;
			printf("Load file successful!\n");
			system("PAUSE");
			break;
		}
		case 'O':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			fp=fopen(file_name,"w+");
			fprintf(fp,"%s",str);
			fclose(fp);
			break;
		}
		case 'W':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int c;
			int len=strlen(str);
			char str1[32768];
			
			c = count_word(str1);
			printf("The count of words in this file is: %d\n",c);
			system("PAUSE");
			break;
		}
		case 'B':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int len=strlen(str);
			char str1[32768],str2[1000],name[100];
			
			printf("Please input a file name that you want to combine(haven't been encrypted):");
			scanf("%s",name);
			if (access(name,0)==-1){
				printf("File doesn't exist\n");
				break;
			}
			fp=fopen(name,"r+");
			fgets(str2,32768,fp);
			while((fgets(txt,1000,fp))!=NULL){
				strcat(str2,txt);
			}
			fclose(fp);
			strcat(str1,str2);
			clean_str(str);
			printf("The files have combined, New file's contents is:%s\nDon't forget use O to save to file.",str1);

			clean_str(str1);
			clean_str(str2);
			system("PAUSE");
			break;
		}
		case 'C':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int c;
			int len=strlen(str);
			char str1[32768];
		
			c = count_character(str1);
			printf("The count of characters in this file is: %d\n",c);
			system("PAUSE");
			break;
		}
		case 'L':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int c;
			int len=strlen(str);
			char str1[32768];

			c = count_line(str1);
			printf("The count of lines in this file is: %d\n",c);
			system("PAUSE");
			break;
		}
		case 'F':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int len=strlen(str);
			char str1[32768],str2[1000];
	
			printf("\nPlease enter a word:");
			scanf("%s",str2);
			search_word(str1,str2);
			system("PAUSE");
			break;
		}
		case 'P':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int len=strlen(str);
			char str1[32768],str2[1000];

			printf("Look, This is your file!\n\n");
			printf("%s\n",str1);
			system("PAUSE");
			break;
		}
		
		case 'R':{
			if (sign!=1){
				printf("\n\nPlease load file first!\n\n");
				break;
			}
			int c,cnt[100];
			int len=strlen(str);
			char str1[32768],str2[1000],str3[1000],strtmp[32768];



			printf("Please input the word that you want to replace:");
			scanf("%s",str2);
			search_word(str1,str2);
			if ((sizeof(cnt_p)/sizeof(int))<1){  
        		printf("The word is not exist.\n");  
   			}else{
   				printf("Which one do you want to replace? If you don't want to replace or not found, please input 0\n");
   				scanf("%d",&i);
   				if (i==0)
   					break;
   				int j,k=0;
   				for (j=0;j<s;j++){
   					if (i==cnt_p[j]+1){
   						k++;
   					}
   				}
   				if (k==0){
   					printf("Input position is not currect!\n");
   					break;
   				}
   				i--;
   				printf("You want to replace to what?  Please input:");
   				scanf("%s",str3);
   				replaceWord(strtmp,str1,str2,i,str3);
   				clean_str(str);
				strcpy(str1,strtmp);
				len=strlen(strtmp);
				printf("The result after replace:\n%s\nDon't forget use O to save to file",str1);


				clean_str(str1);
				clean_str(str2);
				clean_str(str3);
				clean_str(strtmp);

   			}
			system("PAUSE");
			break;
		}
		case 'Q':{
			printf("Thanks for using. Bye.");
			exit(0);
		}
		default:{
			printf("Command Error! Please try again.\n");
		}
	}
}