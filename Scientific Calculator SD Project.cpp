
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

#define PI 3.141592654

#define note "enter the valide operation"
void addition();
void subtraction();
void multiplication();
void division();
void modulus();
void factorial();
void power();
void square();
void cube();
void squareroot();
void sine();
void cosine();
void  tangent();






int main()
 {
	printf("\t\t Welcome to the scintific calculator!!\n\n");
	int choice;
	printf("\n********press 0 to quti the program*******\n");
	printf("Enter 1 for Addition\n");
	printf("Enter 2 for subtraction\n");
	printf("Enter 3 for multiplication\n");
	printf("Enter 4 for division\n");
	printf("Enter 5 for modulus\n");
	printf("Enter 6 for power \n");
	printf("Enter 7 for factorial \n");
	printf("Enter 8 for square\n");
	printf("Enter 9 for cube\n");
	printf("Enter 10 for squareroot\n\n");
	printf("Enter 11 for sine\n");
    printf("Enter 12 for cosine\n");
    printf("Enter 13 for tangent\n");

    
   
    while(1){
    printf("\n\nEnter the opration you want to do: ");

    scanf("%d",&choice);

    switch(choice)
    {
    	case 1:
    	   	   addition();
    	   	   break;
    	case 2:
    		     subtraction();
    	     	break;
    	case 3:
		         multiplication();
		        	break;
		   case 4:
	          division();
             break;
		   case 5:
		         modulus();
	         	break;
	  	 case 6:
		        factorial();
	    	     break;
		   case 7:
		       	power();
        	 break;
     case 8:
        	square();
        	break;
     case 9:
        	cube();
        	break;
    case 10:
        	squareroot();
        	break;
    case 11:
            sine();
            break;
    case 12:
            cosine();
            break;
    case 13:
             tangent();
             break;

    case 0:
		    exit(0);
			default:

			 printf("\n********** %s **********\n ",note);

}
}
    return 0;
}

void addition()
   {
   printf("Enter the numbers to add: ");
   int a,b;
   scanf("%d%d",&a,&b);
   printf("The sum of a and b is %d\n",a+b);
   }
    void subtraction()
   {
    printf("Enter the numbers to subtract: ");
   int a,b;
   scanf("%d%d",&a,&b);
   printf("The subtraction of a and b is %d\n",a-b);
   }
    void multiplication()
   {
   printf("Enter the numbers to multiply: ");
   int a,b;
   scanf("%d%d",&a,&b);
   printf("The multiplication of a and b is %d\n",a*b);
   }
    void division()
   {
   printf("Enter the numbers to divide: ");
   int a,b;
   scanf("%d%d",&a,&b);
   printf("The division of a and b is %f\n",(float)a/(float)b);
   }
    void modulus()
   {
   printf("Enter the numbers to moduls of: ");
   int a,b;
   scanf("%d%d",&a,&b);
   printf("The modulus of a and b is %d\n",a%b);
   }
    void factorial()
    {
   int n,factorial;
   printf("Enter the numbers to factorial of: ");
  scanf("%d",&n);
  factorial=1;
  for(int i=1;i<=n;i++) {
 factorial=factorial*i; //factorial*=i;
      }
      printf("\nfactorial of %d is %d",n,factorial);
      }

    void power()
	{
     double b;
     double p;
   printf("Enter the number to power of:");
   scanf("%lf%lf",&b,&p);
   double e=pow(b,p);
   printf("The power is %lf",e);
}
   void square()
  {
  	double b;
   printf("Enter the number to square of:");
   scanf("%lf",&b);
   double p=pow(b,2);
   printf("The square of %lf is %lf",b,p);
}
 void cube()
 {
  double b;
  printf("Enter the number to cube of:");
  scanf("%lf",&b);
  double p=pow(b,3);
  printf("The cube of %lf is %lf",b,p );
}
 void squareroot()
 {
  double b;
  printf("Enter the number to square root of:");
  scanf("%lf",&b);
  double s=sqrt(b);
  printf("The square root of %lf is %lf",b,s );
 }
 void sine()
 {
     float x; 
     float result;
 printf("Enter the number to sine :");
 scanf("%f",&x);
 result = sin(x);
 printf("sin of %f = %f\n", x, result);
 }
 void cosine()
 {
     float x;
     float result;

 printf("Enter the number to sine :");
 scanf("%f",&x);
 result = cos(x);
 printf("cos of %f = %f\n", x, result);

 }
 void tangent()
 {
	 float x;
	      float result;

  printf("Enter the number to sine :"); 
  scanf("%f",&x);
  result = cos(x);
  printf("cos of %f = %f\n", x, result);

 }




