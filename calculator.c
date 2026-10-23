#include<stdio.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);

int main()
{
	int choice;
	float num1, num2, result;
	
	while(1)
	{ 
	    printf("\n====CUSTOMIZED CALCULATOR====\n");
	    printf("1. Addition\n");
	    printf("2. Subtraction\n");
	    printf("3. Multiplication\n");
	    printf("4. Division\n");
	    printf("5. Exit\n");
	    printf("Enter your choice: ");
	    scanf("%d", &choice);
	    
	    if(choice == 5)
     	{
	    	printf("Exiting calculator...\n");
	    	break;
	    }
	
	    printf("Enter two numbers: ");
	    scanf("%f %f" ,&num1 ,&num2);
	
	    switch(choice)
	    {
	    	case 1:
		        result= add(num1,num2);
		        printf("Result = %.2f\n", result);
		        break;
		
		    case 2:
		    	result= subtract(num1 ,num2);
			    printf("Result = %.2f\n", result);
		    	break;
			
		    case 3:
			    result= multiply(num1,num2);
			    printf("Result = %.2f\n", result);
		    	break;
			
	    	case 4:
		    	if(num2 != 0)
		    	{
		    		result= divide(num1 ,num2);
			    	printf("Result = %.2f\n", result);
	      		}
		    	else
		    	{
			    	printf("Cannot divide by zero.\n");
	     		}
		        	break;
		    
		    default:
		        printf("Invalid choice! Try again.\n");
    	}
	}
	
	return 0;
}
 // Function definition
float add(float a,float b)
{
	return a + b;
}
float subtract(float a,float b)
{
	return a - b;
}
float multiply(float a,float b)
{
	return a * b;
}
float divide(float a,float b)
{
	return a / b;
}



