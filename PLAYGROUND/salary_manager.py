class EmployeeSalaryManager:
    def __init__(self,name,type,no_children,hrs_worked):
        self.name=name
        self.type=type
        self.no_children=no_children
        self.hrs_worked = hrs_worked
        self.employee_details_dict={}
    def salary_calculations(self):
        if self.type==1:
            total_salary=self.hrs_worked*5
            income_tax=0.15*total_salary
            national_health=0.025*total_salary
            district_tax=0.01*total_salary
            if self.no_children > 3:
                children=self.no_children - 3
                ed_levy=children*0.5
            else:
                ed_levy=0
            all_expenses=income_tax+national_health+district_tax+ed_levy
            remainder=total_salary-all_expenses
            self.employee_details_dict[self.name]={"total salary":round(total_salary,2),
                                                   "income tax":round(income_tax,2),
                                                   "national health":round(national_health,2),
                                                   "district tax":round(district_tax,2),
                                                   "Child support":round(ed_levy,2),
                                                   "Remaining salary":round(remainder,2)
                                                   }
        elif self.type == 2:
            total_salary=self.hrs_worked*7.5
            income_tax=0.15*total_salary
            national_health=0.025*total_salary
            district_tax=0.01*total_salary
            if self.no_children > 3:
                children=self.no_children - 3
                ed_levy=children*0.5
            else:
                ed_levy=0
            all_expenses=income_tax+national_health+district_tax+ed_levy
            remainder=total_salary-all_expenses
            self.employee_details_dict[self.name]={"total salary":round(total_salary,2),
                                                   "income tax":round(income_tax,2),
                                                   "national health":round(national_health,2),
                                                   "district tax":round(district_tax,2),
                                                   "Child support":round(ed_levy,2),
                                                   "Remaining salary":round(remainder,2)
                                                   }
    def display(self):
       print(f"\nEmployee Name: {self.name}")
       for key, value in self.employee_details_dict[self.name].items():
          print(f"{key.title()} : {value}")

            

employee_object_locations=[]
control = False

while not control:
    name = input("Enter employee name:")
    type = int(input(
        f"Is {name} a ...\n"
        "1.Regular Employee\n"
        "2.Overtime worker\n"
        "Which is it?:"
    ))
    hours = int(input(f"How many hours has {name} worked?:"))
    children = int(input(f"How many chidren does {name} have?:"))
    data = EmployeeSalaryManager(name,type,children,hours)
    data.salary_calculations()
    employee_object_locations.append(data)

    loop = input("Are there more employees(Y/N)?:").lower()
    if loop != 'y':
        control = True

for i in employee_object_locations:
    i.display("k")