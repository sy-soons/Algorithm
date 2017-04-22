unsorted = [12,9,3,7,14,11,6,2,10,5]
#sorted = list(unsorted)

def swap(ix, iy):
	global unsorted
	temp = unsorted[ix]
	unsorted[ix] = unsorted[iy]
	unsorted[iy] = temp

def quicksort(low, high):
	global unsorted
	if(low < high):
		#find pivot
		p = partition(low, high)
		print 'pivot :', p, 'value : ',unsorted[p],'|',low,'|',high
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
	
	#declare temp buffer
	len_temp_sorted = high-low+1
	temp_sorted = [0]*len_temp_sorted
	
	for i in range(low, high):
		if(left == right):
			ret_pivot = left
			swap(left, pivot_idx)
			break
		if(unsorted[i] > pivot):
			print 'In partition, right : ', right, ',i : ', i, ', len_temp :', len_temp_sorted
			temp_sorted[right] = unsorted[i]
			right-=1
		elif(unsorted[i] < pivot):
			temp_sorted[left] = unsorted[i]
			left+=1
	
	return ret_pivot

#quicksort(0, len(unsorted))
quicksort(0, 9)


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