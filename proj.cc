// workers
void worker1(int n){
    int i=0;
    while(i++<n);
}

void worker2(int n){
    int i=0;
    while(i++<n);
}

void worker3(int n){
    int i=0;
    while(i++<n);
}

void worker4(int n){
    int i=0;
    while(i++<n);
}
// managers

void manager1(int n1, int n2, int n3) {
    worker1(n1);
    worker3(n2);
    worker4(n3);
}

void manager2(int n1, int n2, int n3) {
    worker2(n1);
    worker3(n2);
}

void manager3(int n1, int n2, int n3) {
    worker1(n1);
    worker2(n2);
    worker3(n3);
}

// projects

void project1(){
    manager1(10000, 100000, 50000);
}

void project2(){
    manager2(100000, 100000, 50000);
}

void project3(){
    manager3(100000, 100000, 100000);
}


int main() {
    project1();
    project2();
    project3();
    return 0;
}
