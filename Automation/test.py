from pathlib import Path

user_entered_directory=input("Enter Your file directory:")
target_directory= Path(user_entered_directory)
folderNum=int(input("How many folders?:"))

for i in range(1,folderNum+1):
    folder_path=target_directory / f"Course_{i}"
    folder_path.mkdir(parents=True, exist_ok=True)

folder_path = target_directory / "Not.cpp"
folder_path.touch(exist_ok=True)

folderWord = "Folder" if folderNum==1 else "Folders"
print(f"{folderNum} {folderWord} has been created!")

