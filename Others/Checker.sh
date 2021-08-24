#!/bin/bash

simple_shell=$(echo "pwd" | ./hsh);
sh=$(echo "pwd" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 0 ✅
else
    echo Check 0 ❌
fi

simple_shell=$(echo "ls" | ./hsh);
sh=$(echo "ls" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 1 ✅
else
    echo Check 1 ❌
fi

simple_shell=$(echo "ls
pwd" | ./hsh);
sh=$(echo "ls
pwd" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 2 ✅
else
    echo Check 2 ❌
fi

simple_shell=$(echo "pwd
ls
whoami
head -1 main.c" | ./hsh);
sh=$(echo "pwd
ls
whoami
head -1 main.c" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 3 ✅
else
    echo Check 3 ❌
fi


simple_shell=$(echo "   ls   " | ./hsh);
sh=$(echo "   ls   " | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 4 ✅
else
    echo Check 4 ❌
fi

simple_shell=$(echo "" | ./hsh);
sh=$(echo "" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 5 ✅
else
    echo Check 5 ❌
fi

simple_shell=$(echo "   " | ./hsh);
sh=$(echo " " | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 6 ✅
else
    echo Check 6 ❌
fi

simple_shell=$(echo "/bin/ls" | ./hsh);
sh=$(echo "/bin/ls" | sh);

if [ "${simple_shell}" == "${sh}" ]
then
    echo Check 7 ✅
else
    echo Check 7 ❌
fi

# Error Messages
echo "echo '\n'" | sh;

# Not found
echo "qwe" | ./hsh;
echo "qwe" | sh;

echo "echo '\n'" | sh;

# Not found
echo "qwe
a sd
ñl k" | ./hsh;
echo "qwe
a sd
ñl k" | sh;

echo "echo '\n'" | sh;

# Permission denied
echo "/sys" | ./hsh;
echo "/sys" | sh;

echo "echo '\n'" | sh;

# Permission denied
echo "/sys
/etc
/sys" | ./hsh;
echo "/sys
/etc
/sys" | sh;