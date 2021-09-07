#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "fib_search.h"

struct student
{
    char name[20];
    int age;
    int roll_no;
};

int roll_no_cmp(void *a, void *b)
{
    struct student *i = (struct student *)a;
    int *j = (int *)b;

    if(i->roll_no > *j)
    {
        return 1;
    }
    if(i->roll_no < *j)
    {
        return -1;
    }
    return 0;
}

int main()
{
	struct student **sdmn = (struct student **)malloc(sizeof(struct student *)*7);
	struct student s1 = {"Josh",29,1};
	struct student s2 = {"Jj",28,2};
	struct student s3 = {"Ethan",26,3};
	struct student s4 = {"Vik",26,4};
	struct student s5 = {"Harry",24,5};
	struct student s6 = {"Simon",28,6};
	struct student s7 = {"Toby",28,7};

	sdmn[0] = &s1;
	sdmn[1] = &s2;
	sdmn[2] = &s3;
	sdmn[3] = &s4;
	sdmn[4] = &s5;
	sdmn[5] = &s6;
	sdmn[6] = &s7;

	int roll_no = 4;
	int ind = fib_search((void **)sdmn, sizeof(struct student *), &roll_no, roll_no_cmp);

    if(ind>=0)
	{
	    printf("Roll no. found at index: %d\n",ind);
	    printf("Details of the student for corresponding number are:\n");
	    printf("Name of the student : %s\n",sdmn[ind]->name);
	    printf("Age of the student : %d\n",sdmn[ind]->age);
	}
    else
	{
	    printf("Roll no. %d does not exist in the records\n",roll_no);

	}
}
