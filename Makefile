CC = gcc
CFLAGS = -Wall -I./include

SRCS = src/event_a.c src/event_b.c src/event_c.c src/probability.c src/main.c
OBJS = $(SRCS:.c=.o)

TARGET = probability_simulation

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

