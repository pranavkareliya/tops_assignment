/* 10.find the area of a rectangluar prism formula : A = 2 (wl+hl+hw) */
#include <stdio.h>

int main() {
    
    int A,w,l,h;
    
    printf("Enter the value of Height : ");
    scanf("%d",&h);
    
    printf("Enter the value of Width : ");
    scanf("%d",&w);
    
    printf("Enter the value of Length : ");
    scanf("%d",&l);
    
    A = 2*((w*l)+(h*l)+h*w);
    printf("The area of rectangular prism formula is %d.",A);

    return 0;
}
