
        }

        stringstream ss(line);
        string word;
        int total = 0;
        while (ss >> word) {
            if (hayPoints.count(word) > 0) {