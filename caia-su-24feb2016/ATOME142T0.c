#include "dx.h"
void ATOME142T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,K=0,V19=0,V6=0,V18=0,V5=0,V=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=20142;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3706&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1280)) goto l2;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V12)*/
V12=pile[WZ2]; 
if((V12!=2)) goto l2;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,R,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+8,K)*/
K=pile[WZ2]; 
if((K<=0)) goto l2;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+9,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,R,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+10,jvj+3)*/
pile[v[22]]=1347; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1347,jvj+3,jvj+4)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=K; pile[WZ1]=2; 
(*f[1006])( );if(v[102]) goto l2;     /*POWER0(K,2,V6)*/
V6=pile[WZ2]; 
V18=K+1;
pile[v[22]]=V18; 
(*f[1006])( );if(v[102]) goto l2;     /*POWER0(V18,2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+18)*/
pile[WZ3]=486; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V5; pile[WZ4]=jvj+25; 
(*f[192])( );     /*QUADRI4(100,41,130,V5,jvj+25)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7141); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7141),jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+19,107,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+20)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+18; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+18,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=107; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+12,107,jvj+20)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+3; pile[WZ1]=R; pile[WZ2]=jvj+12; pile[WZ3]=jvj+13; 
(*f[3707])( );if(v[102]) goto l2;     /*CRETROUVERA0(jvj+3,R,jvj+12,jvj+13,V)*/
V=pile[WZ4]; 
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+14,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+23; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+11,jvj+23,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+31)*/
pile[v[22]]=V19; pile[WZ1]=858; pile[WZ2]=jvj+27; 
(*f[46])( );     /*TRI0(V19,858,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,v[13],642,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=3706; pile[WZ2]=246; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,3706,246,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=20142; pile[WZ2]=218; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,20142,218,jvj+30)*/
pile[v[22]]=jvj+31; pile[WZ1]=(-20); pile[WZ2]=jvj+30; pile[WZ3]=159; pile[WZ4]=jvj+32; 
(*f[298])( );     /*TRIENS1(jvj+31,(-20),jvj+30,159,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+32,1,158,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+3; 
(*f[3708])( );     /*CRT0(jvj+15,jvj+3)*/
pile[v[22]]=jvj+16; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+16,1070,68)*/
pile[WZ1]=1569; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+16,1569,67)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V19; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V19,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3706; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3706,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20142; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20142,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1296])( );     /*NOUVCONTR0(jvj+16,jvj+17)*/
goto l2;
}
