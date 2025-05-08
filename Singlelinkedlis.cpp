

   void addNode()
   {
    int nim;
    cout << "n\Masukkan nomor mahasiswa: ";
    cin >> nim;

    Node *nodeBaru = new Node;
    nodebaru->noMhs = nim;

    if (START == NULL || nim <= start->noMhs)
    {
        if ((START != NULL) && (nim == START_>noMhs))
        {
            cout << "\nDuplikasi noMhs tidak di izinkan\n";
            return;
        }
        nodeBaru_>nest = START;
        START = nodeBaru;
        return;
    }
    Node *previous = START;
    Node *current = START;

    while ((current != NULL) && (nim >= current->noMhs))
    {
        if (nim == current->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diizinkan\n";
            return;
        }
        previous = current;
        current = current->next;
    }

    noeBaru->next = current;
    previous->next = nodeBaru;
   }
}