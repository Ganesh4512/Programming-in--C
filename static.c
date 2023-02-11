
#include<stdio.h>


int c = 50;


//---------------------------------------------------------
void Demo()
{
   int A = 200;
   A++;
   printf("Value from the Demo is : %d\n",A);
   	
}
//--------------------------------------------------------

//--------------------------------------------------------
void Hello()
{
	Demo();
 int A = 10;
	A++;
	printf("Value from Hello is : %d\n",A);
	
}
//-------------------------------------------------------------

int main()
{
	
	printf("Value from global is : %d\n",c);
	
	
	Hello();
  	Demo();
	 Demo();
	 Demo();
	 
	 Hello();
	 Hello();
	 Hello();
	printf("Value from global is : %d\n",c);
	
	printf("Without calling");
	return 0;
}