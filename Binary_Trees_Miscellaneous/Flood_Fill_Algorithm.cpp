
void fill(vector<vector<int>> &image, int x, int y, int newColor,int n,int m,int prev)
{
    if(x<0 || y<0 || x>=n || y>=m)
        return;
    if(image[x][y]!=prev || image[x][y]==newColor)
        return;
    image[x][y] = newColor;
    fill(image,x+1,y,newColor,n,m,prev);
    fill(image,x-1,y,newColor,n,m,prev);
    fill(image,x,y+1,newColor,n,m,prev);
    fill(image,x,y-1,newColor,n,m,prev);
    return;
}
vector<vector<int>> floodFill(vector<vector<int>> &image, int x, int y, int newColor)
{
    // Write your code here.
    fill(image,x,y,newColor,image.size(),image[0].size(),image[x][y]);
    return image;
    
}
