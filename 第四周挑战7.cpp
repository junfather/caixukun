#include<stdio.h>
#include<string.h> 
    struct Student
    {
        char student_ID[17];
        int seat1;
        int seat2;
    }student[1000];
int main()
{
    struct Student stduent[1000] ;
    int Iint[1000];
    int i,j,n,a;
    printf("考生数: \n");
    scanf("%d" ,&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %d %d" ,&student[i].student_ID,&student[i].seat1,&student[i].seat2);
    }  
    printf("退到考生数:");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("退到考生的座位号:");
        scanf("%d" ,&Iint[j]);
        for(i=0;i<a;i++)
        {
            if(Iint[j]==student[i].seat1)
            {
                printf("考号:%s考試座位号:%d\n",student[i].student_ID,student[i].seat2);
                break;
            }
        }
    }
    return 0;
}
 
