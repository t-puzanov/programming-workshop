cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd

g++ -std=c++11 -Wall -pedantic ./*.cpp ./geometry/*.cpp -o ../bin/task4

"../bin/task4"

