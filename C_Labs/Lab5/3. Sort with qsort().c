/*
Assume the following declarations:

#define MAX_LEN 32

typedef struct student_ {
    char name[MAX_LEN];
    int group;
    int id;
} student;

typedef enum { byGroup, byLastName, byFirstName } sort_order;

void sort_students(student *students, int count, sort_order sb);


Implement function sort_students.

First parameter is array of students.
Second parameter is number of studenst to sort from the beginning of the array. 
If zero or negative value is given then all student should be sorted. The end of array marker has id set to zero (id==0).
Third parameter is the sort criteria.
Sort_students must use qsort() from standard library to sort the

The sort criterias are:

byGroup :Compare group numbers
byFirstName : First name comes first in the string and is separated from the last name by space
byLastName : As above but comparison must find last name from the strings and compare them



*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>


#define MAX_LEN 32

typedef struct student_ {
char name[MAX_LEN];
int group;
int id;
} student;

typedef enum { byGroup, byLastName, byFirstName } sort_order;

void sort_students(student *students, int count, sort_order sb);

int group_cmp(const void* a, const void* b) {
    student *ia = (student*)a;
    student *ib = (student*)b;
    return (ia->group - ib->group);
}
 
int last_cmp(const void* a, const void* b) {
    student *ia = (student*)a;
    student *ib = (student*)b;
    return strcmp(strchr(ia->name, ' '), strchr(ib->name, ' '));
}
 
int first_cmp(const void* a, const void* b) {
    student *ia = (student*)a;
    student *ib = (student*)b;
    return strcmp(ia->name, ib->name);
}
 
void sort_students(student *students, int count, sort_order sb) {
    if (count <=0) {
        for (count = 0; students[count].id !=0; count++);
    }
    switch (sb) {
        case byGroup :
            qsort(students,count,sizeof(student),group_cmp);
            break;
        case byLastName :
            qsort(students,count,sizeof(student),last_cmp);                
            break;
        case byFirstName :
            qsort(students,count,sizeof(student),first_cmp);
            break;
    }
}

