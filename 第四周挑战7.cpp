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
    printf("������: \n");
    scanf("%d" ,&a);
    for(i=0;i<a;i++)
    {
        scanf("%s %d %d" ,&student[i].student_ID,&student[i].seat1,&student[i].seat2);
    }  
    printf("�˵�������:");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        printf("�˵���������λ��:");
        scanf("%d" ,&Iint[j]);
        for(i=0;i<a;i++)
        {
            if(Iint[j]==student[i].seat1)
            {
                printf("����:%s��ԇ��λ��:%d\n",student[i].student_ID,student[i].seat2);
                break;
            }
        }
    }
    return 0;
}
 
