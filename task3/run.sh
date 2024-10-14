cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd

g++ -std=c++11 -Wall -pedantic ./main.cpp ./**/*.cpp ./**/*.h -o ../bin/task3

"../bin/task3"
