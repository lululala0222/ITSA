//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30756
#include <stdio.h>

int main(){
    int N, a1, a2, a3;
    scanf("%d,%d,%d,%d", &N, &a1, &a2, &a3);
    
    int total = a1*15 + a2*20 + a3*30;
    if(total > N)
        printf("0\n");
    else{
        int change = N - total;
        int ans1 = change/50;
        change %= 50;
        int ans2 = change/5;
        change %= 5;
        int ans3 = change;
        printf("%d,%d,%d\n",ans3,ans2,ans1);
    }
}