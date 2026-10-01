print('enter student1 details:')
name=input('enter the name1')
english=int(input('enter english marks:'))
maths=int(input('enter maths marks:'))
python=int(input('enter python marks:'))
total=english+maths+python
print('total marks:',total)
percentage=total/300*100
print(f"the percentage is{percentage:.2f}%")
print('\n')

print('enter student details:')
name1=input('enter the name')
english1=int(input('enter english marks:'))
maths1=int(input('enter maths marks:'))
python1=int(input('enter python marks:'))
total1=english1+maths1+python1
print('total marks:',total1)
percentage1=total1/300*100
print(f"the percentage is{percentage1:.2f}%")
print(f"{'NAME':>20}{'ENGLISH':>10} {'MATHS':>10} {'PYTHON':>10} {'TOTAL':>10} %")
print(f"{name:>20}{english:>4}{maths:>3}{python:>5}{total:>8}{percentage:.2f}")
print(f"{name1:>20}{english1:>5}{maths1:>5}{python1:>6}{total1:>5}{percentage1:.2f}")