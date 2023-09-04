#include<stdio.h>
#include "STD.h"
#include "SDB.h"

void SDB_action(uint8 choice);
void SDB_APP()
{
	uint8 choice;


    printf("1-check if database is full or not\n");
    printf("2-to get n of students\n");
    printf("3-add student to the system\n");
    printf("4-remove student from the system\n");
    printf("5-search by ID\n");
    printf("6-search if ID exist\n");

    SDB_action(choice);
}

void SDB_action(uint8 choice)
{
	int temp;
do
{
printf("\nEnter Choice: ");
scanf("%d", &choice);
switch (choice)
{	
	case 1:
	    SDB_IsFull();
		break;
	case 2:
	    SDB_GetUsedSize();
		break;
	case 3:
	    SDB_AddEntry();
		break;
	case 4:
	    SDB_DeletEntry(temp);
		break;
	case 5:
	    SDB_ReadEntry(temp);
		break;
	case 6:
	    SDB_IsIdExist(temp);
		break;
}
	
}
while(choice!=0);
}

void main(void)
{
	//SDB_APP();

}