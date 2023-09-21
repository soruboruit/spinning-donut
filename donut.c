#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int k;
    float A = 0, B = 0, i, j;
    char b[1760];
    float z[1760];
    printf("\n\x1b[2J");
    for (;;)
    {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for (j = 0; 6.28 > j; j += 0.004)
        {
            for (i = 0; 6.28 > i; i += 0.04)
            {
                float c = sin(i), d = cos(j), e = sin(A), f = sin(j), g = cos(A), h = d + 2;
                float D, l, m, n, t;
                D = 1 / (c * h * e + f * g + 5);
                l = cos(i);
                m = cos(B);
                n = sin(B);
                t = c * h * g - f * e;

                int x = (int)(40 + 30 * D * (l * h * m - t * n));
                int y = (int)(12 + 15 * D * (l * h * n + t * m));
                int o = x + 80 * y;
                int N = (int)(8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n));
                if (0 <= y && y < 22 && 0 <= x && x < 80 && D > z[o])
                {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@:"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[H");
        for (k = 0; 1760 > k; k++)
        {
            putchar(k % 80 ? b[k] : '\n');
        }
        A += 0.04;
        B += 0.01;
    }
    return 0;
}
