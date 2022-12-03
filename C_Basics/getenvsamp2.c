# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int main(int argc, char *argv[])
{
    char buf[255]={0};
    if(getenv("USER")!=NULL)
	strcpy(buf,getenv("USER"));

    printf("User is [%s]\n",buf);
    return 0;
}
