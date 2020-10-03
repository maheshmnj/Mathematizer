
#shared on fb - https://www.facebook.com/silena.zerica/posts/384217752596870
#Subscribed by akash maurya
brightness_4
# Function for nth Fibonacci number
 
def Fibonacci(n):
    if n<=0:
        print("Incorrect input")
    # First Fibonacci number is 0
    elif n==1:
        return 0
    # Second Fibonacci number is 1
    elif n==2:
        return 1
    else:
        return Fibonacci(n-1)+Fibonacci(n-2)
 
# Driver Program
 
print(Fibonacci(9))
 
#This code is contributed by akash maurya
