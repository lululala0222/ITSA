//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30792
#include <stdio.h>

int main(){
    double height, sex;
    //read the data, judge the sex, and output the result of computing
    while(scanf("%lf %lf", &height, &sex) != EOF){
        if(sex == 1)
            printf("%.1lf\n", (height - 80) * 0.7);
        else printf("%.1lf\n", (height - 70) * 0.6);
    }
}