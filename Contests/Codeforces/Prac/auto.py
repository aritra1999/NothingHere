import os

problem_code = input("Enter Problem Code:")

os.system("cp template.cpp " + str(problem_code) + ".cpp")
os.system("touch " + str(problem_code) + ".in")
