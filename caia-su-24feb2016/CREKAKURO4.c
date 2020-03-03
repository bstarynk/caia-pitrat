#include "dx.h"
void CREKAKURO4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V6=0,L=0,V20=0,V4=0,V9=0,J=0,V10=0,V13=0,JJ=0,V14=0,M=0,V23=0,V15=0,V24=0,V25=0,V17=0,V26=0,V27=0;
int NK;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=47;
x[jvj+1]=26126;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2508&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NK=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=0 ;z[jvj+11]=0;
I=1;
l11:if((I<=NK)) goto l16;
x[NNNE]=x[jvj+11] ;z[NNNE]=z[jvj+11];
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+2,V20)*/
V20=pile[WZ2]; 
V4=V20;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(0,117,jvj+7)*/
M=1;
l7:if((M<=V4)) goto l8;
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+7,V23)*/
V23=pile[WZ2]; 
V15=V23;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
V24=10-V4;
l9:if((V24<=9)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+8,V25)*/
V25=pile[WZ2]; 
V17=V25;
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l13;     /*LONGUEUR0(I,(-620),V9)*/
V9=pile[WZ2]; 
J=1;
l3:if((J>V9)) goto l13;
pile[v[22]]=J; pile[WZ1]=I; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l4;     /*FTAB0(J,I,(-620),V10)*/
V10=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+13)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V10; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(100,41,130,V10,jvj+15)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+15,jvj+14,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l4:J++;
goto l3;
l8:pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=M; 
(*f[186])( );     /*BTC0(jvj+7,117,M)*/
M++;
goto l7;
l10:pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=V24; 
(*f[186])( );     /*BTC0(jvj+8,117,V24)*/
V24++;
goto l9;
l13:pile[v[22]]=jvj+3; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+9)*/
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l14;     /*LONGUEUR0(I,(-620),V13)*/
V13=pile[WZ2]; 
JJ=1;
l5:if((JJ>V13)) goto l14;
pile[v[22]]=JJ; pile[WZ1]=I; pile[WZ2]=(-620); 
(*f[203])( );if(v[102]) goto l6;     /*FTAB0(JJ,I,(-620),V14)*/
V14=pile[WZ3]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V14; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,V14,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
l6:JJ++;
goto l5;
l14:pile[v[22]]=jvj+5; pile[WZ1]=jvj+10; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+10)*/
V26=V15+1;
V27=V17-1;
x[jvj+30]=x[jvj+9] ;z[jvj+30]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+19)*/
pile[WZ3]=30; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+23)*/
pile[WZ3]=485; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=107; pile[WZ3]=jvj+31; 
(*f[301])( );     /*TRI11(jvj+29,jvj+30,107,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+31,22,100,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V26; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V26,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+24,jvj+25,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+20)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+32)*/
pile[WZ3]=485; pile[WZ4]=jvj+37; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=111; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+37,111,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+10; pile[WZ2]=107; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+10,107,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+39,22,100,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+36; pile[WZ4]=jvj+35; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+36,jvj+35,jvj+21)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+47; pile[WZ4]=jvj+46; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+47,jvj+46,jvj+44)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+42)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,103,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+44,jvj+43,jvj+22)*/
pile[WZ2]=111; pile[WZ3]=jvj+19; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+19,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+22)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[522])( );     /*PLUB2(jvj+11,jvj+12)*/
l12:I++;
goto l11;
l16:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
pile[v[22]]=I; pile[WZ1]=(-620); 
(*f[3979])( );if(v[102]) goto l2;     /*LONGUEUR0(I,(-620),V6)*/
V6=pile[WZ2]; 
L=1;
l1:if((L>V6)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
L++;
goto l1;
}
