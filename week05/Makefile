SHELL := /bin/bash

CXX := g++
CXXFLAGS := -Wall -g

SRCS := $(wildcard *hw4_q1.cpp)
TARGETS := $(SRCS:.cpp=)

TEST_INPUT := 2\n3
EXPECTED_STRINGS := "section a" "Please enter a positive integer:" "2" "4" "section b" "Please enter a positive integer:" "2" "4" "6"

GREEN := \033[32m
RED := \033[31m
NC := \033[0m # No Color

all: $(TARGETS)

$(TARGETS): %: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

test: all
	@echo "Running test..."
	@for exe in $(TARGETS); do \
		echo "Testing $$exe..."; \
		echo "Input:"; \
		echo -e "$(TEST_INPUT)"; \
		printf "$(TEST_INPUT)" | ./$$exe | tee output.txt; \
		PASS=1; \
		for STR in $(EXPECTED_STRINGS); do \
			grep -q "$$STR" output.txt || { PASS=0; break; } \
		done; \
		if [ $$PASS -eq 1 ]; then \
			echo -e "$(GREEN)OK$(NC)"; \
		else \
			echo -e "$(RED)KO$(NC)"; \
		fi; \
	done

clean:
	rm -f $(TARGETS) output.txt
