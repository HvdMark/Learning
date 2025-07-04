# Import module
import random


def roll_dice():
    return random.randint(1, 6) + random.randint(1, 6)


def main():
    # Ask for players names
    player1 = input("Enter player 1's name:\n")
    player2 = input("Enter player 2's name:\n")

    # Store the role for player (between 1 and 12)
    roll1 = roll_dice()
    roll2 = roll_dice()

    print(player1, "rolled", roll1)
    print(player2, "rolled", roll2)

    if roll1 > roll2:
        print(player1, "wins!")
    elif roll2 > roll1:
        print(player2, "wins!")
    else:
        print("You tie")


main()
