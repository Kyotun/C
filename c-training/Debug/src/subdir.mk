################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Aufgabe\ 3.P.c.c 

C_DEPS += \
./src/Aufgabe\ 3.P.c.d 

OBJS += \
./src/Aufgabe\ 3.P.c.o 


# Each subdirectory must supply rules for building sources it contributes
src/Aufgabe\ 3.P.c.o: ../src/Aufgabe\ 3.P.c.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Aufgabe 3.P.c.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Aufgabe\ 3.P.c.d ./src/Aufgabe\ 3.P.c.o

.PHONY: clean-src

