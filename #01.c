#include <stdio.h>

main(){
	int number[20];
	int result[20];
	int i, j, k, total_number, total_result, sum;
	
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
	scanf("%d", &sum);
	
	// remove duplicate
	for (i=0; i<total_number; i++) 
        for ( j=i+1; j<total_number; j++)  
            if ( number[i]==number[j]) {  
                for ( k=j; k<total_number-1; k++)  
                    number[k] = number[k+1];  
                total_number--;  
                j--;      
            }  
    
    // calculate summary
	k = 0;
	for(i=0; i<total_number; i++)
		for(j=0; j<=i; j++){
			if(number[i]+number[j] == sum && number[i]!=number[j]){
				result[k] = number[j];
				result[k+1] = number[i];
				k += 2;
			}
		total_result = k;
		}

	// print output
	printf("--------------------------------");
	printf("\nCouple(s) that equal: ");
	if(total_result>0){
		do{
			printf("\n[%d,%d]", result[i], result[i+1]);
			i += 2;
		}while(i<total_result);
	} else printf("N/A");
	
	return 0;
}
