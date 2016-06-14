KERN_DIR := /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

obj-m := khello.o

all:
	$(MAKE) -C $(KERN_DIR) M=$(PWD) modules

clean:
	rm -f *.o *.ko *.mod.* .*.cmd *~
	rm -rf modules.order Module.symvers .tmp_versions

