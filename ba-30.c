//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30780
#include <stdio.h>

int main(){
    char cons[12][12]={"Aquarius", "Pisces", "Aries", "Taurus", "Gemini", "Cancer", "Leo", "Virgo", "Libra", "Scorpio", "Sagittarius", "Capricorn"};
    int search[13][3]={{0,0,0}, {21,11,0}, {19,0,1}, {21,1,2}, {21,2,3}, {22,3,4}, {22,4,5}, {23,5,6}, {24,6,7}, {24,7,8}, {24,8,9}, {23,9,10}, {22,10,11}};
    //first element among three is the start date of the latter constellation in the month
    int month, date;
    scanf("%d %d", &month, &date);

    if(date < search[month][0])
        printf("%s\n", cons[search[month][1]]);
    else
        printf("%s\n", cons[search[month][2]]); 
}