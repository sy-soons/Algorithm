#12,9,3,7,14,11,6,2,10,5
#[12,9,3,7,14,11,6,2,10,5]
#unsorted = [4,1,2,3]
#sorted = list(unsorted)

unsorted = [12,9,3,7,14,11,6,2,10,5]
sorted = list(unsorted)

def DevideConquer(iStart, iEnd):	
	#It reached to the smallest part
	if((iEnd-iStart) < 2):
		return
	
	#call recursive function
	mid = (iStart + iEnd) / 2

	DevideConquer(iStart,mid)
	DevideConquer(mid,iEnd)

	global sorted
	temp = list(sorted)
	merge(sorted, iStart, mid, iEnd, temp)

def merge(list_a, start, mid, end, list_b):
	i = start
	j = mid
	for k in range(start, end):
		if(i<mid and (j>=end or list_a[i] <= list_a[j])):
			list_b[k] = list_a[i]
			i = i+1
		else:
			list_b[k] = list_a[j]
			j = j+1
	for i in range(start, end):
		print '@',i,': ',list_b[i]
		list_a[i] = list_b[i]
#Call Merge Sort function	
DevideConquer(0,len(sorted))

print("SORTED: ", sorted)
#Check sorted-list
print '##########################'
for k in range(0, len(sorted)):
	print sorted[k]