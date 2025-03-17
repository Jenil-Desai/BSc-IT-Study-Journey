import matplotlib.pyplot as plt

attendance_data = {
    "Advanced JAVA": {"Lect. Conducted": 29, "Att. Filled": 29, "Att. Remaining": 0, "Attended": 23, "Absents": 6, "Attendance (%)": 79.31},
    "Practical :Advanced JAVA": {"Lect. Conducted": 10, "Att. Filled": 10, "Att. Remaining": 0, "Attended": 10, "Absents": 0, "Attendance (%)": 100.00},
    "WP-2": {"Lect. Conducted": 32, "Att. Filled": 31, "Att. Remaining": 1, "Attended": 22, "Absents": 9, "Attendance (%)": 70.97},
    "Practical :WP-2": {"Lect. Conducted": 12, "Att. Filled": 12, "Att. Remaining": 0, "Attended": 10, "Absents": 2, "Attendance (%)": 83.33},
    "Data Science using Python": {"Lect. Conducted": 29, "Att. Filled": 29, "Att. Remaining": 0, "Attended": 22, "Absents": 7, "Attendance (%)": 75.86},
    "Practical :Data Science using Python": {"Lect. Conducted": 11, "Att. Filled": 10, "Att. Remaining": 1, "Attended": 10, "Absents": 0, "Attendance (%)": 100.00},
    "System Analysis and Design": {"Lect. Conducted": 40, "Att. Filled": 40, "Att. Remaining": 0, "Attended": 38, "Absents": 2, "Attendance (%)": 95.00},
    "Concept to Practice": {"Lect. Conducted": 23, "Att. Filled": 20, "Att. Remaining": 3, "Attended": 18, "Absents": 2, "Attendance (%)": 90.00},
    "Theory Activity": {"Lect. Conducted": 2, "Att. Filled": 2, "Att. Remaining": 0, "Attended": 1, "Absents": 1, "Attendance (%)": 50.00},
    "Practical Activity": {"Lect. Conducted": 1, "Att. Filled": 1, "Att. Remaining": 0, "Attended": 1, "Absents": 0, "Attendance (%)": 100.00}
}

plt.plot(attendance_data.keys(), [data["Attendance (%)"] for data in attendance_data.values()], label="Attendance (%)", color="red")
plt.plot(attendance_data.keys(), [data["Attended"] for data in attendance_data.values()], label="Attended", color="green")
plt.plot(attendance_data.keys(), [data["Absents"] for data in attendance_data.values()], label="Absents", color="blue")
plt.plot(attendance_data.keys(), [data["Att. Remaining"] for data in attendance_data.values()], label="Att. Remaining", color="orange")
plt.plot(attendance_data.keys(), [data["Lect. Conducted"] for data in attendance_data.values()], label="Lect. Conducted", color="purple")
plt.plot(attendance_data.keys(), [data["Att. Filled"] for data in attendance_data.values()], label="Att. Filled", color="black")
plt.xticks(rotation=40, ha="right")
plt.xlabel("Subjects")
plt.ylabel("Attendance")
plt.title("Attendance Chart")
plt.legend()
plt.show()