#@copyright : kareem 

CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -gdwarf-2 -g
INCS=-I .
LIBS=
SRC= $(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=Pressure_Controller

all: $(Project_name).bin
	@echo "Build is done"

%.o: %.c
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@
	
#startup.o: startup.s
#	$(CC)as.exe $(CFLAGS) $< -o $@	
	
$(Project_name).elf: $(OBJ) $(AsOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) $(AsOBJ) -o $@ -Map=map_file.map
	cp $(Project_name).elf $(Project_name).axf
	
$(Project_name).bin: $(Project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
$(Project_name).hex: $(Project_name).elf
	$(CC)objcopy.exe -O ihex $< $@
	
clean_all:
	rm *.o *.elf *.bin *.map *.axf *.hex
	
clean:
	rm *.elf *.bin
	
header:
	$(CC)objdump.exe -h $(Project_name).elf