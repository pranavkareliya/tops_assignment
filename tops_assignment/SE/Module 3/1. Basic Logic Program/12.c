/* 12. Accept number of students from users. I need to give 5 apples to each student. How many apples are required */
#include <stdio.h>

int main() {
    
    int a,s;
    
    printf("Enter the Number of Student : ");
    scanf("%d",&s);
    
    a = 5 * s;
    printf("%d apples are required.",a);

    return 0;
}
