#include "dx.h"
void EASOR1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DX=0,Z=0,Y=0,V22=0,V21=0,V23=0,V3=0,V25=0,V24=0,V8=0,V9=0,V10=0,V26=0,V28=0,V30=0,V2=0,V13=0,V15=0,V14=0,V11=0;
int L,KK,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10511;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==374&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; KK=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=incon;
if((UR==47)) goto l1;
if((UR==43)) goto l2;
if(UR!=32&&UR!=58) goto l21;
x[jvj+10]=68 ;z[jvj+10]=68;
l21:pile[v[22]]=10169; pile[WZ1]=109; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(10169,109,jvj+5)*/
if((KK==32)) goto l3;
pile[v[22]]=1; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l20;     /*LEXP0(1,jvj+4,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ3]=jvj+6; 
(*f[110])( );if(v[102]) goto l20;     /*EVL2(jvj+5,jvj+4,Z,jvj+6)*/
Z=pile[WZ2]; 
x[jvj+18]=Z ;z[jvj+18]=(Z<=sepcte) ? Z : 0;
x[jvj+3]=x[jvj+18] ;z[jvj+3]=z[jvj+18];
l8:if((UR==76)) goto l9;
if((UR==61)) goto l10;
if((UR!=83)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+7)*/
l4:if((x[jvj+7]>0)) goto l5;
pile[v[22]]=105; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(105,jvj+3,jvj+8)*/
if((x[jvj+8]==0)) goto l6;
pile[v[22]]=0; pile[WZ1]=(-2929); 
(*f[37])( );     /*SRA0(0,(-2929),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
l6:pile[v[22]]=105; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(105,jvj+3,jvj+9)*/
l7:if((x[jvj+9]<=0)) goto l11;
V3=s[x[jvj+9]];
V25=V3;
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V25,0,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
x[jvj+9]=t[x[jvj+9]];
goto l7;
l1:x[jvj+10]=67 ;z[jvj+10]=67;
goto l21;
l2:x[jvj+10]=41 ;z[jvj+10]=41;
goto l21;
l3:pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(274,L,jvj+3)*/
goto l8;
l5:Y=s[x[jvj+7]];
V22=Y;
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V22,0,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
x[jvj+7]=t[x[jvj+7]];
goto l4;
l9:pile[v[22]]=jvj+3; pile[WZ1]=0; 
(*f[363])( );     /*SOREG0(jvj+3,0)*/
l11:if(x[jvj+10]!=incon) goto l12;
l19:if((UR!=58)) goto l20;
V11=incon;
V13=r[x[jvj+3]];
if((V13<0)) goto l13;
V11=250;
l14:x[jvj+14]=incon;
if((V11==20)) goto l15;
if((V11==41)) goto l16;
if((V11==89)) goto l17;
if((V11==96)) goto l18;
x[jvj+14]=x[jvj+3] ;z[jvj+14]=z[jvj+3];
l22:pile[v[22]]=109; pile[WZ1]=250; pile[WZ2]=274; pile[WZ3]=jvj+14; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(109,250,274,jvj+14,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[129])( );if(v[102]) goto l20;     /*EDIBLOC0(jvj+11,jvj+12)*/
l20:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l10:V8=t[x[jvj+3]];
V9=s[x[jvj+3]];
V10=r[x[jvj+3]];
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V10,0,V26)*/
V26=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,V9,V26,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=V8; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(41,V8,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
goto l11;
l12:V2=x[jvj+3];
pile[v[22]]=30; pile[WZ1]=jvj+10; pile[WZ2]=V2; 
(*f[225])( );     /*SRL0(30,jvj+10,V2)*/
goto l19;
l13:V15=(-V13);
V14=V15;
V11=V14;
goto l14;
l15:x[jvj+13]=x[jvj+3] ;z[jvj+13]=0;
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+14; 
(*f[300])( );     /*TRI10(jvj+13,159,jvj+14)*/
goto l22;
l16:x[jvj+15]=x[jvj+3] ;z[jvj+15]=0;
pile[v[22]]=jvj+15; pile[WZ1]=195; pile[WZ2]=jvj+14; 
(*f[300])( );     /*TRI10(jvj+15,195,jvj+14)*/
goto l22;
l17:x[jvj+16]=x[jvj+3] ;z[jvj+16]=0;
pile[v[22]]=jvj+16; pile[WZ1]=207; pile[WZ2]=jvj+14; 
(*f[300])( );     /*TRI10(jvj+16,207,jvj+14)*/
goto l22;
l18:x[jvj+17]=x[jvj+3] ;z[jvj+17]=0;
pile[v[22]]=jvj+17; pile[WZ1]=273; pile[WZ2]=jvj+14; 
(*f[300])( );     /*TRI10(jvj+17,273,jvj+14)*/
goto l22;
}
