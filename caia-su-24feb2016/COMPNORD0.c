#include "dx.h"
void COMPNORD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V8=0,RES=0;
int NA,NB,T,P,X,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11132;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==497&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NA=pile[v[22]]; NB=pile[v[22]+1]; T=pile[v[22]+2]; P=pile[v[22]+3]; X=pile[v[22]+4]; Y=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=x[jvj+15]=incon;
pile[v[22]]=944; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(944,X,jvj+2)*/
x[jvj+22]=x[jvj+2] ;z[jvj+22]=z[jvj+2];
l1:if((x[jvj+22]<=0)) goto l3;
x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4!=NA)) goto l2;
pile[v[22]]=1078; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1078,jvj+3,jvj+4)*/
pile[v[22]]=860; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+4,jvj+5)*/
if((x[jvj+5]!=530)) goto l2;
x[jvj+14]=x[jvj+3] ;z[jvj+14]=z[jvj+3];
l3:if((x[jvj+2]<=0)) goto l7;
x[jvj+6]=s[x[jvj+2]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+2];
pile[v[22]]=683; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+6,V8)*/
V8=pile[WZ2]; 
if((V8!=NB)) goto l4;
pile[v[22]]=1078; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1078,jvj+6,jvj+7)*/
pile[v[22]]=860; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+7,jvj+8)*/
if((x[jvj+8]!=530)) goto l4;
x[jvj+15]=x[jvj+6] ;z[jvj+15]=z[jvj+6];
l7:if(x[jvj+14]!=incon) goto l8;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; return;
l2:x[jvj+22]=t[x[jvj+22]];
goto l1;
l4:x[jvj+2]=t[x[jvj+2]];
goto l3;
l6:x[jvj+9]=s[x[jvj+23]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+23];
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,416,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+18,20,158,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[599])( );     /*QUADRI12(101,jvj+14,140,(-598),jvj+19,jvj+16)*/
pile[v[22]]=0; pile[WZ1]=416; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(0,416,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20,158,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+21; pile[WZ5]=jvj+17; 
(*f[599])( );     /*QUADRI12(101,jvj+15,140,(-591),jvj+21,jvj+17)*/
pile[v[22]]=11132; pile[WZ1]=158; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(11132,158,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=128; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+10,128,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+10,128,jvj+17)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[30])( );if(v[102]) goto l11;     /*EVL0(jvj+9,jvj+10,RES)*/
RES=pile[WZ2]; 
if((RES!=135)) goto l11;
x[jvj+23]=t[x[jvj+23]];
l5:if((x[jvj+23]>0)) goto l6;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; pile[WZ3]=T; pile[WZ4]=Y; 
(*f[845])( );     /*COMPNORDA0(jvj+11,jvj+14,jvj+15,T,Y)*/
l11:x[jvj+13]=t[x[jvj+13]];
l10:if((x[jvj+13]<=0)) goto l12;
x[jvj+11]=s[x[jvj+13]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+13];
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+12)*/
x[jvj+23]=x[jvj+12] ;z[jvj+23]=z[jvj+12];
goto l5;
l8:if(x[jvj+15]!=incon) goto l9;
goto l12;
l9:pile[v[22]]=226; pile[WZ1]=P; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(226,P,jvj+13)*/
goto l10;
}
