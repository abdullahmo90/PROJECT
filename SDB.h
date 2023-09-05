#include<stdio.h>
#include "STD.h"

//database for students
struct SimpleDb
{
 uint32 Student_ID;
 uint32 Student_year;
 uint32 Course1_ID;
 uint32 Course1_grade;
 uint32 Course2_ID;
 uint32 Course2_grade;
 uint32 Course3_ID;
 uint32 Course3_grade;
}st[10];

//functions prototypes
booll SDB_IsFull();
uint8 SDB_GetUsedSize();
booll SDB_AddEntry();
void SDB_DeletEntry(int temp);
booll SDB_ReadEntry(int temp);
booll SDB_IsIdExist(int temp);
