call "C:\Program Files (x86)\Microsoft Visual Studio 8\VC\vcvarsall.bat"
call vcvars_vs8_x86_arm.bat
cd pthreads.2
nmake clean VC
cd ..
