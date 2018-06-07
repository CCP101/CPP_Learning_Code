
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt_p[100],s=0;
int count_word(char *str){
	int i,n=0,flag=1;
    for(i=0;str[i];i++)
    {
        if(flag==1)
        {
            if(str[i]!=' ' || str[i]!='\n')
            {
                n++;
                flag=0;
            }
        }
        else if(str[i]==' '|| str[i]=='\n')
            flag=1;
    }
    return n;
}

int count_character(char *str){
    char *p = str;
    int cnt = 0;
    while (*p != '\0') {
        if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z')) {
            cnt++;
        }
        p++;
    }
    return cnt;
} 
int count_line(char *str){
    char *p = str;
    int cnt = 0;
    while (*p != '\0') {
        if (*p=='\n') {
            cnt++;
        }
        p++;
    }
    cnt++;
    return cnt;
} 

int search_word(char S[],char W[]){  //find the first position.....
    int i,j;
    int n; 
    int k; 
    n=strlen(S)+1;  
    k=strlen(W);   
    s=0;
    for(i=0;i<n-k;i++){
        for(j=0;j<k;j++){
            if(S[i+j]!=W[j]||W[j]==' '){
                break;  
            }  
        }
        if(j==k&&(S[i+j]==' '||S[i+j]=='\0')){
            if(i==0||(i>0&&S[i-1]==' ')){
                 cnt_p[s]=i;
                 s++;
            }  
        }  
    }
    for (i=0;i<s;i++){
        printf("We have found the word in these positions");
        printf("\nThe %d position is %d\n",i+1,cnt_p[i]+1);
    }
        printf("The count of this word in this file is :%d\n",s);
 }

char *replaceWord(char *pre, char *S, char *W, int pos, char *R){  //replace
    int sizeS = strlen(S)+1;  
    int sizeW = strlen(W);  
    int sizeR = strlen(R);  
    int size = sizeS - sizeW + sizeR;  
    int i, j;  
    while(pre[i++]!='\0')
	{
		pre[i-1]='\0';
	}
	*pre = (char*)malloc(sizeof(char)*size); 
    for(i=0;i<pos;i++){  
        pre[i] = S[i];  
    }  
    for(i=pos;i<pos+sizeR;i++){
        pre[i] = R[i-pos];
    }  
    for(pos+sizeR;i<size;i++)
	{
        pre[i]=S[i+sizeW-sizeR];
    }  
}  