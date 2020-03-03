#include "dx.h"
void CRELOGIQUE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V3=0;
int NE,P;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=26136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2564&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NE=pile[v[22]]; P=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=1;
l1:if((I<=NE)) goto l2;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:V3=I+1;
l3:if((V3<=P)) goto l5;
I++;
goto l1;
l5:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+4)*/
pile[WZ3]=26; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+8)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8197); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8197),jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+15,jvj+14,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8197); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8197),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+10)*/
pile[v[22]]=jvj+8; pile[WZ1]=111; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,111,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=103; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+9,jvj+10,103,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+11,jvj+5)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2889); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2889),jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+26,jvj+25,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2889); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2889),jvj+27)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+29; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+29)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+29,jvj+28,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+6)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+30)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8198); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8198),jvj+35)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+37,jvj+36,jvj+34)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8198); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8198),jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V3; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V3,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+40,jvj+39,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=111; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,111,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=103; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,103,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+7; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+7)*/
pile[WZ2]=111; pile[WZ3]=jvj+4; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+4,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=107; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+5)*/
pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+6)*/
pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,107,jvj+7)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
V3++;
goto l3;
}
