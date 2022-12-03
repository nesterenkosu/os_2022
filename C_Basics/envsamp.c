# include <stdio.h>

int main(int argc, char *argv[],char *envp[])
{
    printf("Переменные окружения:\n");
    int i;
    for(i=0;envp[i];i++)
	printf("%s\n",envp[i]);
    return 0;
}
