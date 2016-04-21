#!/usr/bin/python
import os

fout = os.open("foo", os.O_WRONLY | os.O_CREAT, 0o644)

os.write(fout, bytes("hello world"))
os.close(fout)
