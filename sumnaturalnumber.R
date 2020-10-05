# https://www.facebook.com/bhavesh.thale.1/posts/1517693698431445
# Subscribed by Code House

# Program to find the sum of natural numbers upto n using recursion
calculate_sum() <- function(n) {
if(n <= 1) {
return(n)
} else {
return(n + calculate_sum(n-1))
}
}
