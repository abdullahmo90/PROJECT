#include<stdio.h>
#include<stdlib.h>
#include "STD.h"
#include "SDB.h"




int i=0;
//is full function
booll SDB_IsFull()
{
	if(i==9)
	{
		return true;
	}
	else
		return false;
}

// n of student function
uint8 SDB_GetUsedSize()
{
	printf("the number of students is %d",i);
}


booll SDB_AddEntry()
{
    if(SDB_IsFull())
		return 0;
	else
	{
	    printf("add student Details\n");
	
	    printf("enter ID of student\n");
	    scanf("%d",&st[i].Student_ID);
	
	    printf("enter the year of student\n");
	    scanf("%d",&st[i].Student_year);
	
	    printf("enter course 1 ID of student\n");
	    scanf("%d",&st[i].Course1_ID);
	
	    printf("enter course 1 grade of student\n");
	    scanf("%d",&st[i].Course1_grade);
	
	    printf("enter course 2 ID of student\n");
	    scanf("%d",&st[i].Course2_ID);
	
	    printf("enter course 2 grade of student\n");
	    scanf("%d",&st[i].Course1_grade);
	
	    printf("enter course 3 ID of student\n");
	    scanf("%d",&st[i].Course3_ID);
	
	    printf("enter course 3 grade of student\n");
	    scanf("%d",&st[i].Course1_grade);
	
	    i=i+1;
	    return 1;
	}
	

}
void SDB_DeletEntry (int temp)
{
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   for (int j = 1; j <= i; j++)
   {
      if (temp == st[j].Student_ID)
      {
          for (int k = j; k <9; k++)
          {
              st[k] = st[k + 1];
          }
          i--;
      }
   }
   printf("The entered student's record deleted successfully");
	     
}
    

    


booll SDB_ReadEntry (int temp)
{
   printf("Enter the ID number of the student\n");
   scanf("%d",&temp);
   for(int j = 1; j <= i; j++)
   {
       if(temp == st[i].Student_ID)
       {
            printf("The student's details are\n");
            printf("The ID is %s\n", st[i].Student_ID);
            printf("The year is %s\n", st[i].Student_year);
            printf("The course 1 Id is %f\n", st[i].Course1_ID);
		    printf("The course 1 grade is %f\n", st[i].Course1_grade);
		    printf("The course 2 Id is %f\n", st[i].Course2_ID);
		    printf("The course 2 grade is %f\n", st[i].Course2_grade);
		    printf("The course 3 Id is %f\n", st[i].Course3_ID);
		    printf("The course 3 grade is %f\n", st[i].Course3_grade);
		 
		    return 1;
	    }
       else
	   {
		   printf("No student found");
		  
		   return 0;
	   }
   }	
}

booll SDB_IsIdExist(int temp)
{
   printf("Enter the ID number of the student\n");
   scanf("%d", &temp);
   
   for (int j = 1; j <= i; j++)
   {
        if (temp == st[i].Student_ID)
	    {
		    printf("student is found\n");
		  
		    return 1;
	    }
	    else 
	    {
		    printf("student is not found\n");
		  
		    return 0;
	    }
    }
}






			





	   







