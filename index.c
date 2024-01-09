#include <stdio.h>

 int main()
 {
    // q1
    for(int i=0; i<=5; i++){
        for(int j=0; j<=15; j++){
            if(i==0||j==0||i==5||j==15){
                printf("* ");
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
// q2
    float arr[3][3] = {{8, 20, 30}, {13,35, 9}, {2, 7, 6}};
    float sum=0;
    float avg;
    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            sum+=arr[i][j];
        }
    }
    avg = sum/9;
    printf("average%.2f",avg);
// q3

int arr[3][3] = {{8, 20, 30}, 
                 {13,35, 9}, 
                  {2, 7, 6}};
    int sum=0;
    int sum2=0;
    for (int i=0;i<=2;i++) {
        for (int j=0;j<=2;j++) {
            if(i==j){
            sum+=arr[i][j];
            }
            else if(i+j==2||i+j==1){
                sum2+=arr[i][j];
            }
        }
    }

printf("%d",sum+sum2);

    return 0;
}
