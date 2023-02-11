#include<stdio.h>
int main()
{
   char ch ='G';
   int i = 14;
   float f =9.02;
   double d =78.2310;

   char *cp = &ch;
   int *ip =&i;
   float *fp = &f;
   double *dp = &d;

    void*vp = &cp;
	
	printf("Value of ch : %c\n",ch);
    printf("Address of ch : %p\n",&ch);	
	printf("Address of int : %d\n",&i);	
	printf("Data refer by cp : %c\n",*cp);	
    printf("Size of ch : %d\n",sizeof(ch));
	
	return 0;
}