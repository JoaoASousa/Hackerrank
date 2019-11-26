#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'gradingStudents' function below.
#
# The function is expected to return an INTEGER_ARRAY.
# The function accepts INTEGER_ARRAY grades as parameter.
#

def gradingStudents(grades):
    # Write your code here
    new_grades = []
    for g in grades:
        if (g < 38):
            new_grades.append(g)
        else:
            left_over = g % 5
            if (left_over == 2 or left_over == 1):
                pass
            elif (left_over >= 3):
                g += (5-left_over)
            else:
                g -= left_over
            new_grades.append(g)
    return new_grades

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    grades_count = int(input().strip())

    grades = []

    for _ in range(grades_count):
        grades_item = int(input().strip())
        grades.append(grades_item)

    result = gradingStudents(grades)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
