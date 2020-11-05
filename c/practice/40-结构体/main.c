//
//  main.c
//  40-结构体
//
//  Created by edz on 2020/8/10.
//  Copyright © 2020 edz. All rights reserved.
//

#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[20];
    int id;
    double math;
} Student;


void displayStudent (struct student *s) {
    printf("name:%s\t",s->name);
    printf("id:%4d\t",s->id);
    printf("matn:%6.2lf\n",s->math);
    
}



int main(int argc, const char * argv[]) {
    struct student s1;
    printf("%lu\n",sizeof(s1));
    
    s1.id=1;//(&s1)->id=1;
    strcpy(s1.name, "safd");
    s1.math=80;
    
    displayStudent(&s1);
    
    struct student s2={"aaaa",1,60};
    displayStudent(&s2);

    Student s[10];
    s[0]=s1;
    s[1]=s2;
    
    Student *p;
    p=&s[1];
    p=s+1;
    strcpy(p->name, "wang");
    displayStudent(p);
    
    return 0;
}
