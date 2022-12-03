# include <stdio.h>

int main(int argc, char *argv[])
{
    char *arr[] = {"One","Two","Three",NULL};

    int i;
    for(i=0;arr[i];i++)
	printf("%s\n",arr[i]);
    return 0;
}
