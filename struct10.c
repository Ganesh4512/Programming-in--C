printf("Size of obj1 is :%d\n",sizeof(obj2));
#include<stdio.h>

struct Demo
{
    int i;
	float f;
	int j;
	double d;

};

int main()
{
    struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	
	
	obj1.d =11;
	obj2.i =21;
	obj3.j	=51;
	printf("Size of obj2 is :%d\n",sizeof(obj2));
    printf("Size of obj1 is :%d\n",sizeof(obj1));
	printf("Size of obj3 is :%d\n",sizeof(obj3));
    printf("obj1 is :%d\n",sizeof(obj2));
	
 return 0;
 
}