//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=674
#include <stdio.h>

int main(){
    int cnt = 0;
    int arr[105];
    while(scanf("%d", &arr[cnt++]) != EOF);
    cnt -= 2;
    while(cnt >= 0)
        printf("%d%c", arr[cnt--], "\n "[cnt != 0]);
}