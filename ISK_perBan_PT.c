#include <stdio.h>

typedef struct {
    float indikator;
    float bobot;

} Standar;


float hitungNilai(Standar standar[], int jumlahStandar) {
    float totalNilai = 0.0;
    for (int i = 0; i < jumlahStandar; i++) {
        totalNilai += standar[i].indikator * standar[i].bobot;
    }
    return totalNilai;
}


float hitungTotalSkorIndikator(Standar standar[], int jumlahStandar) {
    float totalSkor = 0.0;
    for (int i = 0; i < jumlahStandar; i++) {
        totalSkor += standar[i].indikator;
    }
    return totalSkor;
}

int main() {
    const int jumlahStandar = 4;

    Standar standar[jumlahStandar];

    printf("Penilaian Program Studi Magister\n");


    printf("\n1. Masukkan nilai indikator untuk dosen tetap di DTPS (0-4): ");
    scanf("%f", &standar[0].indikator);
    printf("   Masukkan bobot untuk dosen tetap di DTPS: ");
    scanf("%f", &standar[0].bobot);

    printf("\n2. Masukkan nilai indikator untuk kurikulum di level KNNI (0-4): ");
    scanf("%f", &standar[1].indikator);
    printf("   Masukkan bobot untuk kurikulum di level KNNI: ");
    scanf("%f", &standar[1].bobot);

    printf("\n3. Masukkan nilai indikator untuk penjaminan mutu pelampauan SN-DIKTI di UPPS (0-4): ");
    scanf("%f", &standar[2].indikator);
    printf("   Masukkan bobot untuk penjaminan mutu pelampauan SN-DIKTI di UPPS: ");
    scanf("%f", &standar[2].bobot);

    printf("\n4. Masukkan nilai indikator untuk publikasi ilmiah mahasiswa (0-4): ");
    scanf("%f", &standar[3].indikator);
    printf("   Masukkan bobot untuk publikasi ilmiah mahasiswa: ");
    scanf("%f", &standar[3].bobot);


    float totalNilai = hitungNilai(standar, jumlahStandar);
    float totalSkorIndikator = hitungTotalSkorIndikator(standar, jumlahStandar);

    printf("\nNilai total program studi: %.2f\n", totalNilai);
    printf("Total skor indikator: %.2f\n", totalSkorIndikator);


    if (totalNilai >= 3.61) {
        printf("Peringkat Akreditasi: A\n");
    } else if (totalNilai >= 3.01) {
        printf("Peringkat Akreditasi: B\n");
    } else if (totalNilai >= 2.00) {
        printf("Peringkat Akreditasi: C\n");
    } else {
        printf("Peringkat Akreditasi: Tidak Terakreditasi\n");
    }

    return 0;
}
