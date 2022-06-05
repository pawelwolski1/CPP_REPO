#include <iostream>
#include <string.h>

using namespace std;

void black(string txt){
        string pre, post;
        pre = "\033[1;30m";
        post = "\033[0m";
        pre.append(txt);
        pre.append(post);
        cout << pre;
}

void red(string txt){
        string pre, post;
        pre = "\033[1;31m";
        post = "\033[0m";
        pre.append(txt);
        pre.append(post);
        cout << pre;
}

void green(string txt){
        string pre, post;
        pre = "\033[1;32m";
        post = "\033[0m";
        pre.append(txt);
        pre.append(post);
        cout << pre;
}

void yellow(string txt){
        string pre, post;
        pre = "\033[1;33m";
        post = "\033[0m";
        pre.append(txt);
        pre.append(post);
        cout << pre;
}

void blue(string txt){
        string pre, post;
        pre = "\033[1;34m";
        post = "\033[0m";
        pre.append(txt);
        pre.append(post);
        cout << pre;
}

