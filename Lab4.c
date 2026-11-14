#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// лабораторна 4 цикли
// завдання 2 51 58 77 113 114 175 210 219 266

void zad2()
{
    int n, i;
    printf("\n----- zadannya 2 -----\n");
    printf("znayty vsi dilnyky chysla\n");
    printf("vvedit n: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("pomylka! treba naturalne chyslo\n");
        return;
    }

    printf("dilnyky: ");
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            printf("%d ", i);
    printf("\n");
}

void zad51()
{
    int n, i;
    double s = 0;
    printf("\n----- zadannya 51 -----\n");
    printf("S = 1 + 1/2 + 1/3 + ... + 1/n\n");
    printf("vvedit n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n maje buty >= 1\n");
        return;
    }

    for (i = 1; i <= n; i++)
        s = s + 1.0 / i;

    printf("S = %f\n", s);
}

void zad58()
{
    int n, k;
    double x = 0.5;
    double s = 0;
    double p = 1;

    printf("\n----- zadannya 58 -----\n");
    printf("S = x + x^2/2 + ... + x^n/n  (x=0.5)\n");
    printf("vvedit n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("n maje buty >=1\n");
        return;
    }

    for (k = 1; k <= n; k++) {
        p = p * x;
        s = s + p / k;
    }

    printf("S = %f\n", s);
}

void zad77()
{
    double L = 4.5;
    double d, h, kut;

    printf("\n----- zadannya 77 -----\n");
    printf("palycya 4.5 m bilya stiny\n");
    printf("d pochynaetsya z 3 m, krok 0.2\n\n");
    printf("  d      kut\n");
    printf("--------------\n");

    for (d = 3.0; d < L; d = d + 0.2) {
        h = sqrt(L * L - d * d);
        kut = atan(h / d) * 180 / 3.14159265;
        printf("%5.1f   %7.2f\n", d, kut);
    }
    printf("\npalycya vpala\n");
}

void zad113()
{
    int k, m, n, a, b, c;

    printf("\n----- zadannya 113 -----\n");
    printf("chysla Pifagora\n");
    printf("a=m*m-n*n  b=2*m*n  c=m*m+n*n\n");
    printf("vvedit k: ");
    scanf("%d", &k);

    if (k <= 2) {
        printf("k maje buty >2\n");
        return;
    }

    printf("\nm   n    a    b    c\n");
    printf("-------------------\n");

    for (m = 2; m < k; m++) {
        for (n = 1; n < m; n++) {
            a = m * m - n * n;
            b = 2 * m * n;
            c = m * m + n * n;
            printf("%2d  %2d  %3d  %3d  %3d\n", m, n, a, b, c);
        }
    }
}

void zad114()
{
    long long C;
    long long kilk;

    printf("\n----- zadannya 114 -----\n");
    printf("rozmin sumy kupjuramy\n");
    printf("vvedit C: ");
    scanf("%lld", &C);

    if (C < 0) {
        printf("suma ne mozhe buty vidjemnoju\n");
        return;
    }

    printf("\nrozrahunok:\n");

    kilk = C / 10000;
    if (kilk > 0) printf("10000 grn: %lld\n", kilk);
    C = C % 10000;

    kilk = C / 1000;
    if (kilk > 0) printf("1000 grn: %lld\n", kilk);
    C = C % 1000;

    kilk = C / 500;
    if (kilk > 0) printf("500 grn: %lld\n", kilk);
    C = C % 500;

    kilk = C / 100;
    if (kilk > 0) printf("100 grn: %lld\n", kilk);
    C = C % 100;

    kilk = C / 50;
    if (kilk > 0) printf("50 grn: %lld\n", kilk);
    C = C % 50;

    kilk = C / 10;
    if (kilk > 0) printf("10 grn: %lld\n", kilk);
    C = C % 10;

    kilk = C / 5;
    if (kilk > 0) printf("5 grn: %lld\n", kilk);
    C = C % 5;

    if (C > 0) printf("1 grn: %lld\n", C);
}

