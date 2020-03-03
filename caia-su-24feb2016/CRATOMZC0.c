#include "dx.h"
void CRATOMZC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,W=0,V40=0;
int N,V,MB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11905;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1515&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; V=pile[v[22]+1]; MB=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=80; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(80,N,jvj+3)*/
if((x[jvj+3]!=68)) goto l1;
pile[v[22]]=N; pile[WZ1]=80; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(N,80,12)*/
l1:pile[v[22]]=80; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(80,N,jvj+2)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+4]=x[N] ;z[jvj+4]=z[N];
pile[v[22]]=N; pile[WZ1]=80; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(N,80,68)*/
x[jvj+33]=1688 ;z[jvj+33]=1688;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+4; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(jvj+33,jvj+4,jvj+34)*/
l8:if((x[jvj+34]>0)) goto l9;
pile[v[22]]=jvj+4; 
(*f[1239])( );if(v[102]) goto l3;     /*NOUVAR0(jvj+4,W)*/
W=pile[WZ1]; 
pile[v[22]]=MB; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(MB,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1725; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,1725,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+20)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=509; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,509,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=103; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+23,jvj+22,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+19; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+19,jvj+13)*/
pile[v[22]]=jvj+4; pile[WZ1]=1688; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+4,1688,jvj+13)*/
pile[WZ1]=80; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+4,80,67)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+24)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+27)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,jvj+12,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+27; pile[WZ4]=jvj+26; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+27,jvj+26,jvj+14)*/
pile[v[22]]=jvj+4; pile[WZ1]=1688; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+4,1688,jvj+14)*/
l3:pile[v[22]]=1688; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1688,jvj+4,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1604; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,1604,jvj+28)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+32)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1814; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,1814,jvj+30)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+32,jvj+31,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=1688; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+4,1688,jvj+15)*/
goto l7;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=1604)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+6,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+9,V11)*/
V11=pile[WZ2]; 
if((V!=V11)) goto l6;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+6,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==1814)) goto l7;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l9:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=MB; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[760])( );     /*MEMEX0(MB,jvj+35,jvj+36)*/
if((x[jvj+36]==135)) goto l11;
l10:x[jvj+34]=t[x[jvj+34]];
goto l8;
l11:V40=x[jvj+35];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+4; pile[WZ2]=V40; 
(*f[134])( );     /*OTA0(jvj+33,jvj+4,V40)*/
goto l10;
}
