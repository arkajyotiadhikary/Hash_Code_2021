from Code_Parts.FileTokenization import Tokenizer
from Code_Parts.IngredientsFinder import Finder

readFile = Tokenizer("Inputs/a_example.txt")
# readFile.display()

Finder(readFile.list_of_dishes,readFile.two_teamNo).display()
Finder(readFile.list_of_dishes,readFile.three_teamNo).display()
Finder(readFile.list_of_dishes,readFile.four_teamNo).display()


