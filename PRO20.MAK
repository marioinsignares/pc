# Microsoft Developer Studio Generated NMAKE File, Format Version 4.10
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

!IF "$(CFG)" == ""
CFG=- Win32 Debug
!MESSAGE No configuration specified.  Defaulting to - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "- Win32 Release" && "$(CFG)" !=\
 "- Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE on this makefile
!MESSAGE by defining the macro CFG on the command line.  For example:
!MESSAGE 
!MESSAGE NMAKE /f "$(PROG).MAK" CFG="- Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "- Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "- Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 
################################################################################
# Begin Project
# PROP Target_Last_Scanned "- Win32 Debug"
CPP=cl.exe
RSC=rc.exe

libreria="D:\archivos de Programa\Devstudio\VC\LIB"

!IF  "$(CFG)" == "- Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "WinRel"
# PROP BASE Intermediate_Dir "WinRel"
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "WinRel"
# PROP Intermediate_Dir "WinRel"
OUTDIR=.\WinRel
INTDIR=.\WinRel

ALL : "$(OUTDIR)\$(PROG).exe"

CLEAN : 
        -@erase "$(INTDIR)\$(PROG).obj"
        -@erase "$(OUTDIR)\$(PROG).exe"
        -@erase ".\$(PROG).c"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /FR /YX /c
# ADD CPP /nologo /MD /W3 /GX /O2 /I "..\..\include" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /YX /c
# SUBTRACT CPP /Fr
# CPP_PROJ=/nologo /MD /W3 /GX /O2 /I "..\..\include" /D "WIN32" /D "NDEBUG" /D\
# "_CONSOLE" /Fp"$(INTDIR)/$(PROG).pch" /YX /Fo"$(INTDIR)/" /c 

CPP_PROJ=/nologo /MD /W3 /GX /O2 /D "WIN32" /I "D:\ARCHIV~1\DEVSTUDIO\VC\INCLUDE" /I "E:\ORANT\PRO22\C\INCLUDE" /D "NDEBUG" /D\
 "_CONSOLE" /Fp"$(INTDIR)/$(PROG).pch" /YX /Fo"$(INTDIR)/" /c 
CPP_OBJS=.\WinRel/
CPP_SBRS=.\.
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
BSC32_FLAGS=/nologo /o"$(OUTDIR)/$(PROG).bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /machine:I386

# LINK32_FLAGS=/libpath=$(libreria) kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
# advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo \
# /subsystem:console /incremental:no /pdb:"$(OUTDIR)/$(PROG).pdb" /machine:I386\
# /out:"$(OUTDIR)/$(PROG).exe" 
#       "..\objetos\impresor.obj" \

LINK32_FLAGS= $(libreria)\kernel32.lib \
  $(libreria)\user32.lib \
  $(libreria)\uuid.lib $(libreria)\msvcrt.lib \
  $(libreria)\oldnames.lib \
  $(libreria)\libcd.lib /nologo \
 /subsystem:console /nodefaultlib /incremental:no /pdb:"$(OUTDIR)/$(PROG).pdb" /machine:I386\
 /out:"$(OUTDIR)/$(PROG).exe" 
LINK32_OBJS= \
	"$(INTDIR)\$(PROG).obj" \
        "..\objetos\editar.obj" \
        "..\objetos\rutmtm.obj" \
        "E:\ORANT\Pro22\lib\MSVC\SQLLIB18.LIB"

"$(OUTDIR)\$(PROG).exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "- Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "WinDebug"
# PROP BASE Intermediate_Dir "WinDebug"
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "WinDebug"
# PROP Intermediate_Dir "WinDebug"
OUTDIR=.\WinDebug
INTDIR=.\WinDebug

ALL : "$(OUTDIR)\$(PROG).exe"

CLEAN : 
	-@erase "$(INTDIR)\$(PROG).obj"
	-@erase "$(INTDIR)\vc40.idb"
	-@erase "$(INTDIR)\vc40.pdb"
	-@erase "$(OUTDIR)\$(PROG).exe"
	-@erase "$(OUTDIR)\$(PROG).ilk"
	-@erase "$(OUTDIR)\$(PROG).pdb"
	-@erase ".\$(PROG).c"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

