# google_test_example
An example of how to use the C google test framework

* Install on Ubuntu

- sudo apt-get install libgtest-dev
- sudo apt-get install cmake
- cd /usr/src/gtest
- sudo cmake CMakeLists.txt
- sudo make
- sudo cp *.a /usr/lib # copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder

* Get the example code
- cd  ~
- git clone XXX

* Build and run tests
- cd ZYYY
- sudo cmake CMakeLists.txt
- make
- runTests
