from pathlib import Path

directory = Path(r"C:\Users\Danny_Jay\Desktop\My Code\ClassStuff")

for i in directory.iterdir():
    if i.is_dir():
        print(i.name)
else:
    print("No folders in this directory")

for j in directory.iterdir():
    if j.is_file():
        print(f"{j.name} : {j.suffix}")