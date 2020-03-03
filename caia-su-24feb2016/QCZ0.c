#include "dx.h"
void QCZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V24=0,V23=0,V14=0,V13=0,V19=0,V20=0,V17=0,V18=0,V3=0,V5=0,V6=0,V4=0,V7=0,V9=0,V10=0,V11=0,V8=0,V2=0,L=0,V29=0;
int I,E,P,Y;
int J;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=11285;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2217&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; E=pile[v[22]+1]; P=pile[v[22]+2]; Y=pile[v[22]+3]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=117; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,Y,V23)*/
V23=pile[WZ2]; 
if((P>=V23)) goto l1;
V25=P+V23;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(515,Y,V24)*/
V24=pile[WZ2]; 
if((V24<=V25)) goto l1;
l2:V14=P+V23;
pile[v[22]]=515; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,Y,V13)*/
V13=pile[WZ2]; 
if((V13<=V14)) goto l3;
pile[v[22]]=322; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(322,Y,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=241; pile[WZ1]=87; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,87,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=763; pile[WZ1]=E; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,E,jvj+2)*/
V17=P+1;
if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
V18=x[jvj+3];
pile[WZ2]=V18; 
(*f[134])( );     /*OTA0(763,E,V18)*/
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V3,40,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V5; 
(*f[2077])( );     /*SPR0(jvj+3,V5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V6,41,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V4,32,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V7; 
(*f[64])( );     /*SRA2((-8107),V7,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V9,91,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V10; 
(*f[99])( );     /*SPM0(V19,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V11,93,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=V8; 
(*f[64])( );     /*SRA2(V20,V8,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[1803])( );     /*SPLL0(V2,L)*/
L=pile[WZ1]; 
pile[v[22]]=350; pile[WZ1]=Y; pile[WZ2]=V18; 
(*f[134])( );     /*OTA0(350,Y,V18)*/
pile[v[22]]=Y; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(Y,510,1)*/
pile[WZ1]=515; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(Y,515,(-1))*/
pile[v[22]]=L; pile[WZ1]=E; pile[WZ2]=V17; pile[WZ3]=Y; 
(*f[2217])( );     /*QCZ0(L,E,V17,Y,J)*/
J=pile[WZ4]; 
l4:pile[v[22]]=350; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(350,Y,jvj+4)*/
if((x[jvj+4]!=0)) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
V29=x[Y];
pile[v[22]]=1305; pile[WZ1]=jvj+5; pile[WZ2]=V29; 
(*f[134])( );     /*OTA0(1305,jvj+5,V29)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=J; return;
l1:pile[v[22]]=I; pile[WZ1]=E; pile[WZ2]=Y; 
(*f[2216])( );     /*QCX0(I,E,Y,J)*/
J=pile[WZ3]; 
goto l4;
l3:J=I;
goto l4;
}
