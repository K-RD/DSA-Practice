#include <stdio.h>
#include <unistd.h> // Include this header for fork()

int main() {
	if (fork() || fork()) {
		fork();
	}
	printf("hello\n"); // Add a newline for better output formatting
	return 0;
}