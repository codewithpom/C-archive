import os
import time

start = time.time()

os.system("float_test.exe")

end = time.time()

print("\n" + str(end - start))

input("Press any key to exit")
