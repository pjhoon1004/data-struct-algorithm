#include<stdio.h>
char a[20];
int main(){
    scanf("%s",&a);
    printf("19%c%c/ %c%c/ %c%c ",a[0],a[1],a[2],a[3],a[4],a[5]);
    if(a[7]=='1'|a[7]=='3'){
    printf("%c",'M');
    }
    else
    printf("%c", "F");
    
}