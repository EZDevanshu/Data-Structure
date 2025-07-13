#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n;
    int isPalindrome = 1;

    printf("Enter the length of the string: ");
    scanf("%d", &n);

     char *str = (char *)malloc((n + 1) * sizeof(char));

    printf("Enter the string: ");
    scanf("%s", str);   

    char *start = str;
    char *end = str + strlen(str) - 1;

    while (start < end) {
        if (*start != *end) {
            isPalindrome = 0;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    free(str);
    return 0;
}