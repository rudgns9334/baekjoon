#include <cstdio>
#include <cmath>
#define _USE_MATH_DEFINES
int main() {
    double r,s1,s2;
    scanf("%lf",&r);
    s1 = M_PI * r * r;
    s2 = r*r*2;
    printf("%.6f\n",s1);
    printf("%.6f\n",s2);
    return 0;
}