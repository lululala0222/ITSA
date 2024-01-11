//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749
#include <stdio.h>

int main(){
    int x, y, r = 200;
    while(scanf("%d %d", &x, &y) != EOF){
        if((x*x + y*y) <= 40000)
            printf("inside\n");
        else
            printf("outside\n");
    }
}