class Website:
    def login(self, username, password):
        if username == "user" and password == "password":
            print("Login Successfully")
        else:
            print("Login failed.")

site = Website()
site.login(input("Enter username: "), input("Enter password: "))