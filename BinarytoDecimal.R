# https://www.facebook.com/bhavesh.thale.1/posts/1517693698431445
# Subscribed by Code House

# Program to convert decimal number into binary number using recursive function
convert_to_binary <- function(n) {
if(n > 1) {
convert_to_binary(as.integer(n/2))
}
cat(n %% 2)
}
