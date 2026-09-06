#include <stdio.h>
#include <string.h>

	int main() {
		char item[50];
		float price, total_price;
		int total;

		printf("What item would you like to buy?\n");
		scanf("%s", item);

		if(strcmp(item, "pizza") == 0){
			
			price = 10.99;
			printf("The price of the %s is: %.2f\n", item, price);
			printf("How many would you like?\n");
			scanf("%d", &total);
			total_price = price * total;
			printf("The total is: %.2f\n", total_price);
		}

	return 0;	
}
