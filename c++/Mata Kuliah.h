#ifndef MATA KULIAH_H
#define MATA KULIAH_H

class Mata_Kuliah {

private:
	std::vector<Dosen> dosen_mk;
	std::vector<Nilai> nil;
	std::vector<Absensi> abs;
	std::vector<Materi> mtr;
	int ID;
	string namaMataKuliah;
	string kodeMataKuliah;
	int idMataKuliah;
};

#endif
