import date_operations as date_opr

date1 = input("Enter Your First Date [YYYY-MM-DD] : ")
date2 = input("Enter Your Second Date [YYYY-MM-DD]: ")

print(f"Current Date : {date_opr.get_current_date}")
print(f"Current Time : {date_opr.get_current_time}")
print(f"Days Between : {date_opr.days_between(date1,date2)}")