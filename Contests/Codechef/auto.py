import os
from datetime import datetime

month = datetime.strptime(str(datetime.today().month), "%m").strftime("%B")

contest = month + "_" + input("Enter contest name: ")
os.system("mkdir " + contest)

problems = int(input("Enter the number of problems: "))
for problem in range(problems):
    print(" [Log] Creating file " + chr(ord('a') + problem) + ".cpp  and  " + chr(ord('a') + problem) + ".in ... ")
    os.system("cp template.cpp " + contest + "/" + chr(ord('a') + problem) + ".cpp")
    os.system("touch " + contest + "/" + chr(ord('a') + problem) + ".in")

print("Created " + str(problems*2) + " files!")