void zad175()
{
    int a;
    long long dob = 1;

    printf("\n----- zadannya 175 -----\n");
    printf("poslidovnist dodatnih chysel, kinets - 0\n");
    printf("vyvesty a1, a1*a2, a1*a2*a3, ...\n");
    printf("vvodte chysla (0 - kinets):\n");

    scanf("%d", &a);

    if (a == 0) {
        printf("poslidovnist porozhnya\n");
        return;
    }

    printf("rezultat: ");

    while (a != 0) {
        if (a < 0) {
            printf("\npomylka - treba dodatni\n");
            return;
        }
        dob = dob * a;
        printf("%lld ", dob);
        scanf("%d", &a);
    }
    printf("0\n");
}

void zad210()
{
    int i = 1;
    double a;
    double eps = 0.0001;

    printf("\n----- zadannya 210 -----\n");
    printf("a_i = 1 / i^2\n");
    printf("znayty n de a_n < 0.0001\n\n");

    while (1) {
        a = 1.0 / (i * i);
        printf("a_%d = %f\n", i, a);

        if (a < eps) {
            printf("\nn = %d\n", i);
            break;
        }
        i++;
        if (i > 100000) {
            printf("ne znajdeno\n");
            break;
        }
    }
}

void zad219()
{
    int i = 1;
    double a;
    double eps = 0.001;

    printf("\n----- zadannya 219 -----\n");
    printf("a_i = 1 / (i*(i+1))\n");
    printf("znayty n de a_n < 0.001\n\n");

    while (1) {
        a = 1.0 / (i * (i + 1.0));
        printf("a_%d = %f\n", i, a);

        if (a < eps) {
            printf("\nn = %d\n", i);
            break;
        }
        i++;
        if (i > 100000) {
            printf("ne znajdeno\n");
            break;
        }
    }
}

void zad266()
{
    long long n, t;
    int starsha, c, kilk = 0;

    printf("\n----- zadannya 266 -----\n");
    printf("skilky raziv zustrichajetsya starsha cyfra\n");
    printf("vvedit chyslo: ");
    scanf("%lld", &n);

    if (n <= 0) {
        printf("treba naturalne chyslo\n");
        return;
    }

    // shukaju starshu cyfru
    t = n;
    while (t >= 10)
        t = t / 10;
    starsha = t;

    // rahuju skilky raziv
    t = n;
    while (t > 0) {
        c = t % 10;
        if (c == starsha)
            kilk++;
        t = t / 10;
    }

    printf("starsha cyfra: %d\n", starsha);
    printf("kilkist: %d\n", kilk);
}

int main()
{
    int v;

    printf("================================\n");
    printf("  Laboratorna robota 4. Cykly\n");
    printf("  zadannya: 2,51,58,77,113,114,\n");
    printf("            175,210,219,266\n");
    printf("================================\n");

    do {
        printf("\nmenu:\n");
        printf("  2 - dilnyky\n");
        printf(" 51 - suma 1+1/2+...\n");
        printf(" 58 - suma x^k/k\n");
        printf(" 77 - kut palyci\n");
        printf("113 - chysla Pifagora\n");
        printf("114 - rozmin kupjuramy\n");
        printf("175 - nakopychuvalni dobutky\n");
        printf("210 - poslidovnist 1/i^2\n");
        printf("219 - poslidovnist 1/(i*(i+1))\n");
        printf("266 - kilkist starshoi cyfry\n");
        printf(" 99 - vsi pidryad\n");
        printf("  0 - vyhid\n");
        printf("vash vybir: ");
        scanf("%d", &v);

        if (v == 2) zad2();
        else if (v == 51) zad51();
        else if (v == 58) zad58();
        else if (v == 77) zad77();
        else if (v == 113) zad113();
        else if (v == 114) zad114();
        else if (v == 175) zad175();
        else if (v == 210) zad210();
        else if (v == 219) zad219();
        else if (v == 266) zad266();
        else if (v == 99) {
            zad2();
            zad51();
            zad58();
            zad77();
            zad113();
            zad114();
            zad175();
            zad210();
            zad219();
            zad266();
        }
        else if (v == 0)
            printf("kinec\n");
        else
            printf("nevirnyy vybir\n");

    } while (v != 0);

    return 0;
}