#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

char ch[100];int arr[10]={0};
scanf("%s",ch);
int i=0;
while(ch[i]!='\0')
{
    if(ch[i]>='0' && ch[i]<='9')
    {
        arr[ch[i]-'0']++;
    }
    i++;
}
for(int i=0;i<10;i++)
{
    printf("%d ",arr[i]);
}
    return 0;
}
