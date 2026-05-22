#include<stdio.h>
int main(){
char name[50];
printf("enter your name: \n");
fgets(name,50,stdin);//takes aall the inputs and prits the ignoring all the spaces//
printf("wlecome to the c programming world %s\n",name);
char name1[50] ; 
//to use   the scanf the takes     the \n as the enter key or eof//
printf("enter your name: \n");
scanf("%s",name1);//takes only the first word and ignores the rest of the words//
printf("welcome to the c programming world %s we hope you are ready for the upcming adventure you will be embarking on\n",name1);
return 0;
}
