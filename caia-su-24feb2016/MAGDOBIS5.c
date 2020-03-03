#include "dx.h"
void MAGDOBIS5(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int T=0,V4=0,TT=0,V5=0,I=0,V2=0,V3=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=26210;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2890&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
T=0;
l2:pile[v[22]]=T; pile[WZ1]=(-7562); 
(*f[201])( );if(v[102]) goto l1;     /*FCOEFF0(T,(-7562),V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l1;
TT=0;
l4:pile[v[22]]=TT; pile[WZ1]=(-7563); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(TT,(-7563),V5)*/
V5=pile[WZ2]; 
if((V5!=0)) goto l3;
I=0;
l6:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(1,I,(-630),V2)*/
V2=pile[WZ3]; 
pile[v[22]]=2; 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(2,I,(-630),V3)*/
V3=pile[WZ3]; 
if((V2!=V3)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+4)*/
pile[WZ3]=26; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+7)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+11)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=T; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,T,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=103; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+8,jvj+9,103,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+10,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2863); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2863),jvj+20)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+22; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+22,jvj+21,jvj+19)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=TT; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,TT,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+6)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l5:I++;
if((I<=7)) goto l6;
l7:x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:T++;
if((T<=3)) goto l2;
goto l7;
l3:TT++;
if((TT<=3)) goto l4;
goto l7;
}
