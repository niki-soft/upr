#include <stdio.h>

int main() {
    int a,b,c;
    
    fscanf( stdin, "%d %d", &a, &b );
    
    if (a > b) {
        c = a;
        a = b;
        b = c;
    }
    c = 0;
    for (int i = a; i <= b; i++ ) {
        if ((i % 2) == 0) {
            c += i;       
        }
    }
    printf("Soucet sudych je %d\n", c);
    
    c = 0;
    for (int i = a; i <= b; i++ ) {
        if ((i % 2) == 1) {
            c += i;
        }
    }
    printf("Soucet lichych je %d\n", c);

    return 0;
}
