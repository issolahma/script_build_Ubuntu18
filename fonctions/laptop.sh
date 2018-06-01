#!/bin/bash

dir="$(dirname "$0")"

# Installation des pilotes tuxedo pour le mode avion
apt install -y dkms
dpkg -i $dir/resources/tuxedo-wmi-dkms_1.5.1_all.deb

