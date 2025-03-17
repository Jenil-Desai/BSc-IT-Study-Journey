import matplotlib.pyplot as plt

data = {
    'Category A': 30,
    'Category B': 20,
    'Category C': 25,
    'Category D': 15,
    'Category E': 10
}

labels = data.keys()
sizes = data.values()

plt.pie(sizes, labels=labels, autopct='%1.1f%%')

plt.show()