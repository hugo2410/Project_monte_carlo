import pandas as pd
import numpy as np
import seaborn as sns
from tqdm import tqdm
import matplotlib.pyplot as plt
import os

directory = "tr"
fig = plt.subplots(nrows = 1, ncols = 1, sharex = False, sharey = False, figsize = (13, 10))
var1=[]
var2=[]
l=[]
for root,dirs,files in os.walk(directory):
    for file in tqdm(files):
        if file.endswith(".csv"):
            file_path = os.path.join(directory,file)
            df= pd.read_csv(file_path)
            
            sns.distplot(df.iloc[1:,:],label=file)
            
            l.append((float)(file.split("_")[-1].split(".")[0]))
            var1.append(df.iloc[0,0]/(float)(file.split("_")[-1].split(".")[0]))
            var2.append(df.iloc[1:,0].var())
            print(l)
print(var2)
plt.legend()
plt.show()
plt.scatter(l,var1)
plt.scatter(l,var2)
plt.ylim(0,0.003)