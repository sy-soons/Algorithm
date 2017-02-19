
unsorted = [55, 07, 78, 12, 42]

#def swap(global x,global y):
#	global x
#	global y
#	temp = x
#	x = y
#	y = temp
#	print 'fuction ==> a : ',x,' b : ',y	

# find the largest value in [i~4]
# and swap unsorted[i] <-> unsorted[largest_value_idx]
for i in range(0,len(unsorted)-1):
	key = unsorted[i]
	largest_idx = 0
	for j in range(i+1,len(unsorted)):
		if(key < unsorted[j]):
			key = unsorted[j]
			largest_idx = j
	
#	if(largest_idx != 0):
#		temp = unsorted[i]
#		unsorted[i] = unsorted[largest_idx]
#		unsorted[largest_idx] = temp
	if(key != unsorted[i]):
		temp = unsorted[i]
		unsorted[i] = unsorted[largest_idx]
		unsorted[largest_idx] = temp

for k in range(0, len(unsorted)):
	print i,'th result : ',unsorted[k]
print '=============================='
				
print 'sorted:'
for p in range(0, len(unsorted)):
	print unsorted[p],','