// Question: https://www.hackerrank.com/challenges/variadic-functions-in-c/problem

// Solution:


int  sum (int count,...) {
    int sum = 0;
    va_list a;
    va_start(a, count);
    for(int i = 0; i < count; i++) {
        int ap = va_arg(a, int);
        sum = sum + ap;
    }
    va_end(a);
    return sum;
}

int min(int count,...) {
    int ap, min = MAX_ELEMENT;
    va_list a;
    va_start(a, count);
    for(int i = 0; i < count; i++) {
        ap = va_arg(a, int);
        if(ap<min) {
            min = ap;
        }
    }
    va_end(a);
    return min;

}

int max(int count,...) {
    int ap, max = 0;
    va_list a;
    va_start(a, count);
    for(int i = 0; i < count; i++) {
        ap = va_arg(a, int);
        if(ap > max) {
            max = ap;
        }
    }
    va_end(a);
    return max;
}

