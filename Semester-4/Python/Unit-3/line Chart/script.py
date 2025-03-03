import matplotlib.pyplot as plt

x = [1, 2, 3, 4, 5, 6, 7, 8]
y = [10, 20, 25, 30, 35, 40,45,50 ]

plt.xlabel('x-axis')
plt.ylabel('y-axis')
plt.title('Line Chart')
plt.plot(x, y)
plt.show()