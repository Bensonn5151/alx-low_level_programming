#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 277;
    srand(time(NULL));
    while (1)
    {
	    int char1 = rand() % 26 + 'a';
	    int char2 = rand() % 26 + 'a';
	    int char3 = rand() % 26 + 'a';
	    int char4 = sum - (char1 + char2 + char3);
	    if (char4 >= 'a' && char4 <= 'z') {
		    printf("Random valid password: %c%c%c%c\n", char1, char2, char3, char4);
		    break;
	    }
    }
    return 0;
}

