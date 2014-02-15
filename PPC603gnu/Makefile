# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
PRJ_ROOT_DIR := C:/WindRiver/workspace/FRC2014
WS_ROOT_DIR := C:/WindRiver/workspace



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = FRC2014/$(MODE_DIR)/FRC2014.out \
	 FRC2014_partialImage/$(MODE_DIR)/FRC2014_partialImage.o


#Rules

# FRC2014
ifeq ($(DEBUG_MODE),1)
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
FRC2014/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
FRC2014/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
FRC2014/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
FRC2014/$(MODE_DIR)/% : PROJECT_TYPE = DKM
FRC2014/$(MODE_DIR)/% : DEFINES = 
FRC2014/$(MODE_DIR)/% : EXPAND_DBG = 0
FRC2014/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
FRC2014/$(MODE_DIR)/% : CPU = PPC603
FRC2014/$(MODE_DIR)/% : TOOL_FAMILY = gnu
FRC2014/$(MODE_DIR)/% : TOOL = gnu
FRC2014/$(MODE_DIR)/% : TOOL_PATH = 
FRC2014/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
FRC2014/$(MODE_DIR)/% : LIBPATH = 
FRC2014/$(MODE_DIR)/% : LIBS = 
FRC2014/$(MODE_DIR)/% : OBJ_DIR := FRC2014/$(MODE_DIR)

FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.o : C:/WindRiver/workspace/FRC2014/Commands/AutonomousCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.o : C:/WindRiver/workspace/FRC2014/Commands/DriveForwardCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.o : C:/WindRiver/workspace/FRC2014/Commands/DriveTrainCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPassingCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPullCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPushCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederSolenoidDownCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederSolenoidIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/LauncherIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.o : C:/WindRiver/workspace/FRC2014/Commands/RegulateCompressorCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.o : C:/WindRiver/workspace/FRC2014/Commands/ResetLauncherCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.o : C:/WindRiver/workspace/FRC2014/Commands/TriggerLauncherCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/OI.o : C:/WindRiver/workspace/FRC2014/OI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Robot.o : C:/WindRiver/workspace/FRC2014/Robot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/RobotMap.o : C:/WindRiver/workspace/FRC2014/RobotMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.o : C:/WindRiver/workspace/FRC2014/Subsystems/DriveTrain.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.o : C:/WindRiver/workspace/FRC2014/Subsystems/Feeder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.o : C:/WindRiver/workspace/FRC2014/Subsystems/FeederSolenoid.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.o : C:/WindRiver/workspace/FRC2014/Subsystems/Launcher.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.o : C:/WindRiver/workspace/FRC2014/Subsystems/Pneumatic.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_FRC2014 = FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/OI.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Robot.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/RobotMap.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.o \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.o

FRC2014/$(MODE_DIR)/FRC2014.out : $(OBJECTS_FRC2014)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_FRC2014) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_FRC2014) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

FRC2014/$(MODE_DIR)/FRC2014_compile_file : $(FILE) ;

_clean :: FRC2014/$(MODE_DIR)/FRC2014_clean

FRC2014/$(MODE_DIR)/FRC2014_clean : 
	$(TRACE_FLAG)if [ -d "FRC2014" ]; then cd "FRC2014"; rm -rf $(MODE_DIR); fi


# FRC2014_partialImage
ifeq ($(DEBUG_MODE),1)
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
FRC2014_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
FRC2014_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
FRC2014_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
FRC2014_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
FRC2014_partialImage/$(MODE_DIR)/% : DEFINES = 
FRC2014_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
FRC2014_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
FRC2014_partialImage/$(MODE_DIR)/% : CPU = PPC603
FRC2014_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
FRC2014_partialImage/$(MODE_DIR)/% : TOOL = gnu
FRC2014_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
FRC2014_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
FRC2014_partialImage/$(MODE_DIR)/% : LIBPATH = 
FRC2014_partialImage/$(MODE_DIR)/% : LIBS = 
FRC2014_partialImage/$(MODE_DIR)/% : OBJ_DIR := FRC2014_partialImage/$(MODE_DIR)

FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.o : C:/WindRiver/workspace/FRC2014/Commands/AutonomousCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.o : C:/WindRiver/workspace/FRC2014/Commands/DriveForwardCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.o : C:/WindRiver/workspace/FRC2014/Commands/DriveTrainCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPassingCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPullCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederPushCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederSolenoidDownCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/FeederSolenoidIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.o : C:/WindRiver/workspace/FRC2014/Commands/LauncherIdleCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.o : C:/WindRiver/workspace/FRC2014/Commands/RegulateCompressorCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.o : C:/WindRiver/workspace/FRC2014/Commands/ResetLauncherCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.o : C:/WindRiver/workspace/FRC2014/Commands/TriggerLauncherCommand.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/OI.o : C:/WindRiver/workspace/FRC2014/OI.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Robot.o : C:/WindRiver/workspace/FRC2014/Robot.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/RobotMap.o : C:/WindRiver/workspace/FRC2014/RobotMap.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.o : C:/WindRiver/workspace/FRC2014/Subsystems/DriveTrain.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.o : C:/WindRiver/workspace/FRC2014/Subsystems/Feeder.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.o : C:/WindRiver/workspace/FRC2014/Subsystems/FeederSolenoid.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.o : C:/WindRiver/workspace/FRC2014/Subsystems/Launcher.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.o : C:/WindRiver/workspace/FRC2014/Subsystems/Pneumatic.cpp
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_FRC2014_partialImage = FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/OI.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Robot.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/RobotMap.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.o \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.o

FRC2014_partialImage/$(MODE_DIR)/FRC2014_partialImage.o : $(OBJECTS_FRC2014_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_FRC2014_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

FRC2014_partialImage/$(MODE_DIR)/FRC2014_partialImage_compile_file : $(FILE) ;

_clean :: FRC2014_partialImage/$(MODE_DIR)/FRC2014_partialImage_clean

FRC2014_partialImage/$(MODE_DIR)/FRC2014_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "FRC2014_partialImage" ]; then cd "FRC2014_partialImage"; rm -rf $(MODE_DIR); fi

DEP_FILES := FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.d FRC2014/$(MODE_DIR)/Objects/FRC2014/OI.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Robot.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/RobotMap.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.d \
	 FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.d FRC2014/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/AutonomousCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveForwardCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/DriveTrainCommand.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederIdleCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPassingCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPullCommand.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederPushCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidDownCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/FeederSolenoidIdleCommand.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/LauncherIdleCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/RegulateCompressorCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/ResetLauncherCommand.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Commands/TriggerLauncherCommand.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/OI.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Robot.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/RobotMap.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/DriveTrain.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Feeder.d \
	 FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/FeederSolenoid.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Launcher.d FRC2014_partialImage/$(MODE_DIR)/Objects/FRC2014/Subsystems/Pneumatic.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
