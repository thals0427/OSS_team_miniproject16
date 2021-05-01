CC = gcc
CFLAGS = -W -Wall
TARGET = kakaolist
OBJECTS = main.c kakao.o
all : $(TARGET)
$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
clean : 
	rm *.o kakaolist
