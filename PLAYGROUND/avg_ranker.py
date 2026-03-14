class Averager:
    def __init__(self,score_dict):
        self.score_dict = score_dict
    def score_engine(self):
        avg_dict={}
        for keys in self.score_dict:
            val = self.score_dict[keys]
            total = sum(val)
            average = total/len(val)
            avg_dict[keys]=average
        return avg_dict

class Ranker(Averager):
    def __init__(self, score_dict):
        super().__init__(score_dict)
        self.avg_dict = self.score_engine()
        self.array = []
    def avg_ranker(self):
        for i in self.avg_dict:
            values = self.avg_dict[i]
            self.array.append(values)
        topper = max(self.array)
        for names in self.avg_dict:
            if self.avg_dict[names] == topper:
                print(f"{names} topped the class with {topper}% on average")
        for x,y in self.avg_dict.items():
            print(f"{x}:{y}")
       

class Sorter(Ranker):
    def __init__(self,avg_dict):
        super().__init__(avg_dict)
    def positions(self):
        sorted_dict={}
        for k in range(len(self.array)):
            for m in range(len(self.array)-1-k):
                if self.array[m] < self.array[m+1]:
                    temp = self.array[m]
                    self.array[m] = self.array[m+1]
                    self.array[m+1] = temp
        for names in self.avg_dict:
           score = self.avg_dict[names]
           indexing = self.array.index(score)
           sorted_dict[names] = indexing+1
        print(sorted_dict)
       
class_data = {}
control = False
while not control:
    std_name = input("Enter students name:")
    std_scores = input("Enter scores:").split(",")
    std_scores_int = [int(i) for i in std_scores]
    class_data[std_name] = std_scores_int

    loop_control = input("Are there anymore students(Y/N):").lower()
    if loop_control != "y":
        control = True

std_obj = Averager(class_data)
ranker_obj = Ranker(class_data) 
sorter_obj = Sorter(class_data)          
sorter_obj.avg_ranker()
sorter_obj.positions()

    
           