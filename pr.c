#include<stdio.h>
#include<conio.h>

void main()
{
	int mark;
	char grade;
	
	printf("enter your mark:");
	scanf("%d",&mark);

    (mark>=80 &&mark<100)
     
    ?	printf("a is your grade\n")
	 
	: 
	 	(mark>=60 && mark<80)
	 	
	 	? printf("b is your grade\n")
	    
	    
	    :
	    	(mark>=40 && mark<60)
	    	
	    	?	printf("c is your grade\n")
			
			
			:
				(mark>=20 &&mark<40)
				
				?	printf("d is your grade\n")
				
				
				:
					(mark>=0 &&mark<20)
					
					?	printf("e is your grade\n")
					
					:printf("enter volid input");
					
       printf("enter your grade:");
	   scanf("%s",&grade);						
						
						
						
					

    switch(grade)
    {
    case 'a' :printf("exelent work!");	
    break;
    case 'b':printf("well done");
    break;
    case 'c' :printf("good job");
    break;
    case 'd' :printf("you passed");
    break;
    case 'e' :printf("sorry you faild ");
    break;
	}
	
	if(grade=='a')
	{
	printf("You are eligible for the next level.");	
	}
	else
	{
		if(grade=='b')
		{
			printf("congratulation");
		}
		else
		{
			if(grade=='c')
			{
			printf("plese try again next time");	
			}
			else
			{
				if(grade=='d')
				{
				printf("You are eligible for the next level.");	
				}
				
				
					
					
				
					
					
				
			}
		}
	}
}
        

			
		
	 
	 
	   
	   
 
       
     
     
