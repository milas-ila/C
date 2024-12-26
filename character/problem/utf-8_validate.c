/* 
Write a program to validate whether a given sequence of integers represents a valid UTF-8 encoded string. The integers represent the bytes of a UTF-8 encoded string, and you need to determine if they form valid UTF-8 characters.

1-byte character (ASCII): The first bit is 0 (e.g., 0xxxxxxx).
2-byte character: Starts with 110xxxxx, followed by 10xxxxxx.
3-byte character: Starts with 1110xxxx, followed by two 10xxxxxx bytes.
4-byte character: Starts with 11110xxx, followed by three 10xxxxxx bytes.

*/


#include <stdio.h> // importing library

int main()
{
    // get a number and return it
    int number;
    printf("enter a number: ");
    scanf("%d", &number); 
    
    printf("The number is %d", number);
    return 0;
}

