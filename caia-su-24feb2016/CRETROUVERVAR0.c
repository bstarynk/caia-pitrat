#include "dx.h"
void CRETROUVERVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V5=0,V7=0,WW=0,AA=0,BB=0;
int D,Q;
int ND,V;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=11520;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4081&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; Q=pile[v[22]+1]; ND=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(322,jvj+2,W)*/
W=pile[WZ2]; 
V5=W;
V7=W+1;
V=V5;
pile[v[22]]=jvj+2; pile[WZ1]=322; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+2,322,V7)*/
pile[v[22]]=Q; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(Q,jvj+3)*/
WW=V5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=436; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,436,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=111; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,111,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+29; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+3,jvj+29,jvj+4)*/
pile[v[22]]=jvj+2; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+2,448,jvj+4)*/
pile[WZ1]=322; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+2,322,V7)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7501); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7501),jvj+21)*/
pile[WZ3]=WW; pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+19)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(128,100,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=460; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,460,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=436; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,436,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=160; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,160,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=111; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+16,jvj+17,111,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=103; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+18,jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,454,102,jvj+21,jvj+20,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=498; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+8,498,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=473; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,1,473,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ2]=472; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,1,472,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=480; pile[WZ2]=277; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,480,277,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=0; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+25; pile[WZ5]=ND; 
(*f[725])( );     /*QUADRI14(130,0,158,41,jvj+25,ND)*/
z[ND]=(-1);
x[jvj+7]=d[140];z[jvj+7]=0;
l3:if((x[jvj+7]>0)) goto l4;
if((x[D]==250)) goto l5;
pile[v[22]]=1369; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1369,D,jvj+5)*/
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=D; pile[WZ1]=1366; pile[WZ2]=ND; 
(*f[36])( );     /*PLUSC0(D,1366,ND)*/
pile[v[22]]=ND; pile[WZ1]=1369; pile[WZ2]=D; 
(*f[36])( );     /*PLUSC0(ND,1369,D)*/
l5:pile[v[22]]=jvj+2; pile[WZ1]=454; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,454,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=480; pile[WZ2]=ND; 
(*f[36])( );     /*PLUSC0(jvj+8,480,ND)*/
pile[WZ1]=1348; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+8,1348,68)*/
pile[WZ1]=473; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+8,473,1)*/
pile[WZ1]=472; 
(*f[43])( );     /*CHGC2(jvj+8,472,1)*/
pile[v[22]]=100; pile[WZ1]=Q; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,Q,jvj+12)*/
if((x[jvj+12]!=61)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,Q,jvj+10)*/
pile[v[22]]=103; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,Q,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+10,AA)*/
AA=pile[WZ2]; 
pile[v[22]]=ND; pile[WZ1]=280; pile[WZ2]=AA; 
(*f[43])( );     /*CHGC2(ND,280,AA)*/
l6:pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+11,BB)*/
BB=pile[WZ2]; 
pile[v[22]]=ND; pile[WZ1]=164; pile[WZ2]=BB; 
(*f[43])( );     /*CHGC2(ND,164,BB)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; pile[v[22]+3]=V; v[102]=0;return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=1366; pile[WZ2]=ND; 
(*f[36])( );     /*PLUSC0(jvj+6,1366,ND)*/
x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+30]=s[x[jvj+7]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=jvj+30; pile[WZ4]=jvj+9; 
(*f[567])( );     /*QUADRI11(117,1,218,jvj+30,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=925; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+8,925,jvj+9)*/
x[jvj+7]=t[x[jvj+7]];
goto l3;
l8:x[ND]=V=incon;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
