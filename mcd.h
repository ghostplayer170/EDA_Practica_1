#ifndef MCD_H_
#define MCD_H_

int iterMCD(int a, int b) {
    int mcd;
    int div;
    int pre;

    if (a > b) {
        div = a;
        mcd = b;

        do {
            if (div % mcd != 0) {
                pre = mcd;
                mcd = div % mcd;
                div = pre;
            }
        } while(div % mcd != 0);

    } else {
        div = b;
        mcd = a;

        do {
            if (div % mcd != 0) {
                pre = mcd;
                mcd = div % mcd;
                div = pre;
            }
        } while(div % mcd != 0);
    }

    return mcd;
}


int recurMCD(int a, int b) {
    int mcd;
    int div;
    int pre;

    if (a > b) {
        div = a;
        mcd = b;

        if (div % mcd != 0) {
                pre = mcd;
                mcd = div % mcd;
                div = pre;

                return recurMCD(div, mcd);
        } else {
            return mcd;
        }

    } else {
        div = b;
        mcd = a;

        if (div % mcd != 0) {
                pre = mcd;
                mcd = div % mcd;
                div = pre;

                return recurMCD(div, mcd);
        } else {
            return mcd;
        }
    }
}

#endif  // MCD_H_
