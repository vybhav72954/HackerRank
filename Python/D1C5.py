# Leap Year
# Good

def is_leap(year):
    leap = False
    if year % 4 != 0:
        lead = False
    
    elif year % 100 == 0 and year % 400 != 0:
        leap = False
    elif year % 100 == 0 and year % 400 ==0:
        leap = True
    else: 
        leap = True
    
    # Write your logic here
    
    return leap

year = int(input())
print(is_leap(year))
