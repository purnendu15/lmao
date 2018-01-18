#include <stdio.h>
#include <math.h>

int main()
{

char c='A';
int num;
printf("\n %c \n",c);
//convert letter to u-case
c = (c|' ');
printf("\nconvert letter to u-case %c \n",c);


//convert letter to l-case
c = (c&'_');
printf("\nconvert letter to l-case %c \n",c);

c = c ^ ' ';
printf("\nconvert letter to reverse %c \n",c);

//printf("\nMax number %d \n",((long int)(1 << 31) - 1));
//printf("\nMax number %d \n",((long int)pow(2,32) - 1));
num = 10;
printf("\nNum Value %d \n",num <<1);
printf("\nNum Value %d \n",num >> 1);

scanf("%d",&num);
if(( num & 1) == 1)
printf("\n ODD Number \n");
else
printf("\n EVEN  Number \n");

return 0;
}
