import random

cpu = 0
usr = 0

while (1):
    # prints title
    print("Rock Paper Scissors")
    print("cpu " + str(cpu) + " | usr " + str(usr))
    
    # User Plays
    userin = ""
    userchoice = 0
    print("User chooses ", end="")
    input(userin)
    userin = userin.lower()
    if (userin == "rock"):
        userchoice = 0
    elif (userin == "paper"):
        userchoice = 1
    elif (userin == "scissor"):
        userchoice = 2
    
    # Computer Plays
    cpurand = random.randint(0, 2)
    if (cpurand == 0):
        print('Computer choose rock')
    elif (cpurand == 1):
        print('Computer choose paper')
    elif (cpurand == 2):
        print ('Computer choose scissors')
        
    # Scoring
    if (userchoice == cpurand):
        print('Draw')
    if ((userchoice == 0 and cpurand == 2) or (userchoice == 1 and cpurand == 0) or (userchoice == 2 and cpurand == 1)):
        print('User Wins!')
        usr += 1
    if ((cpurand == 0 and userchoice == 2) or (cpurand == 1 and userchoice == 0) or (cpurand == 2 and userchoice == 1)):
        print('Cpu Wins! :(')
        cpu += 1
