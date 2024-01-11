//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30748
#include <stdio.h>

int main(){
    //initialize and input
    int in_hr, in_min;
    int out_hr, out_min;
    scanf("%d %d", &in_hr, &in_min);
    scanf("%d %d", &out_hr, &out_min);

    //convert all times to minutes
    int cnt = out_hr*60 + out_min - in_hr*60 - in_min;
    
    //judge and apply the requested charges
    if(cnt <= 120)
        printf("%d\n", cnt/30*30);
    else if(cnt <= 240)
        printf("%d\n", 120 + (cnt-120)/30*40);
    else printf("%d\n", 280 + (cnt-240)/30*60);
}