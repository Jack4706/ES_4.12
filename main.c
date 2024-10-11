#include <stdio.h>

int main() {

    int  a,b,n;

    printf("visualizza tutti i numeri multipli di n e compresi tra a e b\nn:\n");
    scanf("%d",&n);
    printf("a:\n");
    scanf("%d",&a);
    printf("b:\n");
    scanf("%d",&b);

    int i = a;

    while(i <= b) {
        printf("%d\n",n*i);
        i++;
    }
    /*for(int i = a; i <= b; i++) {
        printf("%d\n",n*i);
    }*/

    return 0;
}
