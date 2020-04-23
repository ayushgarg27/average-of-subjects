#include<stdio.h>
int main(){
    float n1,n2,n3,n4,n5;
    float sum;
    float avg;
    printf("Enter the marks of 5 subjects");
    printf("\n");
    printf("1st: ");
    scanf("%f", &n1);
    printf("2nd: ");
    scanf("%f", &n2);
    printf("3rd: ");
    scanf("%f", &n3);
    printf("4th: ");
    scanf("%f", &n4);
    printf("5th: ");
    scanf("%f", &n5);
    sum = n1 + n2 + n3 + n4 + n5;
    avg = sum / 5;
    if(avg>90){
        printf("Excellent");
    }else if(avg>80){
        printf("Good");
    }else if(avg>70){
        printf("Fair");
    }else if(avg>60){
        printf("Average");
    }else{
        printf("Below average");
    }
}