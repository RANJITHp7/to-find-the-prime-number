#include<stdio.h>
int prime(int a,int b ){
	if (a%b==0)
	   return 0;
	else
	   return 1;
    prime(a,b-1);     
	   
	
}
main(){
	int num,prime1;
	printf("enter a number");
	scanf("%d",&num);
	if(num==0 || num==1)
	   printf("%d is not a prime number:",num);
	else      
       prime1=prime(num,num/2);
       if(prime1==1)
          printf("%d is a prime number:",num);
       else 
	       printf("%d is not  a prime  number:",num);
       
	    		    
	
}