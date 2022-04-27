#!/bin/bash
sudo sunxi-fel -p spiflash-write 0 ./u-boot-sunxi-with-spl.bin
sync
echo "u-boot down flash over !!!"
