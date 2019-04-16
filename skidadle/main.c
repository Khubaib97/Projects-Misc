#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter number:\n");
    scanf("%d", &num);
    int pow;
    printf("Enter power:\n");
    scanf("%d", &pow);
    int result;
    result = power(num, pow);
    printf("The result is %d", result);
    return 0;
}
int power(int n, int p){
    if(p!=0){
        return (n * power(n, p-1));
    }
    else{
        return 1;
    }
}
