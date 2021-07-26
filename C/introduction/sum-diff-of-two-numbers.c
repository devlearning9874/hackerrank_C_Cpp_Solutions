#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, sumInt, diffInt;
    float p, q, sumFloat, diffFloat;

    scanf("%d%d", &a, &b);
    scanf("%f%f", &p, &q);

    sumInt = a + b;
    diffInt = a - b;

    sumFloat = p + q;
    diffFloat = p - q;

    printf("%d %d \n", sumInt, diffInt);

    printf("%0.1f %0.1f \n", sumFloat, diffFloat);

    return 0;
}

/*

Sample Input

10 4
4.0 2.0
Sample Output

14 6
6.0 2.0


*/