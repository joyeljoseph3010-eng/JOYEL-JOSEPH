age=int(input("enter your age:"))
day=(input("enter the day:"))
time=input("enter the time(e.g.,morning,afternon,evening): ")       
ticket_price= 250
weekend_price=500

if day == "sunday" or day == "saturday": 
    day="weekend"
    print(f"day is {day}")
    
else:
    day=="monday,thuesday,wednesday,thruseday,friday"
    day=="weekday"
    print(f"day is {day}")
if time == "morning" :
    print("morning")
    ticket_price=ticket_price

elif time == "afternon":
    print("afternon")
    ticket_price=ticket_price + (ticket_price * 10/100)

else:
    print("evening")  
    ticket_price=ticket_price + (ticket_price * 30/100)           


if(age <= 5):
    print("child")
    if day == "weekend":
        weekend_price=weekend_price - (weekend_price * 50/100)
        print("weekend_price:",weekend_price)
    else:
        movie_price=ticket_price - (ticket_price * 50/100)
        print("ticket_price:",movie_price)
    
elif(age  <= 59):
    print("adult")
    if day == "weekend":
        print("weekend_price:",weekend_price)
    else:
        print("ticket_price:",ticket_price)
else:
    print("senior citizen")
    if day == "weekend":
            weekend_price=weekend_price - (weekend_price * 10/100)
            print("weekend_price:",weekend_price)
    else:
        movie_price=ticket_price - (ticket_price * 10/100)
        print("ticket_price:",ticket_price)