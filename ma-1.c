//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855
#include <stdio.h>

int main(){
    double up, down, height;
    scanf("%lf %lf %lf", &up, &down, &height);
    printf("Trapezoid area:%.1lf\n", (up+down) * height / 2);
    

}