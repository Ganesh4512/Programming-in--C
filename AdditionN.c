// Accept N number fromuser andperform the addition


#include<stdio.h>      //for printf and scanf
#include<stdlib.h>      ///for malloc and free

////////////////////////
///////////////////////////////////////
//
//   Application Name : Addition of N numbers
//   Input :  N numbers
//   Output : Addition
//   Author  : Ganesh Laxman Gaikwad
//  Date : 18 September 2022

int main()
{
	int *Arr= NULL;    // pointer to hold the address of array
	int iSize =0;
	int i=0;
	int iSum =0;
	
	printf("Please enter how many elements you want \n");
	scanf("%d",&iSize);
	
	//Allocate the memory 
	Arr=(int *)malloc(iSize * sizeof(int));
	
	printf("Memory allocation is successful\n");

    printf("Please enter the elements\n");
	
	
	
	for(i=0; i < iSize; i++)
	{
		scanf("%d",&Arr[i]);
		
	}	
	  
	  // performa ddition
	for (i=0; i < iSize; i++)  
	{
		iSum =iSum + Arr[i];
	}  
	  
	 printf("Addition is %d\n",iSum);
	 
	 free(Arr);
	 
	 printf("Memory gets deallocated.\n");
	
	
	
	
	return 0;
}







