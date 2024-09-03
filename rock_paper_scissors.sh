usr=0
cpu=0
#
declare -a options
options[0]=rock
options[1]=paper
options[2]=scissors
#
while [ 0 -eq 0 ]
do
    echo -------------------
    echo rock paper scissors
    echo "usr $usr | cpu $cpu"
    userin=rock
    read -p 'user chooses: ' userin
    userchoice=0
    #
    # userin to numeric choice
    if [ "$userin" == 'rock' ]
    then
        userchoice=0
    elif [ "$userin" == 'paper' ]
    then
        userchoice=1
    elif [ "$userin" == 'scissors' ]
    then
        userchoice=2
    else
        echo 'invalid input'
        continue
    fi
    #
    # computer choice
    cpuchoice=$(date +%N)
    cpuchoice=$[ ${cpuchoice:8} % 3 ]
    echo "cpu choose ${options[$cpuchoice]}"
    #
    # scoring
    if [ $cpuchoice == $userchoice ]
    then
        echo 'game is draw'
    #
    # user chooses rock
    elif [ $userchoice -eq 0 ]
    then
        if [ $cpuchoice -eq 1 ] # cpu chooses paper
        then
            echo 'cpu won'
            cpu=$[ $cpu + 1 ]
        else                 # cpu chooses scissors
            echo 'user won'
            usr=$[ $usr + 1 ]
        fi
    #    
    # user chooses paper
    elif [ $userchoice -eq 1 ] 
    then
        if [ $cpuchoice -eq 2 ] # cpu chooses scissors
        then
            echo 'cpu won'
            cpu=$[ $cpu + 1 ]
        else                   # cpu chooses rock
            echo 'usr won'
            usr=$[ $usr + 1 ]
        fi
    #    
    # user chooses scissors
    elif [ $userchoice -eq 2 ] 
    then
        if [ $cpuchoice -eq 0 ] # cpu chooses rock
        then
            echo 'cpu won'
            cpu=$[ $cpu + 1 ]
        else                   # cpu chooses paper
            echo 'usr won'
            usr=$[ $usr + 1 ]
        fi        
    #    
    fi
done
