# include <stdio.h>
# define N 10 

int main() {
    int a[N],*p;
    printf("please enter number,press enter to next..\n");
    for(p = a ; p < a + N ; p++ ) {
        scanf("%d",p);
    }

    printf("reverse number list'");
    for(p = a + N - 1 ; p >= a ; p--) {
        printf("%d",*p);
    }
    printf("\n");
}