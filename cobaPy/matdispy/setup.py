import sys
from cx_Freeze import setup, Executable
 
# Dependencies adalah otomatis terdeteksi, tapi mungkin lebih baik menambahkan daftar package
my_options = {"packages": ["itertools"], "excludes": ["tkinter"]}
 
# base="Win32GUI" Khusus digunakan untuk Windows GUI app
base = None
if sys.platform == "win32":
    base = "Win32GUI"
setup(
    name = "NamaAplikasi",
    version = "2.0",
    description = "Ini Adalah Deskripsi Aplikasi",
    options = {"build_exe": my_options},
    executables = [Executable("file_aplikasi.py", base=base)]
)