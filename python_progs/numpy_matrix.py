import numpy as np

revenue = np.array([[200, 220, 250], [68, 79, 105],
                   [110, 140, 180], [80, 85, 90]])
inr = 7

converted_revenue = np.dot(inr, revenue)
print(converted_revenue)

units_sold = np.array([[50, 60, 25], [10, 13, 5],
                       [40, 70, 52]])
price = np.array([20, 30, 15])
sales = np.dot(units_sold, price)
print(sales)
