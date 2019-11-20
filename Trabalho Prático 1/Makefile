CC = g++ 
CFLAGS = -Wall -Wextra 
EXEC = ./tp1 
TMPOUT = tp1.testresult
BUILD = ./build

$(EXEC): src/main.cc bottle.o lab.o
	$(CC) $(CFLAGS) src/main.cc bottle.o lab.o  -o $(EXEC)
	mv *.o $(BUILD)

bottle.o: src/bottle.cc
	$(CC) $(CFLAGS) -c src/bottle.cc -o bottle.o

lab.o: src/lab.cc 
	$(CC) $(CFLAGS) -c src/lab.cc -o lab.o

test: $(EXEC)
	@bash run_tests.sh $(EXEC) $(TMPOUT)

clean: 
	rm -rf $(BUILD)/*
	rm -rf tp1
