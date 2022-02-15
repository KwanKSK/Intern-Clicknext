#include<stdio.h>

int CountString(char str[]);
void UpperCase(char str[]);
void Quicksort(char str[], int first, int last);
void CompareString(char str1[], char str2[]);

main() {
	char str1[50], str2[50];
	int count_str1, count_str2;
	
	printf("Compare charaters in string");
    printf("\n--------------------------------");
	
	// input string variables
	printf("\nEnter 1st string: ");
	gets(str1);
	printf("Enter 2nd string: ");
	gets(str2);
	
	// call user defined function
	// count number of charaters in string	
	count_str1 = CountString(str1);
	count_str2 = CountString(str2);
	
	if(count_str1 == count_str2){
		// convert to upper case
		UpperCase(str1);
		UpperCase(str2);
		// sort charater
		Quicksort(str1, 0, count_str1-1);
		Quicksort(str2, 0, count_str2-1);
		// compare string
		CompareString(str1, str2);
	}else printf("\nFalse");	
	
	return 0;
}

// user definded function
// count number of character in string
int CountString(char str[]){
	int i, count_str;
	for (i = 0; str[i]!='\0'; i++)
		count_str = i+1;
	return(count_str);
}

// convert to upper case
void UpperCase(char str[]){
	int i;
	// use ASCII code to convert to UPPER case
	for (i = 0; str[i]!='\0'; i++)
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	
}
// process sort
void Quicksort(char str[], int first, int last){
	int i, j, pivot, tmp;
	
	if(first<last){
		pivot = first;
		i = first;
		j = last;

        while(i<j){
            while(str[i]<=str[pivot] && i<last)
                i++;
            while(str[j]>str[pivot])
                j--;
            if(i<j){
                tmp = str[i];
                str[i] = str[j];
                str[j] = tmp;
            }
        }

        tmp = str[pivot];
        str[pivot] = str[j];
        str[j] = tmp;
        
        Quicksort(str, first, j-1);
        Quicksort(str, j+1, last);
   }
}
// compare string
void CompareString(char str1[], char str2[]){
	int	i = 0;
	int	flag = 1;
	
	while(flag == 1) {
		if (str1[i] != str2[i]){
			printf("\nFalse");
		    flag = 0;
		}
		if (str1[i] == '\0' && str2[i] == '\0'){      
		    printf("\nTrue");
		    flag = 0;
		}
		i++;  
	}
}


