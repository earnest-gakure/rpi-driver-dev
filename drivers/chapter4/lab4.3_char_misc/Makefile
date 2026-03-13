obj-m := misc_rpi5_driver.o

KERNEL_DIR ?= $(HOME)/rpi-driver-dev/linux

all:
	make -C $(KERNEL_DIR) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- M=$(PWD) modules

clean:
	make -C $(KERNEL_DIR) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- M=$(PWD) clean

deploy:
	scp *.ko pi@192.168.1.123:~/chapter4/lab4.3/
	cd apps && make deploy
