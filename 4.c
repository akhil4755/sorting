

#include<stdio.h>
#include<string.h>
int main()
{
char str[100];
int table[4][2]={{1,0},{2,0},{3,0},{3,3}};
int s=0,i,l;
printf("\nenter the string\n");
scanf("%s",str);
l= strlen(str);
for(i=0;i<l;i++)
{
s=table[s][str[i] -'0'];
}
if(s==0 || s==1 || s==2)
printf("string is valid\n");
else 
printf("string is invalid\n");
}

/*Output:
enter the string
1001000010
string is invalid

enter the string
001001001
string is valid
*/
