import sys

sys.path.append('/home/ozerek/workspace/my_python_C_extension/build/lib.linux-x86_64-3.8');
print(sys.path);

import kmodule

s = kmodule.kadd(2, 3)
print(s)

