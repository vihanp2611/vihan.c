#include<stdio.h>

int main()

{
	int score;
	char grade;
	
	printf("Enter your score: ");
	scanf("%d" , &score);
	
	grade = (score >= 90 && score <= 100) ?
	'A' :
	
	(score >= 80) ? 'B' :
	(score >= 70) ? 'C' :
	(score >= 60) ? 'D' :
	(score >= 50) ? 'E' : 'F' ;
	
	printf("Your grade is %c. ", grade);
	
	
	switch (grade)
	{
		case 'A' :
			printf("Excellent work! ");
			break;
		case 'B' :
			printf("Well done! ");
			break;
		case 'C' :
			printf("Good job! ");
			break;
		case 'D' :
			printf("You passed, but you could do better. ");
			break;
		case 'E' :
			printf("You passed. ");
			break;
		case 'F' :
			printf("Sorry, you are failed. ");
			break;
	}
	 
	 if (grade >= 'A' && grade <= 'D')
	 {
	 	printf("Congrulations!  You are eligible for the next level. ");
	 
	 }
	 else
	 {
	 	printf("Please try again next time. ");
	 }
	 
	 return 0;
}


// Output
//Enter your score: 85
//Your grade is B. Well done! Congrulations!  You are eligible for the next level.
