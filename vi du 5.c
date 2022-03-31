#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
    a = b = c = 0;
    printf("\nhap so thu 1 : ");
    scanf("%d", &a);
    printf("\nnhap so thu 2 : ");
    scanf("%d", & b);
    c = adder(a, b);
    printf("\n\na & b trong main() la : %d, % d", a, b);
    printf("\n\nc trong main() la : %d", c);
    }
    adder(int a, int b)
    {
    int c;
    c = a + b;
    a *= a;
    b += 5;
    printf("\n\na & b trong ham adder la: %d, %d ", a, b);
    printf("\nc trong ham adder la : %d", c);
return(c);
}
