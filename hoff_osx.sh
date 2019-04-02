#!/bin/bash

HOFF=~/hoff.jpg
S=~/set_hoff_desktop.sh
curl -q -o $HOFF https://github.com/rmilne/hoffer/raw/master/img/h0.jpg
curl -q -o $S https://github.com/rmilne/hoffer/raw/master/set-desktop-mojave.sh

echo bash $S $H
bash $S $H

#echo osascript -e "tell application \"System Events\" to tell every desktop to set picture to \"${H}\""
#osascript -e "tell application \"System Events\" to tell every desktop to set picture to \"${H}\""

echo "hoffed"
#
