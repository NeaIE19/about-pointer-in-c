#include <stdio.h>

char string_A[80] = "A string to be used for demonstrations purposes";
char string_B[80];

/* trying to copy a string_A to String_B being string_C */
char *ive_string_copy(const char *destinations, const char *source)
{
    char *pointer = destinations;
    while (*source != '\0')
    {
        *pointer++ = *source++;
    }
    
    return destinations;
}
int main(int argc, char const *argv[])
{
    /*** programs 3.1 from PTRTUT10.htm 
     * set aside an contiguous block of memory 40 bytes long to hold 
     * characters and initialized it such that the first 4 characters
     * are
     * ***/

    int i = 0;
    char *pointer_A;        /* a pointer to type characters */
    char *pointer_B;        /* another pointer to type characters*/
    puts(string_A);         /* show string A */
    pointer_A = &string_A;  /* point pointer_A at string  A */
    pointer_B = &string_B;  /* point pointer_B at string B */
    puts(pointer_A);        /* show what pointer_A is pointing to */
    putchar('\n');          /* move down one line on the screens */
    
    /* technique of copying a string to other string */
    while (pointer_A[i] != '\0')  /* line A (see text) */
    {
        pointer_B[i] = pointer_A[i];    /* line B (see text) */
        i++;
    }
    pointer_B[i] = '\0';       /* line C (see text) */
    puts(pointer_B);        /* shows string_B on screens */
    
    char *source = " aku suka kamu";
    ive_string_copy(string_B, source);   /* other things of copying string it has been accessed */
    printf("after copying ");puts(string_B);
    return 0;
}
