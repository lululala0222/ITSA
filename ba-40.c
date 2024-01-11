//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30796
#include <stdio.h>
#include <ctype.h>

int main(){
    int arr[10];
    char ch;
    for(int i = 0; i < 10; i++){
        scanf(" %c",&ch);
        if(isdigit(ch))
            arr[i] = (int)(ch-'0');
        else arr[i] = 10; //if ch == 'X'
    }
    //accumulate two times
    for(int i = 0; i < 2; i++){
        for(int j = 9; j > 0; j--){
            for(int k = 0; k < j; k++){
                arr[j] += arr[k];
            }
        }
    }
    if(arr[9] % 11 == 0)
        printf("YES\n");
    else
        printf("NO\n");
    
}