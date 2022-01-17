#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a[10][10],m,n;
    float student_avg[10],subject_avg[10];
    printf("Enter the no. of students and no. of subjects:");
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        printf("Enter the marks of student no. %d:",i+1);
        for(j=0;j<n;j++)
          scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        student_avg[i]=0;
        for(j=0;j<n;j++)
            student_avg[i]+=a[i][j];
        printf("\nThe average of student no. %d is %5.2f.",i+1,student_avg[i]/(n*1.0));
    }
    for(j=0;j<n;j++)
    {
        subject_avg[j]=0;
        for(i=0;i<m;i++)
            subject_avg[j]+=a[i][j];
        printf("\nThe average of subject no. %d is %5.2f.",j+1,subject_avg[j]/(m*1.0));
    }
    printf("\n");
    return 0;
}

