#include <stdio.h>
	int main() {
		int age, height;
		char name[40] = "";

		printf("What is your name?\n");
		scanf("%s", name);
		printf("%s, What is your age?\n", name);
		scanf("%d", &age);	
		printf("%s, you are %d years old. How tall are you?\n", name, age);	
		scanf("%d", &height);
						
		if(age >= 18 && height > 100){
			printf("You-re good!");
		} else {
			printf("You-re wasted!!!");
		}				
		return 0;
	}
