import statistics
from collections import Counter

class StudentData:
    def __init__(self,name,course,level):
        self.name=name
        self.course=course
        self.level=level
    def __str__(self):
        return f"NAME:{self.name} \nCOURSE:{self.course} \nLEVEL:{self.level}"
        
class CourseTopics:
    def __init__(self,topics_dict):
        self.topics_dict=topics_dict
    def topics_output(self,new_sub,choice,subject):
        self.topics_dict[subject].extend(new_sub)
        print(f"{new_sub} has been added to {subject}, your topics for {subject} are now \n {self.topics_dict}")
        for i in new_sub:
            self.topics_dict[subject].remove(i)
            return f"{new_sub} has been removed from {subject}, your topics for {subject} are now \n {self.topics_dict}"
        
class ProgressTracker:
    def __init__(self,date,subject,topic,time):
        self.date=date
        self.subject=subject
        self.topic=topic
        self.time=time
        self.progress_history = {}
    def add_session(self):
        self.progress_history[self.date] = [self.subject,self.topic,self.time]
    def progress_output(self):
        for key,details in self.progress_history.items():
            print(f"{key} : {details}")
    def subject_ranking(self):
        sub_list = []
        for keys in self.progress_history:
            history_list = self.progress_history[keys]
            sub_list.append(history_list[0])
        most_studied = statistics.multimode(sub_list)
        least_studied =[]
        counts = Counter(sub_list)
        min_count = min(counts.values())
        for i,j in counts.items():
            if min_count==j:
                least_studied.append(i)
        return f"Your Most studied subject(s) is {most_studied} \nYour least studied subject(s) is {least_studied}"
          
class GradeTracker(CourseTopics):
    def __init__(self,parent_data):
        super().__init__(parent_data.topics_dict)
        self.score_dict={}
        self.avg_dict={}
        for strip in self.topics_dict:
            self.topics_dict[strip]=[]
        for strip_keys in self.topics_dict:
            self.score_dict[strip_keys]=[]
    def score_adder(self,subject,score_list):
        self.score_dict[subject].extend(score_list)
    def score_display(self):
        return self.score_dict
        #return f"Your test scores for {subject} have been updated, your scores are now \n{self.score_dict[subject]}"
    def avg_display(self):
        for key,values in self.score_dict.items():
            total = sum(values)
            avg = total/len(values)
            self.avg_dict[key]=avg
        for x,y in self.avg_dict.items():
            print(f"{x} : {y}") 
        return        
    




def recursing(): 
    user_profile = input("Enter name,course and level seperated by comma \n:").split(",")
    user_profile_list = [i for i in user_profile]  
    progresstracker_obj = ProgressTracker(None , None , None , None)  
    while True:
        course_dict = {}
        print("Enter...\n"
              "1. To Enter subjects and topics\n"
              "2. Want to upload a study session\n"
              "3. Want to record test scores\n"
              "4. View Already existing data")
        main_menu=int(input("Choose:"))
        if main_menu==1:
            while True:
                subject = input("Enter a Subject:")
                topic=input("Enter topics seperated by comma:").split(",")
                topic_list=[i for i in topic]
                course_dict[subject]=topic_list
                coursetopics_obj = CourseTopics(course_dict)
                gradetracker_obj= GradeTracker(coursetopics_obj)
                redo=input("Are there more subjects(Y/N)?:").lower()
                if redo !='y':
                    break
        elif main_menu==2: 
            while True:
                date=input("Enter Date of study:")
                study_info=input("Enter subject,topic and duration seperated by comma:").split(",")
                study_details=[i for i in study_info]
                progresstracker_obj.date=date
                progresstracker_obj.subject=study_details[0]
                progresstracker_obj.topic=study_details[1]
                progresstracker_obj.time=study_details[2]
                progresstracker_obj.add_session()
                redo=input("Are there more study sessions(Y/N)?:").lower()
                if redo != "y":
                    control=int(input(
                        "Enter..\n"
                        "1.To view study history\n"
                        "2.To see system comments on your history\n:"
                        ))
                    if control==1:
                           progresstracker_obj.progress_output()
                    elif control==2:
                           print(progresstracker_obj.subject_ranking())   
                    break
        elif main_menu==3:            
            while True:
                subject=input("Enter the subject you want to record scores for\n:")
                scores=input("Enter scores seperated by comma:").split(",")
                score_list=[int(i) for i in scores]
                gradetracker_obj.score_adder(subject=subject,score_list=score_list)
                redo=input("Do you wish to enter more scores?(Y/N):")
                if redo!='y':
                    control=int(input(
                    "1.Do you wish to view score history\n"
                    "2.View your average scores\n"
                    "Choose:"
                    ))
                    if control==1:
                        print(gradetracker_obj.score_display())
                    else:
                        gradetracker_obj.avg_display()
                    break
        elif main_menu==4:        
            while True:
                control=int(input(
                    "1.To view Your profile\n"
                    "2.To view current subject and topics\n"
                    "3.To view current test scores and averages\n"
                    "4.Exit this menu\n"
                    "Choose:"
                ))
                if control==1:
                    student_obj = StudentData(user_profile_list[0],user_profile_list[1],user_profile_list[2]) 
                    print(student_obj)
                elif control==2:
                    print()
               
                    if __name__ == "__main__":
                        recursing()
     