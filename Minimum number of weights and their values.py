

import itertools
import numpy as np

def find_weights(input_W):
    weights = []
    i = 0
    while sum(weights) < input_W:
        weights.append(3 ** i)
        i += 1    
    return weights

#weight to be measured
input_W = 41;

weights= find_weights(input_W) #getting range of weights needed
negative_weights = [ i * -1 for i in weights] #negatives of the weights, useful later for subtraction of weights/use on right scale
all_weights = weights + negative_weights #all positive and negatives of weights


#generate all combinations of weights
combo=[]
usable_combos=[]
for i in range(0,len(weights)+1):
    combo = itertools.combinations(all_weights,i)
    for e in combo:
        if (sum(e)==input_W):
            usable_combos.append(e) 
        
#remove duplicate weights
final=[list(set(i)) for i in usable_combos]
final=final[0] #choose ONE possible combination of weight to be used on left and right scale

#weight(s) to be used on the left scale
left = [i for i in final if (i>0)]

#weight(s) to be used on the right scale
right = [-i for i in final if (i<0)]

#printing out the results
print "Total weight to be measured: %s" %input_W
print "left scale: %s"%left
print "right scale: %s"%right


