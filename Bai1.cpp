#include <stdio.h>
int main(void){
    // Your code here!
    int x ;
    printf("Các số nguyên 2 chữ số là bội của 7:\n");
    
    for(int i=14;i<100;i++){
        if(i%7==0)
        printf("%d",i);
        
        printf(" ");
    }
    return 0;
}
