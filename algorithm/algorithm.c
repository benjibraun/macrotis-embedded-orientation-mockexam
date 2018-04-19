#include <stdio.h>

/* Write a function which is called "get_fibonacci_number". It returns the "N"th
 * Fibonacci number, where "N" is received as a paramter.
 * For example:
 *  - get_fibonacci_number(1) returns 0
 *  - get_fibonacci_number(2) returns 1
 *  - get_fibonacci_number(3) returns 1
 *  - get_fibonacci_number(4) returns 2
 *  - get_fibonacci_number(5) returns 3
 *  - get_fibonacci_number(6) returns 5
 *
 *  If the function gets invalid parameter it returns -1.
 */
int get_fibonacci_number(int);
 int main()
 {
    int fibonacci_number;
    printf("enter number:");
    scanf("%d",&fibonacci_number);
    printf("%d",get_fibonacci_number(fibonacci_number));
    return 0;
}

int get_fibonacci_number(int n)
{
    int current;
    int first=0;
    int second = 1;
    if (n < 0){
        return -1;
    }
    for (int i = 0; i < n; i++){
        if (i <= 1){
          current = i;
        }else{
          current = first + second;
          first = second;
          second = current;
        }
      }
    return current;
}
