//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30747
#include <stdio.h>

int main(){
    double num;

    //input and convert the input unit from 'km' into 'mile'
    while(scanf("%lf", &num) != EOF)
        printf("%.1lf\n", 1.6*num);
}