#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int a[100],n,i;
void create();
void display();
void search();
void sort();
void insert();
void delet();
void reverse();

void main()
{
    int op;
    //clrscr();
    printf("ARRAY IMPLEMENTATION OF ORDER LIST");
    printf("\n***************************************");
    printf ("\n\t1.CREATE\n\t2.DISPLAY\n\t3.SEARCH\n\t4.SORT\n\t5.INSERT\n\t6.DELETE\n\t7.REVERSE\n\t8.EXIT");
    printf("\n ENTER THE NUMBER OF ARRAY ELEMENTS:");
    scanf("%d",&n);

    do
    {
        printf("\n ENTER THE OPTION:");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                sort();
                break;
            case 5:
                insert();
                break;
            case 6:
                delet();
                break;
            case 7:
                reverse();
                break;
            case 8:
                exit(0);
            default:
            {
                printf("\n INVALID OUTPUT");
                break;
            }
        }
    }while(op!=8);
    getch();
}

void create()
{
    printf("\n ENTER THE ARRAY ELEMENTS:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}

void display()
{
    printf("\n THE ARRAY ELEMENTS ARE:");
    for(i=0;i<n;i++)
        printf("\n a[%d]=%d",i,a[i]);
}

void search()
{
    int m;
    printf("\n PLEASE ENTER THE ELEMENT TO SEARCH:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("THE ELEMENT FOUND AT POSITION:%d",i);
            break;
        }
    }
    if(i==n)
        printf("\n ELEMENT IS NOT FOUND");
}

void sort()
{
    int j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("\n THE SORTED ARRAY IS: ");
    for(i=0;i<n;i++)
        printf("\n\ta[%d]=%d",i,a[i]);
}

void insert()
{
    int pos,m;
    printf("\n ENTER THE POSITION TO INSERT AN ELEMENT:");
    scanf("%d",&pos);
    printf("\n ENTER THE ELEMENT TO INSERT:");
    scanf("%d",&m);
    for(i=n-1;i>=pos-1;i--)
        a[i+1]=a[i];
    a[pos-1]=m;
    n++;
}

void delet()
{
    int m,pos;
    printf("\n ENTER THE ELEMENT TO BE DELETED:");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            pos=i;
            break;
        }
    }
    if(i==n)
        pos=-1;
    for(i=pos;i<n-1;i++)
        a[i]=a[i+1];
    n--;
}

void reverse()
{
    int i;
    printf("\n THE LIST IN REVERSE ORDER IS:");
    for(i=n-1;i>=0;i--)
    {
        printf("\n%d",a[i]);
    }
}
