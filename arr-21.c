//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2196
#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    //mystery! 把 double 改成 float 就對了？？？
    float grade[n][3];
    float total = 0, totalC = 0,totalE = 0,totalM = 0;
    for(int i = 0; i < n; i++){
        scanf("%f %f %f", &grade[i][0], &grade[i][1], &grade[i][2]);
        total += (grade[i][0] + grade[i][1] + grade[i][2]);
        totalC += grade[i][0];
        totalE += grade[i][1];
        totalM += grade[i][2];
    }
    
    printf("%.1f %.1f %.1f %.1f\n",total/(n*3),totalC/n,totalE/n,totalM/n);
}