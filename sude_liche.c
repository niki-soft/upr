#include <stdio.h>

int main() {
    int a,b,c;
    
    fscanf( stdin, "%d %d", &a, &b );
    
    if (a > b) {
        c = a;
        a = b;
        b = c;
    }
    
    printf("Sude\n" );
    for (int i = a; i <= b; i++ ) {
        if ((i % 2) == 0) {
            printf("%d\n", i);
        }
    }

    printf( "Liche\n" );
    for (int i = a; i <= b; i++ ) {
        if ((i % 2) == 1) {
            printf("%d\n", i);
        }
    }
    

    return 0;
}
