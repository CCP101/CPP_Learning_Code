/*
Socket Module.

Funtion: Get key via Username and Password from my website for Encryption and Decryption.

Description: Visit my website via external "curl.exe" command.
             (It is included in my zip file "compiled.zip") 
             
Name:刘文杰
StudentID:0076
Date:2018/04/04

Update at:2018/04/08
*/

int execmd(char* cmd,char* result);

char get_key(char *key, char *username, char *password);