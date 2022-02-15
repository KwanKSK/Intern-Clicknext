#include <stdio.h>

main() {
	int row = 0;
	int number = 1;
	int i, j;
	
	printf("Print Number Pyramid");
	printf("\nPlease enter integer number");
	printf("\n-------------------------------------");
	
	// input number of rows
	while(row <= 0 || row > 4){
		printf("\nEnter the number of rows (1-4): ");
		scanf("%d", &row);	
		if(row <= 0 || row > 4){
			printf("ERROR: Number of rows must between 1-4\n");
		}
	}

	// print pyramid	
	for (i = 1; i <= row ; i++) {
        for ( j = 1; j <= row - i; j++){  
            printf (" ");   
        }  
		for (j = 1; j <= i; j++) {
			if (number >= 10) {
				number -= 10;
			}
			printf("%d ", number);
        	number++;
		}
		printf("\n");
   }
   return 0;
}

