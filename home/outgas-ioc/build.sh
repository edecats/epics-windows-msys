#!/bin/bash

dirs=(
        modules/SRS-RGA-Device-Support 
        modules/Pfeiffer-Controller-Device-Support 
        ioc/outgas-ioc     )

for d in ${dirs[@]}
do
        make -C $d $@
        if [ $? -ne 0 ]; then
                echo "ERROR: Build failed"
                pwd
                ls -al
                exit 1
        fi
done
