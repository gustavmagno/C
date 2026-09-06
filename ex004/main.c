#include <stdio.h>

	int main() {
	
		int dayOfTheWeek;

		printf("Plase, enter a number representing a day of the week(1-7): \n");
		scanf("%d", &dayOfTheWeek);

		switch(dayOfTheWeek){
			case 1:
				printf("It's Monday");
				break;
			case 2:
				printf("It's Thursday");
				break;
			case 3:
				printf("It's Wednesday");
				break;
			case 4:
				printf("It's Thursday");
				break;
			case 5:
				printf("It's Friday");
				break;
			case 6:
				printf("It's Saturday");
				break;
			case 7:
				printf("It's Sunday");
				break;
			default:
				printf("Enter a number 1 trough 7\n");
		}

	return 0;
	}