# ADD BASE CPP /nologo /W3 /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /FR /YX /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /Zi /Od /I "..\..\include" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /YX /c
# SUBTRACT CPP /Fr
# CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /I "..\..\include" /D "WIN32" /D\
#  "_DEBUG" /D "_CONSOLE" /Fp"$(INTDIR)/$(PROG).pch" /YX /Fo"$(INTDIR)/"\
#  /Fd"$(INTDIR)/" /c 

CPP_PROJ=/nologo /MDd /W3 /Gm /GX /Zi /Od /I "D:\ARCHIV~1\DEVSTUDIO\VC\INCLUDE" /I "E:\ORANT\PRO22\C\INCLUDE" /D "WIN32" /D\
 "_DEBUG" /D "_CONSOLE" /Fp"$(INTDIR)/$(PROG).pch" /YX /Fo"$(INTDIR)/"\
 /Fd"$(INTDIR)/" /c 
CPP_OBJS=.\WinDebug/
CPP_SBRS=.\.
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo /nodefaultlib:libc
BSC32_FLAGS=/nologo /o"$(OUTDIR)/$(PROG).bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo /subsystem:console /debug /machine:I386

# LINK32_FLAGS=/libpath=$(libreria) kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
# advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib /nologo   \
# /subsystem:console /incremental:yes /pdb:"$(OUTDIR)/$(PROG).pdb" /debug\
# /machine:I386 /out:"$(OUTDIR)/$(PROG).exe" 
#       "..\objetos\impresor.obj" \

LINK32_FLAGS=/libpath=$(libreria) kernel32.lib user32.lib \
  uuid.lib /nologo   \
 /subsystem:console /incremental:yes /pdb:"$(OUTDIR)/$(PROG).pdb" /debug\
 /machine:I386 /out:"$(OUTDIR)/$(PROG).exe" 

LINK32_OBJS= \
       "$(INTDIR)\$(PROG).obj" \
        "..\objetos\editar.obj" \
        "..\objetos\rutmtm.obj" \
        "E:\ORANT\Pro22\lib\MSVC\SQLLIB18.LIB"

"$(OUTDIR)\$(PROG).exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_OBJS)}.obj:
   $(CPP) $(CPP_PROJ) $<  

.c{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cpp{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

.cxx{$(CPP_SBRS)}.sbr:
   $(CPP) $(CPP_PROJ) $<  

################################################################################
# Begin Target

# Name "- Win32 Release"
# Name "- Win32 Debug"

!IF  "$(CFG)" == "$(PROG) - Win32 Release"

!ELSEIF  "$(CFG)" == "- Win32 Debug"

!ENDIF 

################################################################################
# Begin Source File

SOURCE=.\$(PROG).PC

!IF  "$(CFG)" == "- Win32 Release"

# Begin Custom Build
ProjDir=.
InputPath=.\$(PROG).PC
InputName=$(PROG)

"$(ProjDir)\$(InputName).c" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   proc dbms=v7 varchar=yes maxopencursors=100 sqlcheck=full userid=laboratorio/labora@ibmx $(ProjDir)\$(InputName).pc include=$(ProjDir)\..\..\include

# End Custom Build

!ELSEIF  "$(CFG)" == "- Win32 Debug"

# Begin Custom Build
ProjDir=.
InputPath=.\$(PROG).PC
InputName=$(PROG)

"$(ProjDir)\$(InputName).c" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   proc $(ProjDir)\$(InputName).pc include=$(ProjDir)\..\..\include

# End Custom Build

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=..\..\..\lib\MSVC\SQLLIB18.LIB

!IF  "$(CFG)" == "- Win32 Release"

!ELSEIF  "$(CFG)" == "- Win32 Debug"

!ENDIF 

# End Source File
################################################################################
# Begin Source File

SOURCE=.\$(PROG).c
DEP_CPP_SAMPL=\
        "E:\ORANT\Pro22\C\include\oraca.h"\
        "E:\ORANT\Pro22\C\include\sqlda.h"\
        "E:\ORANT\Pro22\C\include\sqlproto.h"\
	

"$(INTDIR)\$(PROG).obj" : $(SOURCE) $(DEP_CPP_SAMPL) "$(INTDIR)"


# End Source File
# End Target
# End Project
################################################################################
