#include <stdio.h>

int main() {
    int x,y;
printf("Enter a number to print numbers in reverse\n");
scanf("%d",&x);
for(y=1;y<=x;x--){
    printf("%d\n",x);
}

    return 0;
}
