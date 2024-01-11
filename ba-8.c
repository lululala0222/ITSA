//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30752
#include <stdio.h>

int main(){
    int n, ans = 0;
    while(scanf("%d", &n) != EOF){
        for(int i = 2; i < n; i++){
            if (n % i == 0){
                ans++;
                break;
            }
        }
        if(ans == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
}