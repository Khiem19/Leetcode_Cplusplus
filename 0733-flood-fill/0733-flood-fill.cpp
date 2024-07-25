class Solution {
public:
    void floodFillFunc(vector<vector<int>>& image, int r, int c, int original, int newcolor) {
        int rows = image.size();
        int cols = image[0].size();

        if (r < 0 || r == rows || c < 0 || c == cols || image[r][c] == newcolor || image[r][c] != original) {
            return;
        }

        image[r][c] = newcolor;

        floodFillFunc(image, r + 1, c, original, newcolor);
        floodFillFunc(image, r - 1, c, original, newcolor);
        floodFillFunc(image, r, c + 1, original, newcolor);
        floodFillFunc(image, r, c - 1, original, newcolor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc] != color) {
            floodFillFunc(image, sr, sc, image[sr][sc], color);
        }

        return image;
    }
};
