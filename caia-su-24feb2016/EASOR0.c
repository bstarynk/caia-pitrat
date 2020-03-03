#include "dx.h"
void EASOR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DX=0,Z=0,Y=0,V22=0,V21=0,V23=0,V3=0,V25=0,V24=0,V8=0,V9=0,V10=0,V26=0,V28=0,V30=0,V2=0,V13=0,V15=0,V14=0,V11=0;
int L,KK,UR,XX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10511;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==127&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; KK=pile[v[22]+1]; UR=pile[v[22]+2]; XX=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=incon;
if((UR==47)) goto l1;
if((UR==43)) goto l2;
if(UR!=32&&UR!=58) goto l3;
x[jvj+9]=68 ;z[jvj+9]=68;
l3:if((KK==32)) goto l4;
pile[v[22]]=1; pile[WZ1]=jvj+4; 
(*f[79])( );if(v[102]) goto l21;     /*LEXP0(1,jvj+4,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=XX; pile[WZ3]=jvj+5; 
(*f[110])( );if(v[102]) goto l21;     /*EVL2(XX,jvj+4,Z,jvj+5)*/
Z=pile[WZ2]; 
x[jvj+17]=Z ;z[jvj+17]=(Z<=sepcte) ? Z : 0;
x[jvj+3]=x[jvj+17] ;z[jvj+3]=z[jvj+17];
l9:if((UR==76)) goto l10;
if((UR==61)) goto l11;
if((UR!=83)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+6)*/
l5:if((x[jvj+6]>0)) goto l6;
pile[v[22]]=105; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(105,jvj+3,jvj+7)*/
if((x[jvj+7]==0)) goto l7;
pile[v[22]]=0; pile[WZ1]=(-2929); 
(*f[37])( );     /*SRA0(0,(-2929),V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
l7:pile[v[22]]=105; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(105,jvj+3,jvj+8)*/
l8:if((x[jvj+8]<=0)) goto l12;
V3=s[x[jvj+8]];
V25=V3;
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V25,0,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
x[jvj+8]=t[x[jvj+8]];
goto l8;
l1:x[jvj+9]=67 ;z[jvj+9]=67;
goto l3;
l2:x[jvj+9]=41 ;z[jvj+9]=41;
goto l3;
l4:pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(274,L,jvj+3)*/
goto l9;
l6:Y=s[x[jvj+6]];
V22=Y;
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V22,0,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
x[jvj+6]=t[x[jvj+6]];
goto l5;
l10:pile[v[22]]=jvj+3; pile[WZ1]=0; 
(*f[363])( );     /*SOREG0(jvj+3,0)*/
l12:if(x[jvj+9]!=incon) goto l13;
l20:if((UR!=58)) goto l21;
V11=incon;
V13=r[x[jvj+3]];
if((V13<0)) goto l14;
V11=250;
l15:x[jvj+13]=incon;
if((V11==20)) goto l16;
if((V11==41)) goto l17;
if((V11==89)) goto l18;
if((V11==96)) goto l19;
x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
l22:pile[v[22]]=109; pile[WZ1]=250; pile[WZ2]=274; pile[WZ3]=jvj+13; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(109,250,274,jvj+13,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[129])( );if(v[102]) goto l21;     /*EDIBLOC0(jvj+10,jvj+11)*/
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l11:V8=t[x[jvj+3]];
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
goto l12;
l13:V2=x[jvj+3];
pile[v[22]]=30; pile[WZ1]=jvj+9; pile[WZ2]=V2; 
(*f[225])( );     /*SRL0(30,jvj+9,V2)*/
goto l20;
l14:V15=(-V13);
V14=V15;
V11=V14;
goto l15;
l16:x[jvj+12]=x[jvj+3] ;z[jvj+12]=0;
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=jvj+13; 
(*f[300])( );     /*TRI10(jvj+12,159,jvj+13)*/
goto l22;
l17:x[jvj+14]=x[jvj+3] ;z[jvj+14]=0;
pile[v[22]]=jvj+14; pile[WZ1]=195; pile[WZ2]=jvj+13; 
(*f[300])( );     /*TRI10(jvj+14,195,jvj+13)*/
goto l22;
l18:x[jvj+15]=x[jvj+3] ;z[jvj+15]=0;
pile[v[22]]=jvj+15; pile[WZ1]=207; pile[WZ2]=jvj+13; 
(*f[300])( );     /*TRI10(jvj+15,207,jvj+13)*/
goto l22;
l19:x[jvj+16]=x[jvj+3] ;z[jvj+16]=0;
pile[v[22]]=jvj+16; pile[WZ1]=273; pile[WZ2]=jvj+13; 
(*f[300])( );     /*TRI10(jvj+16,273,jvj+13)*/
goto l22;
}
