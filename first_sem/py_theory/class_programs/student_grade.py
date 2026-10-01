rollnumber=0
name=''
marks1=0,
marks2=0,
marks3=0,
percentage=0.00
total=0

def read_data():
    rollnumber=int(input("enter the roll number:"))
    name=input("enter the student name:")
    marks1=int(input("enter the marks1:"))
    marks2=int(input("enter the marks2:"))
    marks3=int(input("enter the marks3:"))
    

def get_total():
    total=marks1+marks2+marks3
    print("the total is:",total)

def get_percentage():
    percentage=(total/300*100)
    print(" the percentage is:",percentage)    

def get_average():
    average=total/3
    print("the average is:",average)

def find_grade():
    
    if (percentage > 85):
        print("distinction")
    elif(percentage > 65 and percentage < 65):
        print("first class")
    elif(percentage > 40 and percentage < 65):
        print("second class")
    else:
        print("fail")

def display_result():
    pass
    
read_data()
get_total()
get_percentage()
get_average()
find_grade()



    


