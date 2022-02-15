#include <stdio.h>
 
int main(){
    int hour = 0;
	int minute = 0;
	int second = 0;
	int all_time;
    
    printf("Time Converter");
    printf("\n-----------------------"); 
    printf("\nEnter seconds time: ");
    scanf("%d",&all_time);
    
    if(all_time < 0)
    	printf("ERROR: time cannot less than 0 second");
    else{
    	while(all_time > 0){
	    	if(all_time >= 3600){
	    		hour = all_time / 3600;
	    		all_time = all_time % 3600;
			}
			else if(all_time >= 60){
	    		minute = all_time / 60;
	    		all_time = all_time % 60;
			}
			else{
	    		second = all_time;
	    		all_time = 0;
			}
		}
	    printf("HH:MM:SS is %02d:%02d:%02d\n",hour, minute, second);
	}

     
    return 0;   
}
