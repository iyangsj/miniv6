# Introdction
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.


# Building and running

You will need a RISC-V "newlib" tool chain from
https://github.com/riscv/riscv-gnu-toolchain, and qemu compiled for
riscv64-softmmu. 

Once they are installed, and in your shell search path, you can run:
```
make qemu
```

# Testing
```
python3 ./test-xv6.py test
```


# Acknowledgments

See [xv6](https://github.com/mit-pdos/xv6-riscv/blob/riscv/README)
