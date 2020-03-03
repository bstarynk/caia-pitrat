#include "dx.h"
void ISO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V25=0,F=0,V=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=10075;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1845&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=135; pile[WZ1]=TL; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(135,TL,jvj+20)*/
x[jvj+19]=0 ;z[jvj+19]=0;
pile[v[22]]=302; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(302,TL,jvj+10)*/
x[jvj+11]=d[30];z[jvj+11]=0;
x[jvj+28]=x[jvj+10] ;z[jvj+28]=z[jvj+10];
l5:if((x[jvj+28]>0)) goto l6;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+21; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=255; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,255,jvj+25)*/
pile[v[22]]=jvj+21; pile[WZ1]=128; pile[WZ2]=jvj+24; 
(*f[300])( );     /*TRI10(jvj+21,128,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,73,111,jvj+25,jvj+24,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=102; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+23,102,jvj+22)*/
pile[v[22]]=135; pile[WZ1]=jvj+22; pile[WZ2]=jvj+20; 
(*f[1380])( );     /*RECZ0(135,jvj+22,jvj+20)*/
pile[WZ1]=TL; pile[WZ2]=jvj+22; 
(*f[1380])( );     /*RECZ0(135,TL,jvj+22)*/
pile[v[22]]=TL; pile[WZ1]=302; 
(*f[36])( );     /*PLUSC0(TL,302,jvj+22)*/
pile[WZ1]=287; 
(*f[35])( );     /*CHGC1(TL,287,jvj+22)*/
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+26]=t[x[jvj+26]];
l1:if((x[jvj+26]<=0)) goto l9;
x[jvj+3]=s[x[jvj+26]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+26];
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+3,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=73)) goto l2;
pile[v[22]]=128; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(128,jvj+4,jvj+6)*/
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=255)) goto l2;
x[jvj+27]=x[jvj+6] ;z[jvj+27]=z[jvj+6];
l3:if((x[jvj+27]<=0)) goto l2;
x[jvj+9]=s[x[jvj+27]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+27];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+9,V14)*/
V14=pile[WZ2]; 
if((V==V14)) goto l7;
l4:x[jvj+27]=t[x[jvj+27]];
goto l3;
l6:x[jvj+12]=s[x[jvj+28]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+28];
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+12,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+13,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+15,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+13,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+16,jvj+17)*/
F=x[jvj+17];
if(F!=225&&F!=178) goto l7;
V=V25;
pile[v[22]]=223; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(223,TL,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==V) goto l9;
x[jvj+26]=x[jvj+10] ;z[jvj+26]=z[jvj+10];
goto l1;
l9:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+18)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[196])( );     /*PLUF0(jvj+11,jvj+18,jvj+19)*/
l7:x[jvj+28]=t[x[jvj+28]];
goto l5;
}
