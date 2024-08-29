################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.c \
../STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.c \
../STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.c \
../STM32_F103C6_Drivers/STM32_F103C6_USART_driver.c \
../STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.c 

OBJS += \
./STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.o \
./STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.o \
./STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.o \
./STM32_F103C6_Drivers/STM32_F103C6_USART_driver.o \
./STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.o 

C_DEPS += \
./STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.d \
./STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.d \
./STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.d \
./STM32_F103C6_Drivers/STM32_F103C6_USART_driver.d \
./STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.o: ../STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/CMSIS_V5" -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/STM32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/STM32_F103C6_EXTI_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.o: ../STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/CMSIS_V5" -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/STM32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/STM32_F103C6_RCC_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.o: ../STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/CMSIS_V5" -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/STM32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/STM32_F103C6_SPI_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
STM32_F103C6_Drivers/STM32_F103C6_USART_driver.o: ../STM32_F103C6_Drivers/STM32_F103C6_USART_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/CMSIS_V5" -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/STM32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/STM32_F103C6_USART_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.o: ../STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.c
	arm-none-eabi-gcc -gdwarf-2 "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DSTM32 -DSTM32F1 -DSTM32F103C6Tx -DDEBUG -c -I../Inc -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/CMSIS_V5" -I"E:/Master Embedded Diploma/Unit7_GPIO/GPIO_Driver/Drivers/STM32_F103C6_Drivers/inc" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"STM32_F103C6_Drivers/STM32_F103C6_gpio_driver.d" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

