#include<stdio.h>

void DecreasingQuicksort(int number[], int first, int last);

main(){
   int i, total_number, number[20];

    printf("Sort decreasing order");
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
	DecreasingQuicksort(number,0,total_number-1);

	// print output
	printf("\nDecreasing Quicksort oder: ");
	for(i=0; i<total_number-1; i++)
		printf("%d, ", number[i]);
	printf("%d ", number[i]);
	
   return 0;
}

// user defined function
// process sort
void DecreasingQuicksort(int number[], int first, int last){
	int i, j, pivot, tmp;
	
	if(first<last){
		pivot = first;
		i = first;
		j = last;

	    while(i<j){
	        while(number[i]>=number[pivot] && i<last)
				i++;
			while(number[j]<number[pivot])
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
	    
	    DecreasingQuicksort(number, first, j-1);
	    DecreasingQuicksort(number, j+1, last);
   }
}

