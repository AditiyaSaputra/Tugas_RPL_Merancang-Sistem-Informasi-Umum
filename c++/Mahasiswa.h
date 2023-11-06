#ifndef MAHASISWA_H
#define MAHASISWA_H

class Mahasiswa {

private:
	Sistem_Manajemen_Eldoro sistem;
	std::vector<Dosen> dosen;
	std::vector<Materi> mtr;
	std::vector<Nilai> nil;
	std::vector<Absensi> abs;
	int ID;
	string nama;
	int nim;
	string email;

public:
	void MengaksesMataKuliah();

	void MengajukanKehadiran();

	void MelihatMateri();
};

#endif
