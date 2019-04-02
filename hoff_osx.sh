#!/bin/bash

HOFF=~/hoff.jpg
S=~/hoff.swift

curl -s -o $HOFF https://raw.githubusercontent.com/rmilne/hoffer/master/img/h0.jpg
curl -s -o $S https://raw.githubusercontent.com/rmilne/hoffer/master/desktoppr.swift
swift $S $HOFF

echo "$? hoffed"

