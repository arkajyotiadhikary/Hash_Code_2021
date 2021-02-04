from Code_Parts.FileTokenization import Tokenizer
from Code_Parts.IngredientsFinder import Finder

readFile = Tokenizer("Inputs/b_little_bit_of_everything.in.txt")
# readFile.display()


Finder(readFile.list_of_dishes, 3).display()
# Finder(readFile.list_of_dishes,readFile.three_teamNo).display()
# Finder(readFile.list_of_dishes,readFile.four_teamNo).display()


