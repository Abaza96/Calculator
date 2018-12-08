//Libs
#include <stdio.h>

//Function Prototypes

	//Arithmetics
float Add (float , float);		//Function named Add that Returns an 'float' and takes 2 'floats' as an Argument
float Subtract (float , float);	//Function named Subtract that Returns an 'float' and takes 2 'floats' as an Argument
float Multiply (float , float);	//Function named Multiply that Returns an 'float' and takes 2 'floats' as an Argument
float Divide (float , float);		//Function named Divide that Returns an 'float' and takes 2 'floats' as an Argument

	//Bitwises
int And (int , int);		//Function named And that Returns an 'int' and takes 2 'ints' as an Argument
int OR (int , int);			//Function named OR that Returns an 'int' and takes 2 'ints' as an Argument
int Not (int);				//Function named Not that Returns an 'int' and takes 1 'ints' as an Argument
int XOR (int , int);		//Function named XOR that Returns an 'int' and takes 2 'ints' as an Argument

	//Others
int Remainder (int , int);	//Function named as Remainder that Returns an 'int' and takes 2 'ints' as an Argument
float Increment (float);		//Function named Increment that Returns an 'float' and takes 1 'float' as an Argument
float Decrement (float);		//Function named Decrement that Returns an 'float' and takes 1 'float' as an Argument

//Main Function
int main(void)
{
	float Num1 , Num2 , Ans;	//Operands as float
	char Operator , ReCalculate;	   //The Operation on The two float

StartingPoint:	

	//Asking for the Operation from the User
	printf("\nEnter one of these Operators(+ , - , * , / , & , | , ~ , ^ , % , i , d): ");
	scanf("%c" , &Operator);
	
	//Possibilities
	switch(Operator)
	{
		case '+':	//In case it's an '+'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the Add Function
			
			Ans = Add(Num1 , Num2);
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '-':	//In case it's a '-'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the Subtract Function
			
			Ans = Subtract(Num1 , Num2);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '*':	//In case it's a '*'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the Multiply Function
			
			Ans = Multiply(Num1 , Num2);			

			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '/':	//In case it's a '/'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
		AnotherAttempt:	
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
		
			if(Num2 == 0)
			{
				printf("\nUndefined , Enter 2nd Operand Again\n");
				goto AnotherAttempt;
			}
			
			//Calling the Divide Function
			
			Ans = Divide(Num1 , Num2);
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '&':	//In case it's an '&'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the And Function
			
			Ans = And(Num1 , Num2);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '|':	//In case it's an '|'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the OR Function
			
			Ans = OR(Num1 , Num2);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '~':	//In case it's a '~'
		{
			//Asking for the Operand from the User
			printf("\nEnter The Operand : ");
			scanf("%f" , &Num1);
			
			//Calling the Not Function
			
			Ans = Not(Num1);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '^':	//In case it's a '^'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the XOR Function
			
			Ans = XOR(Num1 , Num2);
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case '%':	//In case it's a '%'
		{
			//Asking for the 1st Operand from the User
			printf("\nEnter The 1st Operand : ");
			scanf("%f" , &Num1);
			
			//Asking for the 2nd Operand from the User
			printf("\nEnter The 2nd Operand : ");
			scanf("%f" , &Num2);
			
			//Calling the Remainder Function
			
			Ans = Remainder(Num1 , Num2);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case 'i':	//In case it's an 'i'
		{
			//Asking for the Operand from the User
			printf("\nEnter The Operand : ");
			scanf("%f" , &Num1);
			
			//Calling the Increment Function
			
			Ans = Increment(Num1);			
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		case 'd':	//In case it's a 'd'
		{
			//Asking for the Operand from the User
			printf("\nEnter The Operand : ");
			scanf("%f" , &Num1);
			
			//Calling the Decrement Function
			
			Ans = Decrement(Num1);						
			
			printf("\nThe Answer is Equal to : %.2f\n" , Ans);
			
			break;	//Break from The Switch
		}
		
		default:
		{
			printf("\nOnly (+ , - , * , / , & , | , ~ , ^ , % , i , d) are allowed");
			
			goto StartingPoint;
		}
	}
	
	//End of The Program
	AskAgain:
	printf("\nWould you like to make another Operation (Enter Y or N) : ");
	
	scanf("%c" , &ReCalculate);		//Checking whether the user wants to calculate again or not
	
	switch(ReCalculate)
	{
		case'Y':
		{
			goto StartingPoint;
		}
		
		case'y':
		{
			goto StartingPoint;
		}
	
	case'N':
		{
			printf("\nTerminated\n");
			return 0;
		}
		
	case'n':
		{
			printf("\nTerminated\n");
			return 0;
		}

	default:
		{
			printf("\n Only Y or N\n");
			goto AskAgain;
		}
	}
}