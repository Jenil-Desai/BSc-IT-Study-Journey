class Father:
    def set_father_name(self, name):
        self.father_name = name

class Mother:
    def set_mother_name(self, name):
        self.mother_name = name

class Child(Father, Mother):
    def show_parents(self):
        print(f"My father is {self.father_name} and my mother is {self.mother_name}.")

child = Child()

child.set_father_name(input("Enter father's name: "))
child.set_mother_name(input("Enter mother's name: "))

child.show_parents()