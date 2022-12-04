#include <stdio.h>
#define WHITE "\033[0;37m"
#define RED "\033[0;31m"
#define CYAN "\033[0;36m"
#define PURPLE "\033[0;35m"
#define YELLOW "\033[0;33m"

int main()
{
    printf("%s Hello World\n",WHITE);
    printf("%s Hello World\n",RED);
    printf("%s Hello World\n",CYAN);
    printf("%s Hello World\n",PURPLE);
    printf("%s Hello World",YELLOW);


	return 0;
}