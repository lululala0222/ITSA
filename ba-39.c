//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30758
#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    while(n--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        
        int grade[3] = {a, b, c};
        //bubble sort
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 2-i; j++){
                if(grade[j] > grade[j+1]){
                    int tmp = grade[j];
                    grade[j] = grade[j+1];
                    grade[j+1] = tmp;
                }
            }
        }

        if(grade[0] >= 60) //if all pass 
            printf("P\n");       
        else if((grade[0] < 60 && grade[1] >= 60) && (grade[0]+grade[1]+grade[2] >= 220))
            printf("P\n");    
        else if((grade[0] < 60 && grade[1] >= 60) && (grade[0]+grade[1]+grade[2] < 220))
            printf("M\n");
        else if((grade[0] < 60 && grade[1] < 60 && grade[2] >= 60) && grade[2] >= 80)
            printf("M\n");
        else
            printf("F\n");
    }
}