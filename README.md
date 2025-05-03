# parallel-computing-cpp:

working on parallel computing.

- [tutorial](https://www.openmp.org/resources/tutorials-articles/)
- [documenation microsoft](https://learn.microsoft.com/en-us/cpp/parallel/parallel-programming-in-visual-cpp?view=msvc-170)
- [parallel computing](https://hpc.llnl.gov/documentation/tutorials/introduction-parallel-computing-tutorial)
- [llnl](https://hpc-tutorials.llnl.gov/openmp/)
- [book](https://theartofhpc.com/pcse/index.html)

- concurrency- doing multiple things at same time.
- i/o bottleneck- when computer spends more time waiting on various inputs and outputs
  then on processing the info.
- parallelism- two ore more actions simultaneously.

- 1 core: single thread, single process
- 2-8 core: multithread multiprocesing
- 9+ cores: distributed computing

- `g++ -fopenmp code2.c`
- mpi4py
- dask

- [CUDA c++ programming guide](https://docs.nvidia.com/cuda/cuda-c-programming-guide/index.html#)
- [GPU gems](https://developer.nvidia.com/gpugems/gpugems3/contributors) amazing book for applications of GPU's.

### Multiprocessing:

- via threading
  - subject to GIL
  - cPython interpreter is not thread-safe
- via multiprocessing
  - useful for parallel computation
