#Ask for user's input

read -p "Enter your name
" name
read -p "Enter your cohort
" cohort
read -p "Enter your score
" score

#function to check if input is a valid integer
 is_numeric()
 {
 local input=$1

 if [[ $input =~ ^[0-9]+$ ]];
then
return 0
 else
 return 1
 fi
 }

#Analyze score based on the function
if  is_numeric "$score";
then

# Analyze score and give feedback
if ((score > 80||score== 80));


then

echo "Congrats $name of cohort $cohort, your score is $score and you are in"

elif ((score > 80||score < 80));

#else

then 

echo "sorry $name of cohort, your score is $score and you are out"

fi

else 

echo "Please, enter a valid figure between 0 to 100"

fi
