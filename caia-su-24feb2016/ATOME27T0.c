#include "dx.h"
void ATOME27T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20027;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3039&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=663; pile[WZ1]=N; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(663,N,jvj+13)*/
if((x[jvj+13]!=68)) goto l6;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+14,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=N; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(480,N,jvj+15)*/
pile[v[22]]=100; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,N,jvj+2)*/
if((x[jvj+2]!=454)) goto l5;
pile[v[22]]=160; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,N,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=128)) goto l5;
pile[v[22]]=128; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+5)*/
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==464)) goto l6;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l4:x[jvj+11]=s[x[jvj+26]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+26];
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V15,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3039; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3039,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+19; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+19,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=365; pile[WZ2]=jvj+10; pile[WZ3]=jvj+11; 
(*f[1753])( );     /*LIER1(jvj+9,365,jvj+10,jvj+11)*/
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V15,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3039; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3039,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+22; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+22,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=202; pile[WZ2]=jvj+11; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+12,202,jvj+11,68)*/
x[jvj+26]=t[x[jvj+26]];
l3:if((x[jvj+26]>0)) goto l4;
pile[v[22]]=V15; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V15,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3039; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3039,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20027; pile[WZ4]=jvj+25; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20027,jvj+25,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=202; pile[WZ2]=jvj+10; pile[WZ3]=68; 
(*f[3040])( );     /*VOBJ0(jvj+16,202,jvj+10,68)*/
x[jvj+15]=t[x[jvj+15]];
l5:if((x[jvj+15]<=0)) goto l6;
x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=481; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(481,N,jvj+8)*/
x[jvj+26]=x[jvj+8] ;z[jvj+26]=z[jvj+8];
goto l3;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
