##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=27_inheritance1
ConfigurationName      :=Release
WorkspaceConfiguration :=Release
WorkspacePath          :=C:/Users/laksh/OneDrive/workspaces/workspaces1
ProjectPath            :=C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/27_inheritance1
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=laksh
Date                   :=10/11/2023
CodeLitePath           :="C:/Program Files/CodeLite"
MakeDirCommand         :=mkdir
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputDirectory        :=C:/Users/laksh/OneDrive/workspaces/workspaces1/build-$(WorkspaceConfiguration)/bin
OutputFile             :=..\build-$(WorkspaceConfiguration)\bin\$(ProjectName).exe
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :=$(IntermediateDirectory)/ObjectsList.txt
PCHCompileFlags        :=
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overridden using an environment variable
##
AR       := C:/mingw64/bin/ar.exe -r
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Untitled.cpp$(ObjectSuffix) $(IntermediateDirectory)/Saving_Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Untitled1.cpp$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: MakeIntermediateDirs $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"
	@if not exist "$(OutputDirectory)" $(MakeDirCommand) "$(OutputDirectory)"

$(IntermediateDirectory)/.d:
	@if not exist "$(IntermediateDirectory)" $(MakeDirCommand) "$(IntermediateDirectory)"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/Untitled.cpp$(ObjectSuffix): Untitled.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1/Untitled.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Untitled.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Untitled.cpp$(PreprocessSuffix): Untitled.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Untitled.cpp$(PreprocessSuffix) Untitled.cpp

$(IntermediateDirectory)/Saving_Account.cpp$(ObjectSuffix): Saving_Account.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1/Saving_Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Saving_Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Saving_Account.cpp$(PreprocessSuffix): Saving_Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Saving_Account.cpp$(PreprocessSuffix) Saving_Account.cpp

$(IntermediateDirectory)/Untitled1.cpp$(ObjectSuffix): Untitled1.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/27_inheritance1/Untitled1.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Untitled1.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Untitled1.cpp$(PreprocessSuffix): Untitled1.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Untitled1.cpp$(PreprocessSuffix) Untitled1.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


