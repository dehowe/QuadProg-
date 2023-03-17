################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: "$<"'
	@echo 'Invoking: GNU Compiler'
	"D:/ti/ccsv7/tools/compiler/gcc-arm-none-eabi-6-2017-q1-update/bin/arm-none-eabi-g++.exe" -c -mcpu=cortex-a15 -mtune=cortex-a15 -marm -Dam5728 -Dcore0 -I"D:/workspace_v7/mpc_ys/mpc" -I"D:/ti/gcc-arm-none-eabi-6-2017-q1-update/arm-none-eabi/include" -g -gdwarf-3 -gstrict-dwarf -Wall -specs="nosys.specs" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" $(GEN_OPTS__FLAG) -o"$@" "$<"
	@echo 'Finished building: "$<"'
	@echo ' '


