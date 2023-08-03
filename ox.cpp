#include<bits/stdc++.h>
using namespace std ;


int main(){
    bool space[3][3] ={ {false,false,false,} , {false,false,false,} , {false,false,false,} } ;
    char xy[3][3] ;
    bool ox = 1  ;   
    char a00= '.',a10= '.',a20= '.',a01= '.',a11= '.',a21= '.',a02= '.',a12= '.',a22= '.' ;                                                                         
    int x,y ;
    bool win = 0 ;
    int t = 0 ;
    system("cls") ;
    cout<<"WWelcome to \"OOXX\" \n" ;   
    system("pause") ;
    system("cls") ;
    while (true){
        cout<<"          |          |     \n"           ;
        cout<<"    "<<a02<<"     |    "<<a12<<"     |    "<<a22<<"    \n"        ;
        cout<<"          |          |          \n"           ;
        cout<<"  (0,2)   |  (1,2)   |  (2,2)   \n"           ;
        cout<<"__________|__________|__________\n"           ;
        cout<<"          |          |          \n"           ;
        cout<<"    "<<a01<<"     |    "<<a11<<"     |    "<<a21<<"    \n"        ;
        cout<<"          |          |          \n"           ;
        cout<<"  (0,1)   |  (1,1)   |  (2,1)   \n"           ;
        cout<<"__________|__________|__________\n"           ;
        cout<<"          |          |          \n"           ;
        cout<<"    "<<a00<<"     |    "<<a10<<"     |    "<<a20<<"    \n"        ;
        cout<<"          |          |          \n"           ;
        cout<<"  (0,0)   |  (1,0)   |  (2,0)   \n"           ;
        cout<<"\n" ;

        if( a00=='O'&&a10=='O'&&a20=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a01=='O'&&a11=='O'&&a21=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if( a02=='O'&&a12=='O'&&a22=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a00=='O'&&a01=='O'&&a02=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a10=='O'&&a11=='O'&&a12=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a20=='O'&&a21=='O'&&a22=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a00=='O'&&a11=='O'&&a22=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        else if(a02=='O'&&a11=='O'&&a20=='O'){
            cout<<" \"O\" win!\n" ;
            break ; 
        }
        if(a00=='X'&&a10=='X'&&a20=='X' ){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a01=='X'&&a11=='X'&&a21=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a02=='X'&&a12=='X'&&a22=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a00=='X'&&a01=='X'&&a02=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a10=='X'&&a11=='X'&&a12=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a20=='X'&&a21=='X'&&a22=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a00=='X'&&a11=='X'&&a22=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(a02=='X'&&a11=='X'&&a20=='X'){
            cout<<" \"X\" win!\n" ;
            break ; 
        }
        else if(space[0][0]==1&&space[1][0]==1&&space[2][0]==1&&space[0][1]==1&&space[1][1]==1&&space[2][1]==1&&space[0][2]==1&&space[1][2]==1&&space[2][2]==1){
            cout<<"Tie!\n" ;
            break ;
        }

        cout<<"Input x y : " ;
        cin>>x>>y ;
        if(x<0||x>2||y<0||y>2){
            system("cls") ;
            cout<<"Stupid\n" ;
            break ; 

        }
        if(space[x][y]){
            system("cls") ;
            cout<<"("<<x<<","<<y<<") is occupied\n" ;
            continue ;
        }
        else{
            if(ox){
                space[x][y]  = true ;
                if(x==0&&y==0){
                    a00 = 'O' ;
                }
                if(x==1&&y==0){
                    a10 = 'O' ;
                }
                if(x==2&&y==0){
                    a20 = 'O' ;
                }
                if(x==0&&y==1){
                    a01 = 'O' ;
                }
                if(x==1&&y==1){
                    a11 = 'O' ;
                }
                
                if(x==2&&y==1){
                    a21 = 'O' ;
                }
                if(x==0&&y==2){
                    a02 = 'O' ;
                }
        
                if(x==1&&y==2){
                    a12 = 'O' ;
                }
                if(x==2&&y==2){
                    a22 = 'O' ;
                }
            ox = 0 ;
            }
            else{
                space[x][y]  = true ;
                if(x==0&&y==0){
                    a00 = 'X' ;
                }
                if(x==1&&y==0){
                    a10 = 'X' ;
                }
                if(x==2&&y==0){
                    a20 = 'X' ;
                }
                if(x==0&&y==1){
                    a01 = 'X' ;
                }
                if(x==1&&y==1){
                    a11 = 'X' ;
                }
                if(x==2&&y==1){
                    a21 = 'X' ;
                }
                if(x==0&&y==2){
                    a02 = 'X' ;
                }
                if(x==1&&y==2){
                    a12 = 'X' ;
                }
                if(x==2&&y==2){
                    a22 = 'X' ;
                }
                ox = 1 ;
            }
        }
        system("cls") ;
    }
    system("pause") ;
}