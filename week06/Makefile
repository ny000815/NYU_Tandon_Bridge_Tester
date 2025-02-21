SHELL = /bin/bash

SRCS1    = $(wildcard *hw6_q1.cpp)
TARGETS1 = $(SRCS1:.cpp=.out) 
TESTS1 = 1 2 3 4

SRCS2    = $(wildcard *hw6_q2.cpp)
TARGETS2A = $(SRCS2:.cpp=a.out) 
TARGETS2B = $(SRCS2:.cpp=b.out) 
HEADER2 = tests/q2.h
TESTS2 = 1 2

SRCS3    = $(wildcard *hw6_q3.cpp)
TARGETS3 = $(SRCS3:.cpp=.out) 
HEADER2 = tests/q3.h

SRCS4    = $(wildcard *hw6_q4.cpp)
TARGETS4 = $(SRCS4:.cpp=.out) 
TESTS4 = 1 2 3 4


GREEN  = \033[32m
RED    = \033[31m
RESET  = \033[0m


$(TARGETS1): %.out: %.cpp
	c++ -o $@ $<

$(TARGETS2A): $(SRCS2) $(HEADER2)
	c++ -o $@ tests/q2main_a.cpp $(SRCS2) -I.	

$(TARGETS2B): $(SRCS2) $(HEADER2)
	c++ -o $@ tests/q2main_b.cpp $(SRCS2) -I.	

$(TARGETS3): $(SRCS3) $(HEADER3)
	c++ -o $@ tests/q3main.cpp $(SRCS3) -I.	

$(TARGETS4): $(TARGETS3) 
	c++ -o $@ $(SRCS4) 

test1 : $(TARGETS1)
	@echo "Running tests..."
	@for i in $(TESTS1); do \
	  echo "Test $$i:"; \
	  input="tests/q1-$$i.in"; \
	  expected="tests/q1-$$i.expected"; \
	  actual="tests/q1-$$i.out"; \
	  echo "Input:"; \
	  cat $$input; \
	  echo "------------------------"; \
	  echo "Expected Output:"; \
	  cat $$expected; \
	  echo "------------------------"; \
	  ./$(TARGETS1) < $$input > $$actual 2>&1; \
	  echo "Program Output:"; \
	  cat $$actual; \
	  diff -u $$expected $$actual > /dev/null && \
	    echo -e "Test $$i: $(GREEN)[OK]$(RESET)" || \
	    echo -e "Test $$i: $(RED)[FAIL]$(RESET)"; \
	  echo "------------------------"; \
	done

test2a : $(TARGETS2A)
	@echo "Running tests..."
	@for i in $(TESTS2); do \
	  echo "Test $$i:"; \
	  input="tests/q2a-$$i.in"; \
	  expected="tests/q2a-$$i.expected"; \
	  actual="tests/q2a-$$i.out"; \
	  echo "Input:"; \
	  cat $$input; \
	  echo "------------------------"; \
	  echo "Expected Output:"; \
	  cat $$expected; \
	  echo "------------------------"; \
	  ./$(TARGETS2A) < $$input > $$actual 2>&1; \
	  echo "Program Output:"; \
	  cat $$actual; \
	  diff -u $$expected $$actual > /dev/null && \
	    echo -e "Test $$i: $(GREEN)[OK]$(RESET)" || \
	    echo -e "Test $$i: $(RED)[FAIL]$(RESET)"; \
	  echo "------------------------"; \
	done

test2b : $(TARGETS2B)
	@echo "Running tests..."
	@for i in $(TESTS2); do \
	  echo "Test $$i:"; \
	  input="tests/q2b-$$i.in"; \
	  expected="tests/q2b-$$i.expected"; \
	  actual="tests/q2b-$$i.out"; \
	  echo "Input:"; \
	  cat $$input; \
	  echo "------------------------"; \
	  echo "Expected Output:"; \
	  cat $$expected; \
	  echo "------------------------"; \
	  ./$(TARGETS2B) < $$input > $$actual 2>&1; \
	  echo "Program Output:"; \
	  cat $$actual; \
	  diff -u $$expected $$actual > /dev/null && \
	    echo -e "Test $$i: $(GREEN)[OK]$(RESET)" || \
	    echo -e "Test $$i: $(RED)[FAIL]$(RESET)"; \
	  echo "------------------------"; \
	done

test3 : $(TARGETS3)
	@echo "Running test..."
	@echo "Input:"
	main="tests/q3main.cpp"; \
	expected="tests/q3.expected"; \
	actual="tests/q3.out"; \
	echo "test cases:"; \
	cat $$main | grep "int test"; \
	echo "------------------------"; \
	echo "Expected Output:"; \
	cat $$expected; \
	echo "------------------------"; \
	./$(TARGETS3) > $$actual 2>&1; \
	echo "Program Output:"; \
	cat $$actual; \
	diff -u $$expected $$actual > /dev/null && \
	    echo -e "Test 3: $(GREEN)[OK]$(RESET)" || \
	    echo -e "Test 3: $(RED)[FAIL]$(RESET)"; \
	echo "------------------------"; \

test4 : $(TARGETS4)
	@echo "Running tests..."
	@for i in $(TESTS4); do \
	  echo "Test $$i:"; \
	  input="tests/q4-$$i.in"; \
	  expected="tests/q4-$$i.expected"; \
	  actual="tests/q4-$$i.out"; \
	  echo "Input:"; \
	  cat $$input; \
	  echo "------------------------"; \
	  echo "Expected Output:"; \
	  cat $$expected; \
	  echo "------------------------"; \
	  ./$(TARGETS4) < $$input > $$actual 2>&1; \
	  echo "Program Output:"; \
	  cat $$actual; \
	  diff -u $$expected $$actual > /dev/null && \
	    echo -e "Test $$i: $(GREEN)[OK]$(RESET)" || \
	    echo -e "Test $$i: $(RED)[FAIL]$(RESET)"; \
	  echo "------------------------"; \
	done


clean:
	rm -f $(TARGETS1) $(TARGETS2A) $(TARGETS2B) $(TARGETS3) $(TARGETS4)tests/*.out 

.PHONY: all run test clean
