//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30766
#include <stdio.h>

int main(){
    
    char ch; //'ch' is to read characters
    char arr[100]; //'arr' is to store the characters
    int cnt = 0; //'cnt' used to count how many digits the input is

    //since we are not sure about the digits of the input interger, we set the terminatie condition to 'EOF' or '\n'
    //preventing from reading unwanted input, we use a statement to judge if the input character is number
    while(scanf("%c", &ch) != EOF && ch != '\n'){
        if(ch > '9' || ch < '0')
            continue;
        arr[cnt++] = ch;    
    }
    
    int a = cnt/2;
    cnt--;// to correspond the 'arr' index
    //if the number is not palindrome, then output "NO\n", and terminate the program
    for(int i = 0; i < a; i++){
        if(arr[i] != arr[cnt--]){
            printf("NO\n");
            return 0;
        }
    }
    //if the program has not been terminated in the loop
    //it means the number has passed the check of palindrome
    //so we can finally output "YES\n", and terminate the program
    printf("YES\n");
    return 0;
}