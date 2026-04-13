# Linear table: are sequences of elements, and is a one-dimensional array
# question 1: define a one dimensional array of students -> 0: 90, 1: 70, 2:50, 3:80, 4:60, 5:85 ; length = 6
# test one array

import sys

def main():
    scores = [90, 70, 50, 80, 60, 85]
    length = len(scores)
    
    for i in range(0, length):
        print(scores[i], ",", end="")

if __name__=="__main__":
    main()
    

# out-put: 90 ,70 ,50 ,80 ,60 ,85 ,