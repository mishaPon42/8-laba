#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>

int zadanie0() {
    int c;
    char t;
    char p;

    printf("введите c: ");
    if (scanf("%d", &c) != 1) return 1;

    printf("введите t: ");
    if (scanf(" %c", &t) != 1) return 1;

    printf("введите p: ");
    if (scanf(" %c", &p) != 1) return 1;

    putchar('+');
    int count = c / 2;
    for (int start = 1; start <= c; start++) {
        if (start <= count) {
            putchar(t);
        }
        else {
            putchar(p);
        }
        putchar('!');
    }
    putchar('+');
    printf("\n");
    return 0;
}

int zadanie1() {
    int n, m;
    int s = 0;
    int k = 1;

    printf("введите n: ");
    if (scanf("%d", &n) != 1) return 1;

    printf("введите m: ");
    if (scanf("%d", &m) != 1) return 1;

    for (int i = m; i >= n; i--) {
        s += i;
        printf("выполнено %d раз(а) \n", k++);
    }
    printf("результат %d\n", s);
    return 0;
}

int zadanie2() {
    double h;
    double start = 0.2;
    double end = 2.2;

    printf("введите h: ");
    if (scanf("%lf", &h) != 1 || h <= 0) {
        return 1;
    }

    printf("+------------+------------+\n");
    printf("|     x      |    f(x)    |\n");
    printf("+------------+------------+\n");
    for (double x = start; x <= end + h / 2; x += h) {
        double y = 1.8 * x * x * x - sin(10.0 * x);
        printf("| %10.4lf | %10.4lf |\n", x, y);
    }
    printf("+------------+------------+\n");
    return 0;
}

int zadanie3() {
    double a;
    int n;
    double result = 1.0;

    printf("введите a: ");
    if (scanf("%lf", &a) != 1) return 1;

    printf("введите n: ");
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 0; i <= n + 1; i++) {
        result *= (a + i);
    }

    printf("результат %.2lf\n", result);
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");
	zadanie0();
	zadanie1(); 
    zadanie2();
    zadanie3();

    return 0;
}