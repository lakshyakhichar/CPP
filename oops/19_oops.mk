##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=19_oops
ConfigurationName      :=Debug
WorkspaceConfiguration :=Debug
WorkspacePath          :=C:/Users/laksh/OneDrive/workspaces/workspaces1
ProjectPath            :=C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops
IntermediateDirectory  :=../build-$(WorkspaceConfiguration)/19_oops
OutDir                 :=$(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=laksh
Date                   :=16/10/2023
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
Preprocessors          :=
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
CXXFLAGS :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
CFLAGS   :=  -gdwarf-2 -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IntermediateDirectory)/Untitle2.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/player.cpp$(ObjectSuffix) $(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IntermediateDirectory)/main3.cpp$(ObjectSuffix) $(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Account.cpp$(ObjectSuffix): Account.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/Account.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Account.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Account.cpp$(PreprocessSuffix): Account.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Account.cpp$(PreprocessSuffix) Account.cpp

$(IntermediateDirectory)/Untitle2.cpp$(ObjectSuffix): Untitle2.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/Untitle2.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Untitle2.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Untitle2.cpp$(PreprocessSuffix): Untitle2.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Untitle2.cpp$(PreprocessSuffix) Untitle2.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/player.cpp$(ObjectSuffix): player.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/player.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/player.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/player.cpp$(PreprocessSuffix): player.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/player.cpp$(PreprocessSuffix) player.cpp

$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix): Movie.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/Movie.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movie.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Movie.cpp$(PreprocessSuffix): Movie.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Movie.cpp$(PreprocessSuffix) Movie.cpp

$(IntermediateDirectory)/main3.cpp$(ObjectSuffix): main3.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/main3.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main3.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main3.cpp$(PreprocessSuffix): main3.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main3.cpp$(PreprocessSuffix) main3.cpp

$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix): Movies.cpp 
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/laksh/OneDrive/workspaces/workspaces1/19_oops/Movies.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Movies.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Movies.cpp$(PreprocessSuffix): Movies.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Movies.cpp$(PreprocessSuffix) Movies.cpp

##
## Clean
##
clean:
	$(RM) -r $(IntermediateDirectory)


