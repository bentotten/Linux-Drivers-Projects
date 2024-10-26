# p 24

# If KERNELRELEASE is defined, this has been invoked from the kernel build system.
# Otherwise, called from the cli and must invoke the kernel build system.
ifneq ($KERNELRELEASE),)
	obj-m := hello.o
else
	KERNELDIR ?= /lib/modules/$(shell uname -r)/buid
	PWD := $(shell pwd)

default:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules
endif

