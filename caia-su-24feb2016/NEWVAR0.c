#include "dx.h"
void NEWVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V10=0,V12=0,V=0,WW=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11833;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3798&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(322,jvj+2,W)*/
W=pile[WZ2]; 
V10=W;
V12=W+1;
V=V10;
pile[v[22]]=jvj+2; pile[WZ1]=322; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+2,322,V12)*/
WW=V10;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=833; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,833,jvj+28)*/
pile[WZ3]=828; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,828,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=103; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=61; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(100,61,102,jvj+28,jvj+27,jvj+25)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=WW; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=436; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,436,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=111; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+22,jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+25,jvj+24,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+2,448,jvj+3)*/
pile[WZ1]=322; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+2,322,V12)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7501); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7501),jvj+16)*/
pile[WZ3]=WW; pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,WW,jvj+14)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(128,100,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=460; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,460,jvj+12)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=436; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+8,436,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=160; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+9,jvj+10,160,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=111; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,111,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,454,102,jvj+16,jvj+15,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=498; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+5,498,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=473; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,1,473,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ2]=472; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,1,472,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=480; pile[WZ2]=277; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,480,277,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=0; pile[WZ2]=158; pile[WZ3]=41; pile[WZ4]=jvj+20; pile[WZ5]=jvj+7; 
(*f[725])( );     /*QUADRI14(130,0,158,41,jvj+20,jvj+7)*/
z[jvj+7]=(-1);
x[jvj+4]=d[140];z[jvj+4]=0;
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=454; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+2,454,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=480; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+5,480,jvj+7)*/
pile[WZ1]=1348; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+5,1348,68)*/
pile[WZ1]=473; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+5,473,1)*/
pile[WZ1]=472; 
(*f[43])( );     /*CHGC2(jvj+5,472,1)*/
pile[v[22]]=jvj+7; pile[WZ1]=R; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+7,R)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l2:x[jvj+29]=s[x[jvj+4]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=jvj+29; pile[WZ4]=jvj+6; 
(*f[567])( );     /*QUADRI11(117,1,218,jvj+29,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=925; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+5,925,jvj+6)*/
x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
}
