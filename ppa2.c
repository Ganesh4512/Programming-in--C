#include<stdio.h>
 
 int main()
 {
    float u,v,a,t;
	printf("Enter the value of initial velocity in m/s\t");
	scanf("%f",&u);
	printf("Enter the amount of acceleration\t");
	scanf("%f",&a);
	printf("Enter the time in sec.\t");
	scanf("%f",&t);
	v=u+a*t;
	printf("Velocity after %4.2fsec is %4.2f m/s",t,v);
	
	return 0;
 
 
 
 }