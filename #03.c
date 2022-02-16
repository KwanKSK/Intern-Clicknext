#include<stdio.h>

void Quicksort(int date[], int first, int last);

main(){
	int i, j, k, flag, count, total_day, next_date, date[20];
	int printflag;

	printf("On-Air Date");
    printf("\n-------------------------------");
    
    // input variable 
    printf("\nEnter total of days: ");
    scanf("%d", &total_day);
    
    for(i=0; i<total_day; i++) {
    	printf("  Enter No.%d date : ", i+1);
        scanf("%d", &date[i]);
    }
    printf("-------------------------------\n");
    
    // remove duplicate
	for (i=0; i<total_day; i++)
        for ( j=i+1; j<total_day; j++)
            if (date[i] == date[j]) {  
                for (k=j; k<total_day-1; k++)  
                    date[k] = date[k+1];  
                total_day--;  
                j--;      
            }  
              
	// call user defined function
	Quicksort(date, 0, total_day-1);
	
	printf("On-Air(remove duplicate date)\n");
	// calculate date
	flag = 0;
	count = 0;
	printflag = 0;
	for(i=0; i<total_day; i++){
		if(flag == 0){
			printf("%d", date[i]);
			printflag = 1;
			flag = 1;
			count++;
			next_date = date[i]+1;
		}else{
			if(next_date == date[i]){
				next_date = date[i]+1;
				printflag = 0;
				count++;
			}else{
				if(count==1) count = 0; 
					else{
						printf("-%d",next_date-1);
						printflag = 1;
						count = 0;
					}
				printf(",%d", date[i]);
				next_date = date[i]+1;
				count++;
			}
		}
	}
	if(printflag != 1){
		if(count!=1) printf("-");
		printf("%d", date[total_day-1]);
	}

	return 0; 
}

// process sort
void Quicksort(int date[], int first, int last){
	int i, j, pivot, tmp;
	
	if(first<last){
		pivot = first;
		i = first;
		j = last;

        while(i<j){
            while(date[i]<=date[pivot] && i<last)
                i++;
            while(date[j]>date[pivot])
                j--;
            if(i<j){
                tmp = date[i];
                date[i] = date[j];
                date[j] = tmp;
            }
        }

        tmp = date[pivot];
        date[pivot] = date[j];
        date[j] = tmp;
        
        Quicksort(date, first, j-1);
        Quicksort(date, j+1, last);
   }
}
