#include <stdio.h>
#include<string.h>
int main()
{
  int t,i,n,c;
  char s[100001];
  scanf("%d",&t);
  while(t--)
  {
    c=0;
    scanf("%s",s);
    n=strlen(s);
    for(i=1;i<n;i++)
    {
      if(s[i-1]=='0' && s[i]=='1')
        c++;
    }
    printf("%d\n",c);
  }

 return 0;
}