#@copyRight : Eng.kareem
CC=arm-none-eabi-
INCS=-I .
LIBS=
CFLAGS=-gdwarf-2 -mcpu=cortex-m3
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
AS=$(wildcard *.s)
AsOBJ=$(AS:.s=.o)
Project_name=lab2


all: $(Project_name).bin
	@echo "Build is done"

#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@

$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=map_file.map
	
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@

clean:
	rm *.elf *.bin
	
clean_all:
	rm *.o *.elf *.bin *.map
	
header:
	$(CC)objdump.exe -h $(Project_name).elf
	
debug:
	$(CC)gdb.exe $(Project_name).elf