#include<stdio.h>
#include<stdlib.h>

void calc_fifo(int[],int,int);
void calc_lpu(int[],int,int);
void calc_optimal(int[],int,int);

int main()
{
    int n,ref_string[20],frames,ch,algo;
    printf("Enter Total Number of Processess :- \n");
    scanf("%d",&n);
    printf("Enter Frames :- \n");
    scanf("%d",&frames);
    printf("Enter Reference String :- \n");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&ref_string[i]);
    }
    while(1)
    {
        printf("Enter Choice :- \n Press 1 for choosing Algorithms.\nPress 2 for choosing Frames.\nPress 3 for Exit!\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter 1 for FIFO type.\n Press 2 for LPU type.\nPress 3 for Optimal type.\n");
                scanf("%d",&algo);
                switch(algo)
                {
                    case 1:
                        calc_fifo(ref_string,frames,n);
                        break;
                    case 2:
                        calc_lpu(ref_string,frames,n);
                        break;
                    case 3:
                        calc_optimal(ref_string,frames,n);
                        break;
                    default:
                        printf("Invalid Wrong!\n");
                        break;
                }
            break;
            case 2:
                printf("Enter new Frames entered :- \n");
                scanf("%d",&frames);
                break;
            case 3:
                exit(0);
                break;
            default:
                printf("Invalid Inputs!\n");
                break;
        }
    }
    return 0;
}

void calc_fifo(int ref_string[],int f,int n)
{
    int arr[f]={0},flag=0,total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<f;j++)
        {
            if (ref_string[i] == arr[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            for (int k=0;k<(f-1);k++)
            {
                arr[k] = arr[k+1];
            }
            arr[f-1] = ref_string[i];
            for(int k=0;k<f;k++)
            {
                if (arr[k] == 0)
                    printf("- ");
                else
                    printf("%d ",arr[k]);
            }
            printf("\n");
            total+=1;
        }
    }
    printf("\nNumber of Page Faults are :- %d\n",total);
}
void calc_lpu(int ref_string[],int f,int n)
{
       int arr[f]={0},flag=0,total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<f;j++)
        {
            if (ref_string[i] == arr[j])
            {
                flag = 1;
                for(int l=0;l<(f-1);l++)
                {
                	arr[l] = arr[l+1];
				}
				arr[f-1] = ref_string[i];
            }
        }
        if (flag == 0)
        {
            for (int k=0;k<(f-1);k++)
            {
                arr[k] = arr[k+1];
            }
            arr[f-1] = ref_string[i];
            for(int k=0;k<f;k++)
            {
                if (arr[k] == 0)
                    printf("- ");
                else
                    printf("%d ",arr[k]);
            }
            printf("\n");
            total+=1;
        }
    }
    printf("\nNumber of Page Faults are :- %d\n",total);
}
void calc_optimal(int ref_string[],int f,int n)
{
    printf("BE updated soon!");
}
