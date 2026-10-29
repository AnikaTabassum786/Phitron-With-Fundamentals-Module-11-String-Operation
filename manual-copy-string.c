#include<stdio.h>
#include <string.h>

int main(){

    char a[101];
    char b[101];
    scanf("%s %s",a,b);
    printf("%s %s\n",a,b);

    int length = strlen(a);

    for(int i=0;i<=length;i++){
      a[i]=b[i];
    }
     printf("%s %s",a,b);
    return 0;
}