#include <stdio.h>

int jvalue, kvalue;
int *ptr;

int main(int argc, char const *argv[])
{
    /* program 1.1 from PTRTUT10.TXT */

    int k;
    ptr = &k;
    *ptr = 7; /* define and store the value of pointer and k value*/
    printf("%d\n", k);

    /**** one way to see how all this stuff fits together would
    ***** be to run the following programs and then review the code
    ***** and the output carefully
    ****/
   
   jvalue = 20;
   kvalue = 2;
   ptr = &kvalue;

   printf("\n");
   printf("j has the value %d and is stored at %p\n", jvalue, (void *)&jvalue);
   printf("k has the value %d and is stored at %p\n", kvalue, (void *)&kvalue);
   printf("the value of integer of pointed to by ptr is %d\n", *ptr);
   

    return 0;
}
