#include <stdio.h>
void reverseString(char *start) {
    char *end = start, temp;

    
    while (*end) {
        end++;
    }
    end--;  

    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char input[100];

    
    printf("Enter a string: ");
    gets(input);  

    reverseString(input);

    printf("Reversed string: %s\n", input);
   return 0;
}

