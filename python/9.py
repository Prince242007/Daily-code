import pandas as pd
# print(pd.__version__)


# import pandas as pd
# # Creating a Series
data = [1, 2, 3, 4, 5]
series = pd.Series(data)
# print(series)


series2 = series + 10
# print(series2)


filtered_series = series[series > 2]
# print(filtered_series)
# Statistical Calculations
mean_value = series.mean()
# print(mean_value)


data = {
    'Name': ['Alice', 'Bob', 'Charlie'],
    'Age': [25, 30, 35],
    'City': ['New York', 'Los Angeles', 'Chicago']
}
df = pd.DataFrame(data)
# print(df)

# print(df[['Name']])
df['Salary'] = [70000, 80000, 90000]
# print(df)

df = df.drop('City', axis=1)
# print(df)

# print(df.loc[[0]])
# print(df.loc[[0, 1]])

data = {
  "calories": [420, 380, 390],
  "duration": [50, 40, 45]
}
df = pd.DataFrame(data, index = ["day1", "day2", "day3"])
# print(df)

# dat = pd.read_csv("data.csv")
# print(dat)

# Biodata = {'Name': ['John', 'Emily', 'Mike', 'Lisa'],
#         'Age': [28, 23, 35, 31],
#         'Gender': ['M', 'F', 'M', 'F']
#         }
# df = pd.DataFrame(Biodata)
# # Save the dataframe to a CSV file
# df.to_csv('Biodata.csv', index=False)


dat = pd.read_csv("data.csv")
# print(dat.info())
# # shows first and last five rows
# print(dat.head())
# print(dat.tail())
# print(dat.describe())
# print(dat[['Name']])
# print(dat[['Name','Number']])
# print(dat.loc[[1]])

import numpy as np
data = {
    'A': [np.nan, 2, 3, 4, 5, 6, 7, 8, 9, 10],
    'B': np.random.normal(50, 15, 10),
    'C': np.random.rand(10) * 100,
    'D': np.linspace(1, 10, 10),
    'E': np.logspace(1, 2, 10)
}
df = pd.DataFrame(data)
# print(df)

import pandas as pd

# Create two series
s1 = pd.Series([10, 20, 30, 40])
s2 = pd.Series([1, 2, 3, 4])

# Arithmetic operations
# print("Addition:\n", s1 + s2)
# print("Subtraction:\n", s1 - s2)
# print("Multiplication:\n", s1 * s2)
# print("Division:\n", s1 / s2)


import pandas as pd

# Dictionary
data = {'a': 100, 'b': 200, 'c': 300, 'd': 400}

# Convert dictionary to Series
s = pd.Series(data)
# print(s)

import pandas as pd
import numpy as np

# From List
list_data = [10, 20, 30, 40]
s1 = pd.Series(list_data)
# print("Series from List:\n", s1)

# From NumPy Array
array_data = np.array([100, 200, 300, 400])
s2 = pd.Series(array_data)
# print("\nSeries from NumPy Array:\n", s2)

# From Dictionary
dict_data = {'x': 1, 'y': 2, 'z': 3}
s3 = pd.Series(dict_data)
# print("\nSeries from Dictionary:\n", s3)


import pandas as pd
# Two Series
s1 = pd.Series([1, 2, 3])
s2 = pd.Series([4, 5, 6])
# Stack vertically (just concatenate)
vertical = pd.concat([s1, s2])
print("Vertical Stack:\n", vertical)
# Stack horizontally (side by side as DataFrame)
horizontal = pd.concat([s1, s2], axis=1)
print("\nHorizontal Stack:\n", horizontal)
