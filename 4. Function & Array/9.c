/*
9. WAP to show difference between Structure and Union.
*/

#include<stdio.h>

struct student{
    int rollno;
    char name[10];
};

union faculty{
    int fno;
    char fname[10];
};

int main(){
    struct student s1={1,"pal"};
    union faculty u1={11,"nikita"};
    printf("Structure:\trollno:%d\tname:%s",s1.rollno,s1.name);
    printf("\nUnion:\trollno:%d\tname:%s",u1.fno,u1.fname);
    
    return 0;
    
}




