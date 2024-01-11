//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291
#include <stdio.h>

int main(){
    int arr[6];
    long long ans = 0;

    for(int i = 0; i < 6; i++)
        scanf("%d", &arr[i]), ans+=arr[i]*arr[i]*arr[i];
    
    printf("%lld\n", ans);
}