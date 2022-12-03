# include <stdio.h>

int main(int argc, char *argv[])
{
    printf("User is [%s]\n",getenv("USER"));
    return 0;
}
