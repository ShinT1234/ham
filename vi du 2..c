#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c, sum;
    printf("\n Nhap 3 so bat ky: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = calculatesum(a, b, c);
    printf("\n Tong = %d", sum);
    return 0;
}
    calculatesum(int x, int y, int z)
{
    int d;
    d = x + y + z;
    return (d);
}
