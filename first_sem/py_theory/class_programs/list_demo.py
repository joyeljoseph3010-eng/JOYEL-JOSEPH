marks=['sachin',50,55,67,76,89]
#declares an list 'marks' to store marks of 'sachin's
my_marks=[]
#dynamic initialization
for number in range(5):
    newmark=int(input("enter the marks:"))
    my_marks.append(newmark)

print("list element are:")
for i in range(len(my_marks)):
    print(my_marks[i])


    
    

    