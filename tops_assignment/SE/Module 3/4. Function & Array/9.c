/*
9. WAP to show difference between Structure and Union.
*/

#include<stdio.h>

struct student{
    int rollno;
    char name[50];
};

union faculty{
    int fno;
    char faculty_name[50];
};

int main(){
    struct student s1={1,"abc"};
    union faculty f1={9};
    printf("Structure:\trollno:%d\tname:%s",s1.rollno,s1.name);
    printf("\nUnion:\trollno:%d\tname:%s",f1.fno,f1.faculty_name);
    
    return 0;
    
}




