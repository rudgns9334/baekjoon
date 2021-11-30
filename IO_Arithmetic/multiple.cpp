#include <cstdio>
int main(void){
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=b;
    for(int i=0;i<3;i++){
        printf("%d\n",a*(b%10));
        b=b/10;
    }
    printf("%d",a*c);
}