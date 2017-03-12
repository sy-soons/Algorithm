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
	
	i = iStart
	j = mid
	#temp = [0,0,0,0]
	temp = [12,9,3,7,14,11,6,2,10,5]
	
	#sort routine
	for k in range(iStart, iEnd):
		if(i<mid and (j>=iEnd or sorted[i] <= sorted[j])):
			temp[k] = sorted[i]
			i = i+1
		else:
			temp[k] = sorted[j]
			j = j+1
	
	for i in range(iStart, iEnd):
		print '@',i,': ',temp[i]
		sorted[i] = temp[i]

#Call Merge Sort function	
DevideConquer(0,len(sorted))

#Check sorted-list
print '##########################'
for k in range(0, len(sorted)):
	print sorted[k]

	