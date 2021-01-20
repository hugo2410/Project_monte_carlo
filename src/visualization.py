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
directory = "cmake-build-debug/output"

#defines subplots settings
fig,ax = plt.subplots(nrows = 1, ncols = 2, sharex = False, sharey = False, figsize = (19, 10))
var1=[]
var2=[]
sample_size=[]
#Loops over all files in directory
for root,dirs,files in os.walk(directory):
    for file in tqdm(files):

        #only retains correct files
        if file.endswith(".csv") and file.startswith("sample"):
            file_path = os.path.join(directory,file)
            #read csv file
            df= pd.read_csv(file_path, header=None)

            #plot histogram of the means
            sns.distplot(df.iloc[2:,:], label=file,ax=ax[ 0])

            #collects true mean for plot
            true_mean = df.iloc[0,0]

            #Collects sample size from name
            sample_size.append((float)(file.split("_")[-1].split(".")[0]))

            #Computes variance from the data
            var1.append(df.iloc[1,0]/(float)(file.split("_")[-1].split(".")[0]))

            #Gets the variance from file
            var2.append(df.iloc[2:,0].var())

#Legends, axes labels
ax[0].axvline(true_mean, linestyle = '--', color ='Blue', label = 'True mean')
ax[0].legend()
ax[0].set_xlabel('Means')
ax[0].set_ylabel('Count')

#Plots true variance and actual variance from distribution
ax[1].scatter(sample_size,var1,label="Actual Variance")
ax[1].scatter(sample_size,var2,label="True Variance")
ax[1].legend()
ax[1].set_xlabel('Number of samples')
ax[1].set_ylabel('Variance')
ax[1].set_ylim(0,0.0025)

fig.suptitle("Central Limit Theorem")
plt.show()

fig.savefig("CTLTheorem.png")

#Create second plot for the statistical moment
fig1=plt.figure(figsize=(10,10))

#Reads moments file
df=pd.read_csv("cmake-build-debug/output/moments.csv", header=None)

#Separate dataframe columns as multiple data is separated by ";"
df_separated=df.iloc[1:,0].str.split(pat=";",expand=True).astype(float)
df_separated.columns= df.iloc[0,0].split(";")

#Plot a barplot of the statistical moment in function of order
sns.barplot(x=df_separated['Order'], y =df_separated['Statistical Moment'])

fig1.suptitle("Statistical moments")
plt.show()
fig1.savefig("Moment.png")




