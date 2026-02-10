KERNEL_SRC := $(HOME)/rpi-driver-dev/linux

obj-m += hello.o

all:
	make ARCH=arm64 \
	  CROSS_COMPILE=aarch64-linux-gnu- \
	  -C $(KERNEL_SRC) \
	  M=$(PWD) modules

clean:
	make ARCH=arm64 \
	  CROSS_COMPILE=aarch64-linux-gnu- \
	  -C $(KERNEL_SRC) \
	  M=$(PWD) clean
