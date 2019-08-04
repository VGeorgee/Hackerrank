    static int viralAdvertising(int n) {
        int shared = 5, liked = 0, cumulative = 0;
        for(; n > 0; n--){
            liked = (shared / 2);
            cumulative += liked;
            shared = liked * 3;
        }
        return cumulative;
    }
