#include <stdio.h>
#include <stdlib.h>

typedef struct {
int n;
char c;
}data;

void func0( int *ptr, int size)
{

	
	while( size > 0)
	{
	printf("\n %s %d", __FUNCTION__, ptr[size -1 ]);
	size --;	
	}
	//free(ptr);
	printf("\n Exiting %s \n", __FUNCTION__);
	
}

void func1( int *ptr, int size)
{
	printf("\nWhat is that %d\n", *ptr);
	*ptr = 10;
	while( size > 0)
	{

	printf("\n %s %d", __FUNCTION__, ptr[size -1 ]);
	size --;	
	}
	printf("\n Exiting %s \n", __FUNCTION__);
	
}

void func2( int *ptr, int size)
{
	while( size > 0)
	{
	printf("\n %s %d", __FUNCTION__, ptr[size -1 ]);
	size --;	
	}
	printf("\n Exiting %s \n", __FUNCTION__);
	
}



int main()
{
int num1;
int num[]={1,2,3};
data dt_arry[]={
	{5,'a'},
	{6,'b'},
	{7,'c'},
};

/*
printf("\n num size:%d\n",sizeof(num)/sizeof(int));
printf("\n  %d ", dt_arry[0].n);
*/
func0(num,sizeof(num)/sizeof(int) );
func1(num,sizeof(num)/sizeof(int) );
func0(num,sizeof(num)/sizeof(int) );
//func2(&num,sizeof(num)/sizeof(int) );

return 0;
}
