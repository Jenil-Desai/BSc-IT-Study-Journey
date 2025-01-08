def calculate_class(total_marks):
    if total_marks >= 450:
        return "First Class"
    elif total_marks >= 350:
        return "Second Class"
    elif total_marks >= 250:
        return "Third Class"
    else:
        return "Fail"

marks = []
for i in range(5):
    mark = float(input(f"Enter marks for subject {i + 1}: "))
    marks.append(mark)

total_marks = sum(marks)
percentage = (total_marks / 500) * 100
class_assigned = calculate_class(total_marks)

print(f"Total Marks: {total_marks}")
print(f"Percentage: {percentage:.2f}%")
print(f"Class: {class_assigned}")