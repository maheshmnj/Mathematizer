num=int(input("Enter number to print its table : "))
last=int(input("Enter limit upto which you want to print the table : "))
for i in range(1,last+1):
    result=num*i
    print(num," X ",i," = ",result)