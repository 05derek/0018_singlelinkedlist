
    void traverse()
    {
        if (!listEmpty())
        {
            Node *currentNode = START;
            cout << "\nData dalam list adalah:\n";
            while (currentNode != NULL)
            {
                cout << currentNode->noMhs << " ";
                currentNode = currentNode->next;
            }
            cout << endl;
        }