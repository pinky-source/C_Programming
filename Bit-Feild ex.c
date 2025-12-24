#include <stdio.h>

struct status {
    unsigned int ready:1;
    unsigned int error:1;
};

int main() {
    struct status s = {1, 0};
    printf("Ready=%d Error=%d", s.ready, s.error);
    return 0;
}
