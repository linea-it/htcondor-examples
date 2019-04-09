source /mnt/eups/linea_eups_setup.sh
setup openmpi 1.8.4+0
mpicc hello_world_parallel.c -o hello_world_parallel
