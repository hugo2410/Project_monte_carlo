#!/usr/bin/env python
# coding: utf-8



import pandas as pd
import numpy as np
import seaborn as sns
from scipy.stats import norm
from tqdm import tqdm
import matplotlib.pyplot as plt
import os




#path to the directory where to find the files
directory = "output"

#defines subplots settings
fig,ax = plt.subplots(nrows = 1, ncols = 2, sharex = False, sharey = False, figsize = (19, 10))
var1=[]
var2=[]
l=[]
#Loops over all files in directory
for root,dirs,files in os.walk(directory):
    for file in tqdm(files):

        #only retains correct files
        if file.endswith(".csv") and file.startswith("sample"):
            file_path = os.path.join(directory,file)
            df= pd.read_csv(file_path)
            
            sns.distplot(df.iloc[1:,:], label=file,ax=ax[ 0])
            
            l.append((float)(file.split("_")[-1].split(".")[0]))
            var1.append(df.iloc[0,0]/(float)(file.split("_")[-1].split(".")[0]))
            var2.append(df.iloc[1:,0].var())
ax[0].legend()
ax[0].set_xlabel('Means')
ax[0].set_ylabel('Count')
ax[1].scatter(l,var1)
ax[1].scatter(l,var2)
ax[1].set_ylim(0,0.003)
plt.legend()
plt.show()
fig.savefig("CTLTheorem.png")



df=pd.read_csv("cmake-build-debug/output/moments.csv", header=None)
df_separated=df.iloc[1:,0].str.split(pat=";",expand=True).astype(float)
df_separated.columns= df.iloc[0,0].split(";")
#df_separated['Statistical Moment']=df.iloc[:,0].str.split(pat=";",expand=True)[1].astype(float)

sns.barplot(x=df_separated['Order'], y =df_separated['Statistical Moment'])
fig.savefig("Moment.png")




