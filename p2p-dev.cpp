#include <iostream>
#include <stdio.h>
using namespace std;

void find(char *str, char src, char **res)
{
	int i = 0;
	while(*(str+i))
    {
        if(*(str+i) == src)
        {
            *res = str + i;
        }
        i++;
    }

}


int main()
{
    cout << "Hello world!" << endl;
    char *str = "abcdefge";
    char *p_orig = str;
    find(str,'f',&str);
    printf("%s %s",p_orig, str);
    return 0;
}
