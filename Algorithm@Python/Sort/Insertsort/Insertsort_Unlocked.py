unsorted = [55, 07, 78, 12, 42]
#unsorted = [07, 55, 78, 12, 42]
print unsorted
print 'unsorted\'s len is ',len(unsorted)

#'''unsorted index''' 
for i in range(1, len(unsorted)):
	#set key, unsorted's start-value
	key = unsorted[i]
	j = i-1
	#if target is larger than key, target have to move
	#find key's location, j-1
	while j >= 0 and unsorted[j] > key:
		unsorted[j+1] = unsorted[j]
		j = j-1
	#locate key
	unsorted[j+1] = key

	print 'sorted, j : ',j,' i',i
	for p in range(0, len(unsorted)):
		print unsorted[p],','