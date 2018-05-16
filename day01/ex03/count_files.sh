find . -type d -o -not -name '.*' | wc -l | sed 's/\ *//g'
