//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30761
#include <stdio.h>

//recursive fuction with the problem's requirement
int rec(int n){
    if(n == 0 || n == 1)
        return n + 1;
    else return rec(n - 1) + rec(n / 2);
}

int main(){
    int num;
    scanf("%d", &num);
    printf("%d\n", rec(num));
}