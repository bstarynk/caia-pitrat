#include "dx.h"
void CREKAKURO2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V5=0,L=0,V13=0,V3=0,V8=0,J=0,V9=0,M=0,V15=0,V10=0,V16=0;
int NK;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=26126;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2506&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NK=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=0 ;z[jvj+7]=0;
I=1;
l7:if((I<=NK)) goto l11;
x[NNNE]=x[jvj+7] ;z[NNNE]=z[jvj+7];
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+2,V13)*/
V13=pile[WZ2]; 
V3=V13;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
M=1;
l5:if((M<=V3)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+5,V15)*/
V15=pile[WZ2]; 
V10=V15;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l9;     /*LONGUEUR0(I,(-620),V8)*/
V8=pile[WZ2]; 
J=1;
l3:if((J>V8)) goto l9;
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(J,I,(-620),V9)*/
V9=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V9; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,V9,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+11,jvj+10,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l4:J++;
goto l3;
l6:pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=M; 
(*f[186])( );     /*BTC0(jvj+5,117,M)*/
M++;
goto l5;
l9:pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+6)*/
V16=V10+1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+12)*/
pile[WZ3]=27; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,27,jvj+15)*/
pile[WZ3]=485; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+21,jvj+6,107,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+22,22,100,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V16; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V16,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+13)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+28)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+27; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+30,jvj+29,jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+14)*/
pile[WZ2]=111; pile[WZ3]=jvj+12; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+12,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=107; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+13)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+8,107,jvj+14)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[522])( );     /*PLUB2(jvj+7,jvj+8)*/
l8:I++;
goto l7;
l11:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(I,(-620),V5)*/
V5=pile[WZ2]; 
L=1;
l1:if((L>V5)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
L++;
goto l1;
}
