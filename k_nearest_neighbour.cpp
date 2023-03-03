#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <random>
#include <fstream>
#include <string>

using namespace std;

class Point{
    public:
        Point(double x,double y):_x(x),_y(y){
        }
        virtual ~Point(){
        }
        double getDist(const Point &target_point) const{
            double xDist = (target_point.GetX() - _x);
            double yDist = (target_point.GetY() - _y);
            double dist = ((xDist*xDist) + (yDist*yDist));
            return dist;
        }
        
        double GetX() const {return _x;} // Fungsi getter untuk mendapatkan nilai X dari Point(X,Y)
        double GetY() const {return _y;} // Fungsi getter untuk mendapatkan nilai Y dari Point(X,Y)
    private:
        double _x; // Deklarasi variabel x untuk menyimpan nilai X dari Point(X,Y)
        double _y; // Deklarasi variabel y untuk menyimpan nilai Y dari Point(X,Y)
};


class NearestPointsContainer{
    public:
        NearestPointsContainer() {}
        virtual ~NearestPointsContainer() {}
        
        void addPoints(const Point &points){
            _points.push_back(points);
        }
        
        bool getNearestPoints(const Point &target_point,vector<Point> &nearest_points,int K){
            // PriorityQueue untuk menyimpan k titik terdekat
            priority_queue<pair<int,pair<int,int>>>nearest_points_pqueue;
            double close_x,close_y;

            if(K>_points.size()){ // Jika nilai K lebih besar dari jumlah titik yang ada, maka tidak ada titik terdekat yang dapat ditemukan.
                return false;
            }
            ofstream near_points_file("near_points_file.txt"); // Membuat file untuk menyimpan titik terdekat

            for(Points::iterator itr = _points.begin(); itr != _points.end(); ++itr){
                double current_point_distance= itr->getDist(target_point);
                near_points_file << itr->GetX()<<" "<<itr->GetY()<<_blue<<endl;
                if(nearest_points_pqueue.size()<K){
                     // Jika jumlah titik terdekat yang ada kurang dari K, maka titik terdekat akan ditambahkan ke PriorityQueue
                    nearest_points_pqueue.push({current_point_distance,{itr->GetX(),itr->GetY()}});
                }else{
                    int highest_distance = nearest_points_pqueue.top().first;
                    if(current_point_distance < highest_distance){
                        nearest_points_pqueue.pop();
                        nearest_points_pqueue.push({current_point_distance,{itr->GetX(),itr->GetY()}});
                    }
                }
            }
            while(!nearest_points_pqueue.empty()){
                close_x = nearest_points_pqueue.top().second.first;
                close_y = nearest_points_pqueue.top().second.second;
                nearest_points.push_back({close_x,close_y});
                near_points_file << close_x<<" "<<close_y<<_red<<endl;
                nearest_points_pqueue.pop();
            }
            near_points_file << target_point.GetX()<<" "<<target_point.GetY()<<_yellow;
            near_points_file.close();       
            return true;
        }
    private:
        typedef vector<Point> Points;
        Points _points;
        string _blue = " 22";
        string _red = " 55";
        string _yellow = " 100";

};

int main(int argc, const char * argv[]) {
    const int RANDOM_POINTS_MAX_VALUE = 100; // Nilai maksimal dari titik yang akan dihasilkan secara random
    const int RANDOM_POINTS_COUNT = 1000; // Nilai jumlah titik yang akan dihasilkan secara random
    std::mt19937 eng; // Deklarasi variabel eng untuk menyimpan nilai random 
    eng.seed(std::random_device{}());
    // Membuat distribusi random untuk nilai X dan Y dari titik yang akan dihasilkan secara random
    std::uniform_int_distribution<> dist(-RANDOM_POINTS_MAX_VALUE, RANDOM_POINTS_MAX_VALUE);
    int target_x;
    int target_y;
    int K;
    // berikan warna pada terminal
    cout << "\033[1;32m" << "====================================================="<< endl;
    cout << "Masukkan nilai Target Point X(-100 s.d. 100): ";
    cin >> target_x; 
    cout << "Masukkan nilai Target Point Y(-100 s.d. 100): ";
    cin >> target_y;

    cout << "Enter the Value of K(1- 1000): ";
    cin >> K; 
    cout << "\033[0m"; 

    NearestPointsContainer points_container;
    for(int i = 0; i < RANDOM_POINTS_COUNT; i++) {
        int random_x = dist(eng); //Melakukan generate nilai random untuk X value of (X,Y)
        int random_y = dist(eng); //Melakukan generate nilai random untuk Y value of (X,Y)
        points_container.addPoints(Point(random_x,random_y)); // Menambahkan titik ke dalam container
    }
    vector<Point> nearest_points;
    points_container.getNearestPoints(Point(target_x,target_y),nearest_points,K);
    cout << "\033[1;33m"; 
    int i=1; // Deklarasi untuk menampilkan nomor titik terdekat
    for(vector<Point>::iterator itr = nearest_points.begin(); itr != nearest_points.end(); ++itr){
        cout<< "Poin terdekat ke-" << i << " : " << itr->GetX()<<" "<<itr->GetY()<<endl;
        i++;
    }
    cout << "\033[0m";
    cout<<endl;
    return 0;
}