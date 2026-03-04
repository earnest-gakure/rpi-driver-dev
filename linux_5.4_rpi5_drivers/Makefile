obj-m := helloworld_rpi5.o helloworld_rpi5_with_parameters.o
KERNEL_DIR ?= $(HOME)/rpi-driver-dev/linux
all:
	make -C $(KERNEL_DIR) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- M=$(PWD) modules
clean:
	make -C $(KERNEL_DIR) ARCH=arm64 CROSS_COMPILE=aarch64-linux-gnu- M=$(PWD) clean
deploy:
	scp *.ko pi@192.168.1.123:~/

