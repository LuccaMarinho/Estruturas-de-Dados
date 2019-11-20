CC = g++ 
CFLAGS = -Wall -Wextra 
EXEC = ./tp2 
TMPOUT = tp2.testresult
BUILD = ./build

$(EXEC): src/main.cc merge_sort.o reorder.o planet.o print.o radix_sort.o read.o decide_month.o
	$(CC) $(CFLAGS) src/main.cc merge_sort.o reorder.o planet.o print.o radix_sort.o read.o decide_month.o -o $(EXEC)
	mv *.o $(BUILD)

decide_month.o: src/decide_month.cc
	$(CC) $(CFLAGS) -c src/decide_month.cc -o decide_month.o
	
merge_sort.o: src/merge_sort.cc
	$(CC) $(CFLAGS) -c src/merge_sort.cc -o merge_sort.o

reorder.o: src/reorder.cc 
	$(CC) $(CFLAGS) -c src/reorder.cc -o reorder.o

planet.o: src/planet.cc 
	$(CC) $(CFLAGS) -c src/planet.cc -o planet.o

print.o: src/print.cc 
	$(CC) $(CFLAGS) -c src/print.cc -o print.o

radix_sort.o: src/radix_sort.cc 
	$(CC) $(CFLAGS) -c src/radix_sort.cc -o radix_sort.o

read.o: src/read.cc 
	$(CC) $(CFLAGS) -c src/read.cc -o read.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf $(BUILD)/*
	rm -rf tp2
