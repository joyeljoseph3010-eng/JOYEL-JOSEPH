#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""
print('==============================')
print('PROFILE CARD\n')
print('==============================')
name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
name=name.strip().title().replace(" "," ")
email=email.lower()
phone=phone.replace("+91-98765-4","*********")

first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()

print('NAME     :',name)
print('INITIALS :',initials)
print('EMAIL    :',email)
print('PHONE    :',phone)
if len(phone)==13:
   vaild=True
else:
   Invaild=False
print("VALID    :",vaild)       
   




print('===============================')

