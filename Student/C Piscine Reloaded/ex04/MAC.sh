#!/bin/bash


if command -v ifconfig > /dev/null; then
    
    ifconfig | grep -Eo '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
else

    ip link | grep -Eo '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
fi