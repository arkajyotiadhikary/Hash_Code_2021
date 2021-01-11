import itertools

class Finder:
    no_of_team_member : int 

    ingredientsList = [] #list to store the data from the file
    maxVarity = []
    combinationList = [] 

    def __init__(self,_list,_members :int):
        self.ingredientsList = _list
        self.no_of_team_member = _members
        
        self.compare()

    # comparing all the ingridients
    def compare(self):
        
        lenght_ = 0
        
        # list of all the possible combination according to the number of team member
        self.combinationList = list(itertools.combinations(self.ingredientsList,self.no_of_team_member))

        # concating all the substrings
        for i in self.combinationList:
            comaparingList = list(i)
            finalList = []

            for j in comaparingList:
                finalList += j

            finalList = list(set(finalList))
        
            # checking if the lenght of the list is greater thn previouse lists
            if(lenght_ < len(finalList)):

                lenght_ = len(finalList)

                # if greater change the list with the greater list
                self.maxVarity = list(finalList)

    def display(self):
        print(self.maxVarity)
        print(len(self.maxVarity))
