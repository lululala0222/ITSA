//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30786
#include <stdio.h>

int main(){
    //initialize
    double a;
    double mn = 1e9;
    double mx = -1e9;

    //experience all the input interger
    //refreshing the values of maximum and minimum
    for(int i = 0; i < 10; i++){
        scanf("%lf", &a);
        if(a > mx) mx = a;
        if(a < mn) mn = a;
    }
    
    //output the result
    printf("maximum:%.2lf\n", mx);
    printf("minimum:%.2lf\n", mn);
    
}