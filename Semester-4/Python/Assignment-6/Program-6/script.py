import pandas as pd
import matplotlib.pyplot as plt

data = {
    'Student': ['Alice', 'Bob', 'Charlie', 'David'],
    'Math': [85, 90, 78, 88],
    'Science': [92, 85, 80, 95],
    'English': [88, 76, 90, 85]
}

df_students = pd.DataFrame(data)

df_students.set_index('Student').plot(kind='bar')
plt.title('Student Performance in Different Subjects')
plt.ylabel('Scores')
plt.legend(title='Subjects')
plt.show()