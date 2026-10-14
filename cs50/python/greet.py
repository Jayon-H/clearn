import sys

if len(sys.argv) != 2:
    print("hello,world")
    sys.exit(1)
else:
    print(f"hello,{sys.argv[1]}")
    sys.exit(0)