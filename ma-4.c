//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6864
#include <stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d%c%d%c%d\n", a, '+', b, '=', a+b);
    printf("%d%c%d%c%d\n", a, '*', b, '=', a*b);
    printf("%d%c%d%c%d\n", a, '-', b, '=', a-b);
    if(a >= 0) printf("%d%c%d%c%d%c%c%c%d\n", a, '/', b, '=', a/b, '.', '.', '.', a%b);
    else printf("%d%c%d%c%d%c%c%c%d\n", a, '/', b, '=', a/b-1, '.', '.', '.', a%b+b);
}