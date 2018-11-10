mkdir test0 test2
touch test1 test4 test5
ln test5 test3
ln -s test0 test6
chmod 715 test0
touch -t 06012047 test0
chmod 714 test1
echo "424" > test1
touch -t 06012146 test1
chmod 504 test2
touch -t 06012245 test2
chmod 404 test3
echo " " > test3
touch -t 06012344 test3
chmod 641 test4
echo "4" > test4
touch -t 06012343 test4
chmod 404 test5
echo " " > test5
touch -t 06012344 test5
chmod 755 test6
touch -t 06012220 test6
tar -cf exo.tar *
