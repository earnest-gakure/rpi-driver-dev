CC = aarch64-linux-gnu-gcc

all: ioctl_test

ioctl_test: ioctl_test.c
	$(CC) -o ioctl_test ioctl_test.c

clean:
	rm -f ioctl_test

deploy:
	scp ioctl_test pi@192.168.1.123:~/chapter4/lab4.2/
