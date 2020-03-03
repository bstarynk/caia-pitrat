#include "dx.h"
void KRYPT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,I=0,J=0,V5=0,V6=0,V10=0;
int NC,NL;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=26003;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2230&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NC=pile[v[22]]; NL=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
J=1;
l4:if((J<=NC)) goto l6;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l2;     /*FMATRICE0(J,I,(-598),V5)*/
V5=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+7)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V5; pile[WZ4]=jvj+9; 
(*f[272])( );     /*QUADRI9(100,89,162,V5,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+9,jvj+8,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l2:I++;
l1:if((I<=V9)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
V10=J-1;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ3]=485; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+20)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+20,jvj+19,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+23; 
(*f[301])( );     /*TRI11(jvj+22,jvj+4,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+23,22,100,jvj+17)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=107; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+14,107,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+27)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V6; pile[WZ4]=jvj+29; 
(*f[272])( );     /*QUADRI9(100,89,162,V6,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+29,jvj+28,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=10; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,10,jvj+31)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-601); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+33)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+35; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+35,jvj+34,jvj+32)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+30; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+30,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+26)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
l5:J++;
goto l4;
l6:pile[v[22]]=J; pile[WZ1]=NL; pile[WZ2]=(-598); 
(*f[202])( );if(v[102]) goto l5;     /*FMATRICE0(J,NL,(-598),V6)*/
V6=pile[WZ3]; 
x[jvj+2]=0 ;z[jvj+2]=0;
V9=NL-1;
I=1;
goto l1;
}
