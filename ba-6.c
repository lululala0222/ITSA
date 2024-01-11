//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754
#include <stdio.h>

int main(){
    int month;
    scanf("%d", &month);

    //judge which season it is, and then output
    if(month <= 2) printf("Winter\n");
    else if(month <= 5) printf("Spring\n");
    else if(month <= 8) printf("Summer\n");
    else if(month <= 11) printf("Autumn\n");
    else printf("Winter\n");
}