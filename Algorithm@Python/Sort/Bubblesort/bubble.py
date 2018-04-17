unsorted = [5, 99, 1, 9, 3]

#print(len(unsorted))
len_unsorted = len(unsorted)
print("unsorted: ", unsorted)
for i in range(0, len_unsorted):
	for j in range(0, len_unsorted-i-1):#(j: 4,3,2,1,0)
		if(unsorted[j] > unsorted[j+1]):
			temp = unsorted[j]
			unsorted[j] = unsorted[j+1]
			unsorted[j+1] = temp
			
print("sorted: ", unsorted)