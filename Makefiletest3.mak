#thsi is sample
testCal:linkstack1.c testlinkstack.c
	gcc linkstack1.c testlinkstack.c -o testlinkstack
clean:
	rm testCal