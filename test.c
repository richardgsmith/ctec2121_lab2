#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1()
{
	/* Test this function using BVA and EP.  The function simply adds together two short integers */
	short a=0,b=0;
	short result=0;
	
	printf("Please enter two short integer values\nValue A:\n");
	scanf("%hd",&a);
	printf("Value B:");
	scanf("%hd", &b);
	result = a+b;
	printf("The result is: %hd\n", result);
	
}	

int func2()
{
	//This function prompts the user to enter 5 numbers and then sums them.  The running total is then returned
	int count, input;
	long total;
	
	while (count<5)
	{
		printf("Please enter an integer number\n");
		scanf("%d\n", &input);
		total+=input;
	}
	return total;
}

void func3()
{
	/*
	 This function takes in a user specified set of co-ordinates to attempt to determine whether or not
	 they are over continental equatorial Africa.  The values must be valid latitudes (±90) and longitudes (±180).
	 There are also boundaries provided in the function and the inputs must be within these boundaries 
	 (up to and including the values stated).
	 */
	int lower_bound=-10, upper_bound=10, inputA=0, inputB=1;
	printf("Please enter a latitude between ±90\n");
	scanf("%d\n", &inputA);
	if(inputA <-90 || inputA >90)
	{
		printf("Out of range\n");
	}
	else 
	{
		if(inputA >-10 && inputA <=10)
		{
			printf("Please enter a longitude\n");
			scanf("%d", &inputB);
			if(inputB > -180 && inputB < 180)
			{
			   if (inputB >-15 && inputB <=40)
			   {
				   printf("Africa\n");
			   }
			   else 
			   {
				   printf("Somewhere else\n");
			   }
			}
			else 
			{
				printf("Out of bounds\n");
			}
		}
		else 
		{
			printf("Somewhere else\n");
		}
	}

	
}


int main( int argc, char **argv)
{
	int option=0, val=0;
	
	
	while (1)
	{
		option=0;
		printf("Please choose which function you wish to test [1..3] or 0 to quit and hit return \n");
		if (option==0) 
		{
			scanf("%d", &option);
		}
		switch (option) 
		{
			case 0:
				printf("Bye!\n");
				return 0;
			case 1:
				func1();
				break;
			case 2:
				val=func2();
				printf("The total was: %d\n", val);
				break;
			case 3:
				func3();
				break;
			default:
				printf("You did not enter a valid choice\n");
				break;
		}
	}
	return 0;
	
}
