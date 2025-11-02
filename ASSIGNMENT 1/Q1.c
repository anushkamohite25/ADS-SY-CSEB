#include<stdio.h>
int main() {
    int n[10];
    int sum=0;
    int avg;
    for(int i=0;i<10;i++){
        scanf("%d",&n[i]);
        sum=sum+n[i];
    }
    avg=sum/10;
    printf("%d\n",avg);
    return 0;
}
