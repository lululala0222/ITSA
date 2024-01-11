//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915
#include <stdio.h>

long long fac(int n){
    if(n == 1 || n == 0) return 1;
    else return n*fac(n-1);
}

int main(){
    long long n;
    scanf("%lld", &n);
    printf("%lld\n", fac(n));
}