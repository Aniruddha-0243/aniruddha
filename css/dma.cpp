#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *s;
    s=(char *)malloc(6);
    strcpy(s,"DELHI");
    prntf("%s",s);
    return 0;

}