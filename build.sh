aarch64-none-linux-gnu-gcc -o dhrystone.elf -static -O3 -fno-inline-functions -fno-inline -DGCC -falign-functions=16 -falign-jumps=8 -falign-loops=8 -fomit-frame-pointer -funroll-loops -g dhry_1.c dhry_2.c
aarch64-none-linux-gnu-objdump --disassemble-all dhrystone.elf > dhrystone.dump
