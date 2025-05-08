
    do
    {
        cout << endl;
        cout << "Menu" << endl;
        cout << "1. Menambahkan data kedalam list" << endl;
        cout << "2. Menghapus data dari dalam list" << endl;
        cout << "3. Menampilkan semua data dalam list" << endl;
        cout << "4. Mencari data dalam list" << endl;
        cout << "5. Keluar" << endl;
        cout << "Masukkan pilihan (1-5): ";
        cin >> ch;

        switch (ch)
        {
        case '1':
            mhs.addNode();
            break;
        case '2':
            if (mhs.listEmpty())
            {
                cout << "\nList Kosong" << endl;
                break;
            }
            cout << "\nMasukkan nim mahasiswa yang akan dihapus : ";
            cin >> nim;

            if (mhs.delNode(nim) == false)
                cout << "Data tidak ditemukan" << endl;
            else
                cout << "Data dengan nomor mahasiswa " << nim << " berhasil dihapus " << endl;
            break;
        case '3':
            mhs.traverse();
            break;
        case '4':
            if (mhs.listEmpty() == true)
            {
                cout << "\nList Kosong\n";
                break;
            }
            Node *previous, *current;
            cout << "\nMasukkan nim mahasiswa yang dicari : ";
            cin >> nim;
            if (mhs.Search(nim, &previous, &current) == false)
                cout << "Data tidak ditemukan" << endl;
            else
            {
                cout << "\nData ditemukan\n";
                cout << "\nNIM Mahasiswa: " << current->noMhs << endl;
            }
            break;
        case '5':
            break;
        default:
            cout << "Pilihan salah!" << endl;
            break;
        }
    } while (ch != '5');
}