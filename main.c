#include <stdio.h>
#include <stdlib.h>
int main()
{
    int c,d,e,f;
    float g;
    g=0;
    int a[30]={0};
    int b[30]={0};
    for(c=1; ; c++)
    {
        printf("1．Input record\n");//录入每个学生的学号和考试成绩
        printf("2. Calculate total and average score of course\n");// 计算课程的总分和平均分
        printf("3. Sort in descending order by score\n");// 按成绩由高到低排出名次表
        printf("4. Sort in ascending order by score\n");//按成绩由低到高排出名次表
        printf("5. Sort in ascending order by student's ID\n");//按学号由小到大排出成绩表
        printf("6．Search by student's ID\n");//按学号查询学生排名及其考试成绩
        printf("7．Statistic analysis\n");// 按优秀（90—100分）、良好（80—89分）、中等（70—79分）、及格（60一69分）、不及格(0—59分)5个类别，统计每个类别的人数以及所占的百分比
        printf("8．List record\n");//输出每个学生的学号、考试成绩
        printf("9．Exit\n");//退出程序
        printf("Please enter your choice:\n");
        scanf("%d",&d);
        if(d==1)
        {
            printf("How many students?\n");
            scanf("%d",&e);
            printf("please input student id and score like (200210523 68)\n");
            for(f=0;f<e;f++)
            {
                scanf("%d %d",&a[f],&b[f]);
                g=g+b[f];
            }
        }
        if(d==2)
        {
            printf("Calculate total of course = %f\n",g);
            printf("Average score of course = %f",g/e);
        }
        int i,j,t,n;
        if(d==3)
        {
            for(i=0;i<e-1;i++)
            {
                for(j=i+1;j<e;j++)
                {
                    if(b[j]>b[i])
                    {
                        t=b[j];
                        b[j]=b[i];
                        b[i]=t;
                    }
                }
            }
            for(n=0;n<e;n++)
            {
                printf("%d %d\n",a[n],b[n]);
            }
        }
        if(d==4)
        {
          for(i=0;i<e-1;i++)
            {
                for(j=i+1;j<e;j++)
                {
                    if(b[j]<b[i])
                    {
                        t=b[j];
                        b[j]=b[i];
                        b[i]=t;
                    }
                }
            }
            for(n=0;n<e;n++)
            {
                printf("%d %d\n",a[n],b[n]);
            }
        }
        if(d==9)
        {
            return 0;
        }
    }
}
