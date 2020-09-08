    #include<stdio.h>
    #include<stdlib.h>

int main()
{
char x = 32;
int i , m =01;
for (i=1;i<=5;i++)
{
    printf("%c", x|m);
    //m= m<<1;
}
  return 0;
}

