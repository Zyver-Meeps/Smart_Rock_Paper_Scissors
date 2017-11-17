# Smart Rock Paper Scissors

# A C++ game of Rock_Paper_Scissors that uses human psychology to beat you.

# If you are interested please run the code first! (Knowing how it works may corrupt the checking of the code).
# The inputs are "0" for "rock" , "1" for paper , "2" for scissors.

# SPOILERS DOWN ! 



If you search on google "how to win rock, paper, scissors" you may find some psychology tricks.

How does it work ?

When the "date.in" file is empty the computer_pick will be random (nothing special) and populates the file

Else , the pick will be based on the last result. Winners tend to keep the same peek. So ... if you win with rock the computer 
will use paper.

If it's a tie or you lose the computer will pick the next choice in this order : rock , paper , scissors( if rock was the last one , the computer will take paper)
