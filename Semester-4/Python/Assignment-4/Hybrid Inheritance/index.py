class Grandparent:
    def greet(self):
        print("Hello from Grandparent!")

class ParentOne(Grandparent):
    def parent_one_action(self):
        print("ParentOne is here.")

class ParentTwo(Grandparent):
    def parent_two_action(self):
        print("ParentTwo is here.")

class Child(ParentOne, ParentTwo):
    def child_action(self):
        print("I am the Child.")

child = Child()
child.greet()
child.parent_one_action()
child.parent_two_action()
child.child_action()
