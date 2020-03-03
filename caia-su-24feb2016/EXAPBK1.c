#include "dx.h"
void EXAPBK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V13=0,P=0,V22=0,V21=0;
int E,EC,T;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=11225;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1195&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; T=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+17]=x[jvj+22] ;z[jvj+17]=z[jvj+22];
x[jvj+24]=x[E] ;z[jvj+24]=z[E];
l13:if((x[jvj+24]>0)) goto l14;
pile[v[22]]=jvj+17; pile[WZ1]=893; pile[WZ2]=954; pile[WZ3]=T; pile[WZ4]=75; 
(*f[848])( );     /*EXAPBMSG0(jvj+17,893,954,T,75)*/
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=s[x[jvj+23]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+23];
pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(935,jvj+3,jvj+4)*/
if((x[jvj+4]!=547)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=EC; pile[WZ2]=jvj+5; 
(*f[505])( );     /*EVCOND0(jvj+3,EC,jvj+5)*/
if((x[jvj+5]==135)) goto l4;
l3:x[jvj+23]=t[x[jvj+23]];
l1:if((x[jvj+23]>0)) goto l2;
V3=67;
l16:P=V3;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+12; 
(*f[378])( );     /*CPI0(jvj+15,jvj+12)*/
x[jvj+26]=x[jvj+14] ;z[jvj+26]=z[jvj+14];
l17:if((x[jvj+26]<=0)) goto l15;
x[jvj+6]=s[x[jvj+26]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+26];
V6=incon;
if((P==67)) goto l5;
if((P!=68)) goto l6;
pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(935,jvj+6,jvj+8)*/
if((x[jvj+8]!=936)) goto l6;
V6=45;
l6:pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,jvj+6,jvj+9)*/
if((x[jvj+9]!=493)) goto l7;
V6=43;
l19:pile[v[22]]=jvj+6; pile[WZ1]=EC; pile[WZ2]=jvj+16; 
(*f[505])( );     /*EVCOND0(jvj+6,EC,jvj+16)*/
if((x[jvj+16]==135)) goto l11;
l18:x[jvj+26]=t[x[jvj+26]];
goto l17;
l4:V3=68;
goto l16;
l5:pile[v[22]]=935; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(935,jvj+6,jvj+7)*/
if((x[jvj+7]!=936)) goto l6;
V6=(-89);
goto l6;
l7:if(V6==incon) goto l8;
goto l19;
l8:V6=32;
goto l19;
l10:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(jvj+11,jvj+6,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(jvj+12,jvj+11,V13)*/
l12:x[jvj+10]=t[x[jvj+10]];
l9:if((x[jvj+10]>0)) goto l10;
pile[v[22]]=jvj+12; pile[WZ1]=331; pile[WZ2]=V6; 
(*f[69])( );     /*CHGC3(jvj+12,331,V6)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+12)*/
goto l18;
l11:x[jvj+10]=d[54];z[jvj+10]=0;
goto l9;
l14:x[jvj+15]=s[x[jvj+24]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+24];
pile[v[22]]=109; pile[WZ1]=jvj+15; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(109,jvj+15,jvj+18)*/
pile[v[22]]=983; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(983,jvj+18,jvj+19)*/
pile[v[22]]=878; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(878,jvj+19,jvj+20)*/
l21:if((x[jvj+20]<=0)) goto l15;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+21,V22)*/
V22=pile[WZ2]; 
pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(163,jvj+15,V21)*/
V21=pile[WZ2]; 
if((V22==V21)) goto l22;
x[jvj+20]=t[x[jvj+20]];
goto l21;
l15:x[jvj+24]=t[x[jvj+24]];
goto l13;
l22:x[jvj+25]=x[jvj+21] ;z[jvj+25]=z[jvj+21];
x[jvj+13]=x[jvj+25] ;z[jvj+13]=z[jvj+25];
pile[v[22]]=944; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(944,jvj+13,jvj+14)*/
V3=incon;
x[jvj+23]=x[jvj+14] ;z[jvj+23]=z[jvj+14];
goto l1;
}
