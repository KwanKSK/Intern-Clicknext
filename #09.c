#include<stdio.h>

void RevertString(char string[], int start, int last);

int main() {
	char str[100];
   	int start = 0;
	int end = 0;
	
	printf("Enter a string to be revert: ");
	scanf("%[^\n]s", &str);

    while(str[end]) {
        for(end=start; str[end] && str[end]!=' '; end++);
        	RevertString(str, start, end-1);
        start = end + 1;
    }
    printf("After the revert of string: %s ", str);
    
    return 0;
}

// user defined function
void RevertString(char str[], int start, int end) {
    char tmp;
    while(start<end) {
        tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        start++;
        end--;
    }
}
