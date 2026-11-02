#include <stdio.h>

int main() {
    int expectedFrame = 0;
    int frame;

    printf("Stop-and-Wait Receiver\n");

    while (1) {
        printf("\nEnter received frame number (-1 to stop): ");
        scanf("%d", &frame);

        if (frame == -1)
            break;

        if (frame == expectedFrame) {
            printf("Frame %d received correctly.\n", frame);
            printf("ACK %d sent.\n", frame);

            expectedFrame = 1 - expectedFrame;  // Alternate 0 and 1
        } else {
            printf("Duplicate/out-of-order frame %d.\n", frame);
            printf("ACK for previous frame sent.\n");
        }
    }

    printf("\nReceiver stopped.\n");

    return 0;
}

