class Tokenizer:
    dish_varity: int
    two_teamNo : int
    three_teamNo : int
    four_teamNo : int

    list_of_dishes = []

    def __init__(self,filePath):
        inputFile = open(filePath,"r")
        lines = inputFile.readlines()  #fixing line
        varialbes = lines[0].split(' ')
        self.dish_varity = int(varialbes[0])
        self.two_teamNo = int(varialbes[1])
        self.three_teamNo = int(varialbes[2])
        self.four_teamNo = int(varialbes[3])

        for i in range(0,self.dish_varity):
            self.list_of_dishes.append(lines[i+1][2:-1].split(' '))


    def display(self):
        print('varity of dishes '+ str(self.dish_varity))
        print('no of two member team '+ str(self.two_teamNo))
        print('no of three member team ' + str(self.three_teamNo))
        print('no of four member team ' + str(self.four_teamNo))

        print("dishes are ")
        for i in self.list_of_dishes:
            print(str(i)[1:])
        