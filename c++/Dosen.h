#ifndef DOSEN_H
#define DOSEN_H

class Dosen {

private:
	Sistem_Manajemen_Eldoro sistem;
	std::vector<Mahasiswa> mhs;
	std::vector<Mata_Kuliah> mk;
	int ID;
	string nama;
	int nip;
	string email;

public:
	void MenambahkanMataKuliah();

	void MembuatAbsensi();

	void MembuatMateri();

	void MengupdateNilaiMataKuliah();
};

#endif
