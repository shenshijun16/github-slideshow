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
        printf("1��Input record\n");//¼��ÿ��ѧ����ѧ�źͿ��Գɼ�
        printf("2. Calculate total and average score of course\n");// ����γ̵��ֺܷ�ƽ����
        printf("3. Sort in descending order by score\n");// ���ɼ��ɸߵ����ų����α�
        printf("4. Sort in ascending order by score\n");//���ɼ��ɵ͵����ų����α�
        printf("5. Sort in ascending order by student's ID\n");//��ѧ����С�����ų��ɼ���
        printf("6��Search by student's ID\n");//��ѧ�Ų�ѯѧ���������俼�Գɼ�
        printf("7��Statistic analysis\n");// �����㣨90��100�֣������ã�80��89�֣����еȣ�70��79�֣�������60һ69�֣���������(0��59��)5�����ͳ��ÿ�����������Լ���ռ�İٷֱ�
        printf("8��List record\n");//���ÿ��ѧ����ѧ�š����Գɼ�
        printf("9��Exit\n");//�˳�����
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
