/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[100],temp=1,c='*';
    int i,j,k=0,n;
    printf("Enter the sentence:");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(!(s[i]==c))
        {
            for(j=i+1;s[j];j++)
            {
                if(s[i]==s[j])
                s[j]=c;
            }
        }
    }
    for(i=0;s[i];i++)
    {
        s[i]=s[i+k];
        if(s[i]==c)
        {
            k++;
            i--;
        }
    }
    printf("expected output:");
    printf("%s",s);
    return 0;
}
     
