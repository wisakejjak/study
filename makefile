CC = gcc
CXX = g++
CFLAGS = -Wall -Werror
CPPFLAGS = -Wall -Werror
PREF_SRC = ./src
PREF_OBJ = ./obj
PREF_RUN = ./run
C_SRCS_SEARCH = $(wildcard $(PREF_SRC)/*_search.c)
C_OBJS_SEARCH = $(subst $(PREF_SRC), $(PREF_OBJ), ${C_SRCS_SEARCH:.c=_c.o})
C_RUN_SEARCH = $(subst $(PREF_OBJ)/, $(PREF_RUN)/, ${C_OBJS_SEARCH:.o=.out})
C_SRCS_SORT = $(wildcard $(PREF_SRC)/*_sort.c)
C_OBJS_SORT = $(subst $(PREF_SRC)/, $(PREF_OBJ)/, ${C_SRCS_SORT:.c=_c.o})
C_RUN_SORT = $(subst $(PREF_OBJ)/, $(PREF_RUN)/, ${C_OBJS_SORT:.o=.out})
CPP_SRCS_SEARCH = $(wildcard $(PREF_SRC)/*_search.cpp)
CPP_OBJS_SEARCH = $(subst $(PREF_SRC)/, $(PREF_OBJ)/, ${CPP_SRCS_SEARCH:.cpp=_cpp.o})
CPP_RUN_SEARCH = $(subst $(PREF_OBJ)/, $(PREF_RUN)/, ${CPP_OBJS_SEARCH:.o=.out})
CPP_SRCS_SORT = $(wildcard $(PREF_SRC)/*_sort.cpp)
CPP_OBJS_SORT = $(subst $(PREF_SRC)/, $(PREF_OBJ)/, ${CPP_SRCS_SORT:.cpp=_cpp.o})
CPP_RUN_SORT = $(subst $(PREF_OBJ)/, $(PREF_RUN)/, ${CPP_OBJS_SORT:.o=.out})

all : obj run c_search c_sort cpp_search cpp_sort

obj :
	mkdir $(PREF_OBJ)

run :
	mkdir $(PREF_RUN)

clean :
	rm -rf $(PREF_OBJ)
	rm -rf $(PREF_RUN)

c_search : $(C_RUN_SEARCH) obj run

c_sort : $(C_RUN_SORT) obj run

cpp_search : $(CPP_RUN_SEARCH) obj run

cpp_sort : $(CPP_RUN_SORT) obj run

$(C_RUN_SEARCH) : $(C_OBJS_SEARCH) obj run
	$(CC) $< -o $@

$(C_RUN_SORT) : $(C_OBJS_SORT) obj run
	$(CC) $< -o $@

$(CPP_RUN_SEARCH) : $(CPP_OBJS_SEARCH) obj run
	$(CXX) $< -o $@

$(CPP_RUN_SORT) : $(CPP_OBJS_SORT) obj run
	$(CXX) $< -o $@

$(C_OBJS_SEARCH) : $(C_SRCS_SEARCH) obj
	$(CC) $(CFLAGS) $< -c -o $@ 

$(C_OBJS_SORT) : $(C_SRCS_SORT) obj
	$(CC) $(CFLAGS) $< -c -o $@

$(CPP_OBJS_SEARCH) : $(CPP_SRCS_SEARCH) obj
	$(CXX) $(CPPFLAGS) $< -c -o $@

$(CPP_OBJS_SORT) : $(CPP_SRCS_SORT) obj
	$(CXX) $(CPPFLAGS) $< -c -o $@
