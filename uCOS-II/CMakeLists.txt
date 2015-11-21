cmake_minimum_required(VERSION 3.3)
project(uCOS_II)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    Ports/ARM-Cortex-M3/Generic/ARM/os_cpu.h
    Ports/ARM-Cortex-M3/Generic/ARM/os_cpu_c.c
    Ports/ARM-Cortex-M3/Generic/ARM/os_dbg.c
    Ports/ARM-Cortex-M3/Generic/IAR/os_cpu.h
    Ports/ARM-Cortex-M3/Generic/IAR/os_cpu_c.c
    Ports/ARM-Cortex-M3/Generic/IAR/os_dbg.c
    Ports/ARM-Cortex-M4/Generic/ARM/os_cpu.h
    Ports/ARM-Cortex-M4/Generic/ARM/os_cpu_c.c
    Ports/ARM-Cortex-M4/Generic/ARM/os_dbg.c
    Ports/ARM-Cortex-M4/Generic/IAR/os_cpu.h
    Ports/ARM-Cortex-M4/Generic/IAR/os_cpu_c.c
    Ports/ARM-Cortex-M4/Generic/IAR/os_dbg.c
    Source/app_cfg.h
    Source/os.h
    Source/os_cfg.h
    Source/os_core.c
    Source/os_flag.c
    Source/os_hooks.c
    Source/os_mbox.c
    Source/os_mem.c
    Source/os_mutex.c
    Source/os_q.c
    Source/os_sem.c
    Source/os_task.c
    Source/os_time.c
    Source/os_tmr.c
    Source/ucos_ii.h)

add_executable(uCOS_II ${SOURCE_FILES})