#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void check(char *a, char *b, int (*cmp)());
main(){
	char s1[80];
	char s2[80];
    int (*p)();
    p=strcmp;
    gets(s1);
    gets(s2);
    check(s1, s2, p);
}
    void check(char *a, char *b, int (*cmp)())
{
    printf("kiem tra su can bang \n");
    if(!(*cmp)(a,b))
       printf("Cong bang");
    else
       printf("Khog cong bang");
}
