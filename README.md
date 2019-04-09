## htcondor-examples
Tutorial with HTCondor examples for CAPDA environment

## How to submit jobs to the CAPDA cluster

### Example 1 - script python

This simple script open .fits files and count the number of objects(lines). At the of the execution it shows the total # of files and objects.

**How to run?**

```sh
source /mnt/eups/linea_setup.sh
setup pyfits 3.4+0
cd <fits_dir>
python count_objects_into_fits.py
```


### Example 2 - calculapi

A simple app to calculate the PI number.

**How to run?**

```sh
gcc calculapi.c -o calculapi
./calculapi <int>
```

### Example 3 - hello world with mpi

This app prints a hello world message using mpi to paralelize the execution through various machines.


```sh
mpicc -o hello_world_with_mpi hello_world_with_mpi.c
mpirun -v -np 24 -host host1,host2 hello_world_with_mp
```
