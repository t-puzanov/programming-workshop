cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd

g++ -std=c++11 -Wall -pedantic ./*.cpp ./expressions/*.cpp -o ../bin/task3

"../bin/task3"
