CC = gcc
CFLAGS = -W -Wall
TARGET = kakaolist
OBJECTS = main.c kakao.o search.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean : 
	rm *.o kakaolist
