//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30757
#include <stdio.h>

int gcd(int a, int b){
    if(a % b == 0)
        return b;   
    else return gcd(b, a % b);
}

int main(){
    int a, b, ans;
    while(scanf("%d %d", &a, &b) != EOF){
        if(a < b) ans = gcd(b,a);
        else ans = gcd(a,b);
        printf("%d\n",ans);
    }
}