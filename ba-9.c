//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30751
#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        int tmp = 0, ans = 0;
        while(tmp < n){
            tmp += 3;
            if(tmp <= n)
                ans += tmp;
        }
        printf("%d\n",ans);
    }
}