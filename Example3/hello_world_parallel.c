#include <stdio.h> /* memset */
#include <mpi.h>
#include <unistd.h> /* close */

#define size 256


/*
*
name: hello_world_parlallel

version: 1.0
date: 2019-04-09

dependencies: openmpi 1.8.4+0

how to compile and run:

  mpicc -o hello_world_with_mpi hello_world_with_mpi.c
  mpirun -v -np 24 -host host1,host2 hello_world_with_mpi

*/ 

int main(int argc, char** argv) {
	// Initialize the MPI environment
	MPI_Init(NULL, NULL);

	// Get the number of processes
	int world_size;
	MPI_Comm_size(MPI_COMM_WORLD, &world_size);

	// Get the rank of the process
	int world_rank;
	MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

	// Get the name of the processor
	char processor_name[MPI_MAX_PROCESSOR_NAME];
	int name_len;
	MPI_Get_processor_name(processor_name, &name_len);

	char name[size];
	memset(name, 0, size);
	gethostname(name, size);

	// Print off a hello world message
	printf("Hello world from hostname %s, processor %s, rank %d"
	" out of %d processors\n", name,
	processor_name, world_rank, world_size);

	// Finalize the MPI environment.
	MPI_Finalize();
}
