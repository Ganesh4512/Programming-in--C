#include<stdio.h>

int main()
{
   float arr[]={10.3,434,45.34,45.34,234.45};
   float *p =NULL;
   float *q=NULL;
   
   p= arr;
   q=&(arr[3]);
   
   printf("%d \n",p);
   printf("%d \n",q);
   
   return 0;



}