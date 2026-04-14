#ifndef __majalah
#define __majalah

class majalah {
    private:
        char namaMajalah[30];
        char penerbit[30];
        int jumlah;
    public:
        majalah(char *namaMajalah = "Nama Majalah Tidak Ada",
                char *penerbit = "Tidak Ada Penerbit",
                int jumlah = 0);
        void info();
};

#endif