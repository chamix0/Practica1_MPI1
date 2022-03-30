#include <mpi.h>
#include <stdio.h>
int main(int argc, char** argv) {
	// Initialize the MPI environment
	MPI_Init(NULL, NULL);
	// Print the message
	printf("Hello World!”\n");
	// Finalize the MPI environment.
	MPI_Finalize();
}