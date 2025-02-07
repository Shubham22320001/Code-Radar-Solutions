#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int a = (float)(x+y+z)/3;
    printf("Average: %.2f",a);
    return 0;
}