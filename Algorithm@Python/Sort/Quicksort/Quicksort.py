unsorted = [12,9,3,7,14,11,6,2,10,5]
sorted = list(unsorted)

def quicksort(low, high):
	global unsorted
	if(low < hi):
		#find pivot
		p = _partition(low, high)
		#pivot's left side, call quicksort(recursive function)
		quicksort(low, p-1)
		#pivot's left side, call quicksort(recursive function)
		quicksort(p+1,high)

def partition(low, high):
	global unsorted
	#set pivot as rigit side value.
	pivot = unsorted[high]
	
	