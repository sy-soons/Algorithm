unsorted = [12,9,3,7,4,11,6,2,10,5]
sorted = list(unsorted)

def swap(ix, iy):
	global sorted
	temp = sorted[ix]
	sorted[ix] = sorted[iy]
	sorted[iy] = temp

def quicksort(low, high):
	global unsorted
	if(low < high):
		#find pivot
		p = partition(low, high)
		#print 'pivot :', p, 'value : ',unsorted[p],'|',low,'|',high
		#pivot's left side, call quicksort(recursive function)
		if(p>0):
			quicksort(low, p-1)
			#pivot's left side, call quicksort(recursive function)
			quicksort(p+1,high)

def partition(low, high):
	global unsorted
	#set pivot as rigit side value.
	pivot = unsorted[high]
	pivot_idx = high
	ret_pivot = 0
	#set left and right value
	left = low
	right = high-1
	
	global sorted
	for idx in range(0, len(unsorted)):
		sorted[idx] = unsorted[idx]

	print '============================'
	print 'initial condition : ', left,',', right
		
	for i in range(low, high):
		if(left == right):
			#swap(left, pivot_idx)
			temp = pivot
			sorted[pivot_idx] = sorted[left]
			sorted[left] = temp
			ret_pivot = left

			print 'pivot:', pivot, ' L:', left, ' R:', right, 'P_I:', pivot_idx
			for cnt in range(0, len(sorted)):
				print 'sorted : ', sorted[cnt]
			
			break
		if(unsorted[i] >= pivot):
			#print 'more than pivot, ', unsorted[i], pivot
			#print 'In partition, right : ', right, ',i : ', i, ', len_temp :', len_temp_sorted
			sorted[right] = unsorted[i]
			right-=1
		elif(unsorted[i] < pivot):
			print 'less than pivot, ', unsorted[i], pivot
			sorted[left] = unsorted[i]
			left+=1	

	#copy sorted list to unsorted list
	for j in range(low,high+1):
		unsorted[j] = sorted[j]
				
	return ret_pivot

#quicksort(0, len(unsorted))
quicksort(0, 9)

print '############### finish sorting ###############'
for i in range(0, len(unsorted)):
	print 'unsorted[', i, '] : ', unsorted[i]

#check swap function
'''
swap(0,9)
for idx in range(0, len(unsorted)):
	print idx, ' : ', unsorted[idx]
'''
#check for initializing list as specific length
'''
a = [0]*10

for i in range(0,len(a)):
	print 'a : ',a[i]
'''