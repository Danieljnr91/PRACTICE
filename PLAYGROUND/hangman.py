import random

hangman_words = [
    "python", "variable", "function", "loop", "string", "integer",
    "boolean", "syntax", "compiler", "debug", "algorithm", "binary",
    "network", "database", "object", "class", "inheritance",
    "recursion", "exception", "package", "module", "library",
    "hardware", "software", "keyboard", "monitor", "processor",
    "internet", "encryption", "security", "firewall", "protocol",
    "artificial", "intelligence", "machine", "learning",
    "neural", "quantum", "physics", "gravity", "energy",
    "galaxy", "planet", "asteroid", "comet", "universe"
]

hangman_stages = [
    """
     -----
     |   |
         |
         |
         |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
         |
         |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
     |   |
         |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
    /|   |
         |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
    /|\  |
         |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
    /|\  |
    /    |
         |
    --------
    """,
    """
     -----
     |   |
     O   |
    /|\  |
    / \  |
         |
    --------
    """
]


computer_choice = random.choice(hangman_words)
word_length = len(computer_choice)
dashes = []

for i in computer_choice:
    dashes.append("_")

chances = 0
indexing = 0
while chances <= word_length:
   letter = input("whats your guess?:")
   chances+=1

   if letter not in computer_choice:
      print(hangman_stages[indexing])
      indexing+=1
   if indexing == 7:
      print(f"Terrific! You have successfully hanged the man!👏👏.\n The word was {computer_choice}")
      break

   for j in range(0,word_length):
      if letter == computer_choice[j]:
         dashes[j] = letter
   print(dashes)



   if "_" not in dashes:
      print(f"HURRAYY! You guessed it right! The word indeed was ({computer_choice})")
      break
   if chances > word_length:
      print(f"Welp! Your outta chances. The word was {computer_choice}")

         



    
