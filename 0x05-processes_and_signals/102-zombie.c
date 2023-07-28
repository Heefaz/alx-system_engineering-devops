#include <stdio.h>
#include <unistd.h>

int main(void)
{
	    int i;
	        pid_t pid;

		    for (i = 0; i < 5; i++)
			        {
					        pid = fork();
						        if (pid == 0)
								        {
										            printf("Zombie process created, PID: %d\n", getpid());
											                exit(0);
													        }
							    }

		        printf("Parent process is done creating zombies.\n");

			    infinite_while();

			        return (0);
}

