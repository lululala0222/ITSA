//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2641
#include <stdio.h>

int main(){
    char ch_zo[13][10] = {"monkey", "rooster", "dog", "pig", "rat", "ox", "tiger", "rabbit", "dragon", "snake", "horse", "sheep"};
    int year;
    scanf("%d", &year);
    printf("%s\n", ch_zo[year%12]);
}