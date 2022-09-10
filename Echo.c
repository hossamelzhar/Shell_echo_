#include <unistd.h>
#include <string.h>

char buff[50];

int main()
{
	int RetVal = 0;
	for(;;)
	{
		write(1, "Echo System > ",14);
		RetVal = read(0, buff, 50);
		if(memcmp("exit", buff, 4) == 0)
		{
			write(1, "GoodBye :)\n",11);
                        break;
		}
		else
		{
			write(1, "You Said: ",11);
                        write(1, buff, RetVal);
		}
	}


	return 0;
}
