class tokenizer:
    dish_varity: int
    two_teamNo : int
    three_teamNo : int
    four_teamNo : int

    list_of_dishes : list

    def __init__(self,filePath):
        inputFile = open(filePath,"r")
        varialbes = inputFile.readlines()[0].split(' ')
        self.dish_varity = int(varialbes[0])
        self.two_teamNo = int(varialbes[1])
        self.three_teamNo = int(varialbes[2])
        self.four_teamNo = int(varialbes[3])
        self.list_of_dishes = inputFile.readlines()

    def display(self):
        print('varity of dishes '+ str(self.dish_varity))
        print('no of two member team '+ str(self.two_teamNo))
        print('no of three member team ' + str(self.three_teamNo))
        print('no of four member team ' + str(self.four_teamNo))

        print("dishes are ",)
        for i in self.list_of_dishes:
            print(i)

read_file = tokenizer('Inputs/a_example.txt')
read_file.display()

