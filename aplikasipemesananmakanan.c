#include <stdio.h>
#include <stdlib.h>

int main() {
    int mie_rebus, nasi_goreng, teh_es, kopi, lemon_tea;
    int jmie_rebus, jnasi_goreng, jteh_es, jkopi, jlemon_tea;
    int hmie_rebus = 10000, hnasi_goreng = 12000, hteh_es = 6000, hkopi = 5000, hlemon_tea = 8000;
    int beli, lanjut, total;

Menu:
    printf("Selamat Datang di Cafe Melayu House\n");
    printf("===================================\n");
    printf("Daftar menu makanan & minuman:\n");
    printf(" (1) Mie rebus\n (2) Nasi goreng\n (3) Teh es\n (4) Kopi\n (5) Lemon tea\n");
    printf("Masukkan kode menu yang dibeli: ");
    scanf("%d", &beli);

    switch (beli) {
        case 1:
            printf("Masukkan jumlah mie rebus yang dibeli: ");
            scanf("%d", &jmie_rebus);
            if (jmie_rebus < 0) {
                printf("Maaf ulangi lagi\n");
                goto Menu;
            } else {
                mie_rebus = jmie_rebus * hmie_rebus;
            }
            break;

        case 2:
            printf("Masukkan jumlah nasi goreng yang dibeli: ");
            scanf("%d", &jnasi_goreng);
            if (jnasi_goreng < 0) {
                printf("Maaf ulangi lagi\n");
                goto Menu;
            } else {
                nasi_goreng = jnasi_goreng * hnasi_goreng;
            }
            break;

        case 3:
            printf("Masukkan jumlah teh es yang dibeli: ");
            scanf("%d", &jteh_es);
            if (jteh_es < 0) {
                printf("Maaf ulangi lagi\n");
                goto Menu;
            } else {
                teh_es = jteh_es * hteh_es;
            }
            break;

        case 4:
            printf("Masukkan jumlah kopi yang dibeli: ");
            scanf("%d", &jkopi);
            if (jkopi < 0) {
                printf("Maaf ulangi lagi\n");
                goto Menu;
            } else {
                kopi = jkopi * hkopi;
            }
            break;

        case 5:
            printf("Masukkan jumlah lemon tea yang dibeli: ");
            scanf("%d", &jlemon_tea);
            if (jlemon_tea < 0) {
                printf("Maaf ulangi lagi\n");
                goto Menu;
            } else {
                lemon_tea = jlemon_tea * hlemon_tea;
            }
            break;

        default:
            printf("Input yang anda masukkan salah, silahkan coba lagi\n");
            goto Menu;
    }

    printf("\nPesan lagi?\n");
    printf("(1) Ya\n (2) Tidak\n");
    printf("Pilihan anda: ");
    scanf("%d", &lanjut);
    printf("\n");

    if (lanjut == 1) {
        goto Menu;
    }

hitung:
    printf("Anda telah memesan\n");

    if (jmie_rebus > 0) {
        printf("Mie rebus : %d\n", jmie_rebus);
    }
    if (jnasi_goreng > 0) {
        printf("Nasi goreng : %d\n", jnasi_goreng);
    }
    if (jteh_es > 0) {
        printf("Teh es : %d\n", jteh_es);
    }
    if (jkopi > 0) {
        printf("Kopi : %d\n", jkopi);
    }
    if (jlemon_tea > 0) {
        printf("Lemon tea : %d\n", jlemon_tea);
    }

    printf("\nAnda sudah yakin?\n");
    printf("(1) Ya\n(2) Tidak\n");
    scanf("%d", &lanjut);

    if (lanjut == 1) {
        goto total;
    } else {
        goto Menu;
    }

total:
    printf("Total menu anda adalah:\n");

    if (jmie_rebus > 0) {
        printf("Mie rebus   : %d x %d = %d\n", jmie_rebus, hmie_rebus, mie_rebus);
    }
    if (jnasi_goreng > 0) {
        printf("Nasi goreng : %d x %d = %d\n", jnasi_goreng, hnasi_goreng, nasi_goreng);
    }
    if (jteh_es > 0) {
        printf("Teh es      : %d x %d = %d\n", jteh_es, hteh_es, teh_es);
    }
    if (jkopi > 0) {
        printf("Kopi        : %d x %d = %d\n", jkopi, hkopi, kopi);
    }
    if (jlemon_tea > 0) {
        printf("Lemon tea   : %d x %d = %d\n", jlemon_tea, hlemon_tea, lemon_tea);
    }

    printf("====================================================================\n");
    total = mie_rebus + nasi_goreng + teh_es + kopi + lemon_tea;
    printf("Total               : %d\n", total);
    printf("Terimakasih telah memesan, Silahkan bayar ke kasir");

    return 0;
}
