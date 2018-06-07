/*
String operation module.

Description: Replace funtion is composed with searchWord function and replaceWord function.
             searchWord function is to get the first position.

Name:刘文杰
StudentID:0076
Date:2018/04/04

Update at:2018/04/08
*/

int count_word(char *str);

int count_character(char *str);

int count_line(char *str);

void search_word(char *str,char *word);

char *replaceWord(char *pre, char *S, char *W, int pos, char *R);