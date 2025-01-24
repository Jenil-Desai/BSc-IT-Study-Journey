from datetime import datetime as dt

def get_current_date():
    return dt.now().strftime("%Y-%m-%d")

def get_current_time():
    return dt.now().strftime("%H:%M:%S")

def days_between(day1,day2):
    day1 = dt.strptime(day1,"%Y-%m-%d")
    day2 = dt.strptime(day2,"%Y-%m-%d")
    return abs((day1 - day2).days)