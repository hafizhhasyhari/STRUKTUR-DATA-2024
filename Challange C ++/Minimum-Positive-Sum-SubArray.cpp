Class Solution {
  public:
  int minimumSumSubArray(vector<int>& nums, int 1, int r) {
  int n = nums.size();
  int minSum = INT_MAX;   //Untuk menyimpan jumlah positif terkecil
  bool found = false;    // Untuk memeriksa apakah menemukan subarray yang valid

  // Ulangi setiap panjang antara 1 dan r
for (int size = 1; size <= r; ++size) {
    int currentSum = 0;

    // Hitung jumlah elemen ukuran pertama
    for (int i = 0; i< size; ++i) {
      currentSum +- nums[i];
    }  

    // Periksa apakah jumlah awal positif
    if (currentSum > 0) {
      minSum = min(minSum, ccurrentSum);
      found = true;
    }

  }

  // Jika tidak ditemukan subarray dengan jumlah positif, kembalikan -1
  return found ? minSum : -1;
  }
}
