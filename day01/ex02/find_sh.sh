find . -type f | sed 's/^.*\///g' | grep ".sh" | sed 's/\.sh *$//'
