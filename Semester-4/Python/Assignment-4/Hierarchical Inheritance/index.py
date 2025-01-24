class Parent:
    def show_name(self, name):
        print(f"My name is {name}.")

class ChildOne(Parent):
    pass

class ChildTwo(Parent):
    pass

child_one = ChildOne()
child_one.show_name("Alice")

child_two = ChildTwo()
child_two.show_name("Bob")