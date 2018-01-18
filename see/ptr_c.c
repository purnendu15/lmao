#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

char* pass_char( char ptr[])
{

// print the char
char *c = (char *)malloc( strlen(ptr)+1);
printf("\n %s %c\n",__FUNCTION__, *(char *)ptr);
printf("\n %s %c \n",__FUNCTION__, ptr[0]);
printf("\n %s %s %d\n",__FUNCTION__, ptr,strlen(ptr));

strcpy(c,ptr);
if( ptr[0] == 'A')
c[0] = 'B';

///printf("\n %s %s %d\n",__FUNCTION__, ptr,strlen(ptr));
//ptr[0]='B';
//change the char
return c;
}

int main()
{
//char p1 = 'Aatreyee';
//char p1 = (int)"A";
char *new;
/* Char names are always constant pointer*/
char *p2 = "Aatreyee\0";
char p21[] = "Aatreyee";
//char p21[] = "Aatreyee2";
//char p3[10] = "Aatreyee";
//char *p4 = malloc(10); 
//p4 = "Aatreyee\0";
//p2[0] = 'H';

//printf("\n %c", p1);
printf("\n %s\n", p2);
printf("\n %s\n", p21);
//printf("\n %c", p3);
//printf("\n %s", p4);

new = pass_char(p2);
printf("\n %s\n", new);

return 0;
}
