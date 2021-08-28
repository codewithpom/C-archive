import os

path = "."
# we shall store all the file names in this list
filelist = []

def remove_prefix(text, prefix):
    if text.endswith(prefix):
        return text[:len(prefix) + 1]
    return text  # or whatever

for root, dirs, files in os.walk(path):
	for file in files:
                # append the file name to the list
                if file.endswith(".c"):
                        filelist.append(os.path.join(root,file))

# print all the file names
for name in filelist:
    name = name[2:].replace("\\", "/")
    # print(name)
    cmd = name.replace('.c', "") + "_windows" + '.exe'.replace("\\", "/")
    # print(cmd)
    os.system(f"gcc {name} -o {cmd}")
    # print(f"gcc {name} -o {cmd}")
