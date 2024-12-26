#include <stdio.h>

int main()
{
    char *string="hello how are you doing";
    char *vowel="aeiou";
    char *alphabet="abcdefghijklmnopqrstuvwxyz";
    //char *consonant="bcdfghjklmnpqrstvwxyz";
    
    int is_vowel;
    int is_alpha;

    printf("%s", string);
    printf("\n");

    // for each character in the input string
    for (char *c=string; *c!=0; c++)
    {
        // check if the character is an alphabet
        for (char *c3=alphabet; *c3!=0; c3++)
        {
            is_alpha=0;
            if (*c3 == *c)
            {
                is_alpha=1;
                break;
            }
        }
        // if the current character is not alphabet, print it as is
        if (is_alpha==0) 
        {
            printf("%c", *c);
            continue;
        }

        // if the current character is vowel
        is_vowel=0;
        for (char *c2=vowel; *c2!=0; c2++) 
        {
            if (*c2 == *c)
            {
                //printf("c2=%c\n",*c2);
                //printf("v\n");
                printf("v");
                is_vowel=1;
                break;
            }
        }
        //if (is_vowel != 1) printf("c\n");
        if (is_vowel != 1) printf("c");
        //printf("---------------------\n");
    }
}
