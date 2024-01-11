//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879

#include <stdio.h>

int main(){
    long long i;
    scanf("%lld", &i);
    if(i > 31) printf("Value of more than 31\n");
    else printf("%lld\n", (long long) 2 << (i-1));

}