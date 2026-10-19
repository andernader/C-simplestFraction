#include <stdio.h>

int main(void){
    int numinator, denominator, n, m, gcd, reminder;
    printf("Enter a fraction(2/4): ");
    scanf("%d / %d", &numinator, &denominator);
    n = numinator;
    m = denominator;

    while(1){
        if(n == 0){
            gcd = m;
            break;
        }else{
            reminder = m % n;
            m = n;
            n = reminder;
        }
    }

    numinator /= gcd;
    denominator /= gcd;
    printf("The simplest fraction is: %d/%d\n", numinator, denominator);
    return 0;
}
