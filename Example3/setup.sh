source /mnt/eups/linea_eups_setup.sh
setup openmpi 1.8.4+0
mpicc hello_world_with_mpi.c -o hello_world_with_mpi
