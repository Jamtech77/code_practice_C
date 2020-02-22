import numpy as np
import matplotlib.pyplot as plt
import pandas as pd

mydata1 = np.random.randn(3, 4)
df1 = pd.DataFrame(mydata1, columns=list("ABCD"))
print(df1)
df2 = pd.DataFrame(np.random.randn(2, 4), columns=list("ABCD"))
print(df2)

df3 = pd.concat([df1, df2], axis=0) # axis = 0:列的方向接起來：1:行的方向接
print(df3)
df3.index = range(5)    # revise index
print(df3)
