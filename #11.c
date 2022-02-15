#include<stdio.h>

void AscendingQuicksort(int number[], int first, int last);

main(){
   int i, total_number, number[20];

    printf("Sort ascending order");
    printf("\n-------------------------------");
    
    // input variable 
    printf("\nEnter total of numbers: ");
    scanf("%d", &total_number);
    
    for(i=0; i<total_number; i++) {
    	printf("  Enter No.%d : ", i+1);
        scanf("%d", &number[i]);
    }
    printf("-------------------------------");

	// call user defined function
	AscendingQuicksort(number, 0, total_number-1);

	// print output
	printf("\nAscending oder: ");
	for(i=0; i<total_number-1; i++)
		printf("%d, ", number[i]);
	printf("%d ", number[i]);
	
   return 0;
}

//user defined function
//process sort
void AscendingQuicksort(int number[], int first, int last){
	int i, j, pivot, tmp;
	
	if(first<last){
		pivot = first;
		i = first;
		j = last;

        while(i<j){
            while(number[i]<=number[pivot] && i<last)
                i++;
            while(number[j]>number[pivot])
                j--;
            if(i<j){
                tmp = number[i];
                number[i] = number[j];
                number[j] = tmp;
            }
        }

        tmp = number[pivot];
        number[pivot] = number[j];
        number[j] = tmp;
        
        AscendingQuicksort(number, first, j-1);
        AscendingQuicksort(number, j+1, last);
   }
}


