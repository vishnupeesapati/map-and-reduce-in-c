#include<stdio.h>
#include<string.h>
# define SIZE 2048
int main(int argc,char **argv)
{
char buf[SIZE];
while(fgets(buf,SIZE-1,stdin))
{
int len=strlen(buf);
if(buf[len-1]=='\n')
buf[len-1]=0;
char *out = strtok(buf," ");
while(out)
{
printf("%s\t1\n",out);
out=strtok(NULL," ");
}
}
}
