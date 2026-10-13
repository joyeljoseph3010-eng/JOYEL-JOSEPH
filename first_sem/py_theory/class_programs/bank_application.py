#def bank_account_data():
tuple=[()]    
Name=input("enter the name:")
pan=int(input("enter the pan no:"))
accountno=int(input("enter the account number:"))
dateofbirth=input("enter the date of birth:")
adhaarno=input("enter the adhaar no:")
email=input("enter the email:")
phoneno=input("enter the phone no:")
address=input("enter the address:")
currentbalance=float(input("enter the current balance:"))

bank_account_data=[email,phoneno,address,currentbalance,(Name,accountno,pan,dateofbirth,adhaarno)]

#def display_bank_deatils():
print(bank_account_data)


