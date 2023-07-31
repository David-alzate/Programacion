secret_number = 777

print(
    """
    +=================================+
    |  welcome to my game, muggle!    |
    |  Enter an integer number        |
    |  and guess what number i ve     |
    |  picked for you.                |
    |  so, what is the secret number? |
    +=================================+
    
""")

user_number = int(input("Enter the number: "))
print()
while user_number != secret_number:
    print("Ha ha! you're struck in my loop!")
    print()
    user_number = int(input("Enter the number again:"))
    print()
print(secret_number, "well done, muggle! you are free now.")
