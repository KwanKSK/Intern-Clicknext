#include <stdio.h>

main(){
	int number[20];
	int i, j, total_number, sum, result;
	
	printf("Find desired result");
	printf("\n--------------------------------");
	
	// input variable 
    printf("\nEnter total of numbers: ");
    scanf("%d", &total_number);
    
    for(i=0; i<total_number; i++) {
    	printf("  Enter No.%d : ", i+1);
        scanf("%d", &number[i]);
    }
    
    printf("--------------------------------");
    printf("\nEnter desired summary: ");
	scanf("%d", &result);
	
	printf("--------------------------------");
	printf("\nCouple(s) that equal:\n");
	
	for(i=0; i<total_number; i++)
		for(j=0; j<= i; j++)
			if(number[i]+number[j] == result && number[i]!=number[j])
				printf("  [%d,%d]\n", number[j], number[i]);
	
	return 0;
}
