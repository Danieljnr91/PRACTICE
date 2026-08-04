from pathlib import Path

userDirectory = input("Enter a path directory:")
targetPath = Path(userDirectory)

loopControl = False
while not loopControl:
    print(
        "1.Create a Folder\n"
        "2.Create a file\n"
        "3.Change file directory\n"
        "4.Exit"
    )
    choice=int(input("Choose:"))

    if choice == 1:
        folderNum=int(input("How many folders?:"))
        folderWord = "folder" if folderNum==1 else "folders"
        print("-------------------------------------------------------------")
        print(
            "1.Do You wish for your folders to have the same name(eg. newfolder 1,newfolder 2) \n"
            "2.Or You wish to name them your self?:\n"
            
        )
        print("-------------------------------------------------------------")
        namingStyle=int(input("choose:"))
        if namingStyle == 1:
            name=input("Name of the folder:")
            for i in range(1,folderNum+1):
                creationName = name if folderNum == 1 else f"{name}_{i}"
                folderPath = targetPath / creationName
                folderPath.mkdir(parents=True, exist_ok=True)
            print("-------------------------------------------------------------")
            print(f"{folderNum} {folderWord} has been added in your directory.")
            print("-------------------------------------------------------------")
        else:
            names = input("Enter your folder names seperated by a comma:\n").split(",")
            
            if len(names) != folderNum:
                print("-------------------------------------------------------------")
                print("Number of folders must match number of names!")
                print("-------------------------------------------------------------")
            else:
                for i in range(0,folderNum):
                    folderPath = targetPath / f"{names[i].strip()}"
                    folderPath.mkdir(parents=True, exist_ok=True)
                print("-------------------------------------------------------------")
                print("Folders successfully Created!")
                print("-------------------------------------------------------------")
    
    elif choice == 3:
        userDirectory = input("Enter a path directory:")
        targetPath = Path(userDirectory)

    elif choice == 4:
        print("-------------------------------------------------------------")
        print("Session Ended.")
        print("-------------------------------------------------------------")
        loopControl = True            


