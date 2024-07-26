#include <stdio.h>

int main(){
	char questions[][100] = {"1. C Programming supports 4 basic data types?: ", 
							 "2. What is the first step to utilizing a variable?: ", 
							 "3. Which of the following operators takes precedence?: ", 
							 "4. Which statement terminates a loop and returns to the first statement when executed?: "};
							
	char options[][100] = {"A. True, B. False",
						  "A. Defining, B. Initialization, C. Declaring, D. Characterizing",
						  "A. Equal/Not Equal, B. Add/Subtract, C. Comma, D. Multiple/Divide/Modulus",
						  "A. Return, B. Break, C. Continue, D. Exit"};
						
	char answers[4] = {'A', 'C', 'D', 'B'};
	int numberofquestions = sizeof(questions)/sizeof(questions[4]);	
	const int i = 0;	
	char guess;
	int score = 4;
	int j = (i * 4); j < (i * 4) + 4; j++;				  
				
	printf("Introduction to C/C++ Programming Quiz \n");
	
	for(int i = 0; i < numberofquestions; i++); 

	{
		printf("\n");
		
		printf("%s \n", questions[0]);
			printf("%s \n", options[0]);
			
		printf("%s \n", questions[1]);
			printf("%s \n", options[1]);
			
		printf("%s \n", questions[2]);
			printf("%s \n", options[2]);
			
		printf("%s \n", questions[3]);
			printf("%s \n", options[3]);
		
		printf("\n");
		
	for (j = (i * 4); j < (i * 4) + 4; j++);	
		{
		printf("\n");
		
		printf("guess: ");
			scanf("%c, %c, %c, %c", &guess);
		}

		if(guess == answers[4])
		{
			printf("CORRECT! \n");
			score;
		}
		else{
			printf("INCORRECT! \n");
		}
		
		printf("\n");
		printf("FINAL SCORE: %d/%d \n", score, numberofquestions);
		printf("\n");
	}
						  
	return 0;				  
	}
	
	
							
							
