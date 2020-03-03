#include "dx.h"
void EASOR2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,V19=0,V18=0,V20=0,Z=0,V22=0,V21=0,V5=0,V6=0,V7=0,V23=0,V25=0,V27=0,V1=0,V10=0,V12=0,V11=0,V8=0;
int UR,EX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10511;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==576&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; EX=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=incon;
if((UR==47)) goto l5;
if((UR==43)) goto l6;
if(UR!=32&&UR!=58) goto l7;
x[jvj+6]=68 ;z[jvj+6]=68;
l7:if((UR==76)) goto l8;
if((UR==61)) goto l9;
if((UR!=83)) goto l10;
pile[v[22]]=107; pile[WZ1]=EX; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(107,EX,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=105; pile[WZ1]=EX; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(105,EX,jvj+4)*/
if((x[jvj+4]==0)) goto l3;
pile[v[22]]=0; pile[WZ1]=(-2929); 
(*f[37])( );     /*SRA0(0,(-2929),V20)*/
V20=pile[WZ2]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
l3:pile[v[22]]=105; pile[WZ1]=EX; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(105,EX,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l10;
Z=s[x[jvj+5]];
V22=Z;
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V22,0,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l2:Y=s[x[jvj+3]];
V19=Y;
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V19,0,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+6]=67 ;z[jvj+6]=67;
l11:V1=x[EX];
pile[v[22]]=30; pile[WZ1]=jvj+6; pile[WZ2]=V1; 
(*f[225])( );     /*SRL0(30,jvj+6,V1)*/
l18:if((UR!=58)) goto l19;
V8=incon;
V10=r[x[EX]];
if((V10<0)) goto l12;
V8=250;
l13:x[jvj+10]=incon;
if((V8==20)) goto l14;
if((V8==41)) goto l15;
if((V8==89)) goto l16;
if((V8==96)) goto l17;
x[jvj+10]=x[EX] ;z[jvj+10]=z[EX];
l20:pile[v[22]]=109; pile[WZ1]=250; pile[WZ2]=274; pile[WZ3]=jvj+10; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(109,250,274,jvj+10,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[129])( );if(v[102]) goto l19;     /*EDIBLOC0(jvj+7,jvj+8)*/
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l6:x[jvj+6]=41 ;z[jvj+6]=41;
goto l11;
l8:pile[v[22]]=EX; pile[WZ1]=0; 
(*f[363])( );     /*SOREG0(EX,0)*/
l10:if(x[jvj+6]!=incon) goto l11;
goto l18;
l9:V5=t[x[EX]];
V6=s[x[EX]];
V7=r[x[EX]];
pile[v[22]]=41; pile[WZ1]=V7; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V7,0,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V6; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V6,V23,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V5; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V5,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
goto l10;
l12:V12=(-V10);
V11=V12;
V8=V11;
goto l13;
l14:x[jvj+9]=x[EX] ;z[jvj+9]=0;
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=jvj+10; 
(*f[300])( );     /*TRI10(jvj+9,159,jvj+10)*/
goto l20;
l15:x[jvj+11]=x[EX] ;z[jvj+11]=0;
pile[v[22]]=jvj+11; pile[WZ1]=195; pile[WZ2]=jvj+10; 
(*f[300])( );     /*TRI10(jvj+11,195,jvj+10)*/
goto l20;
l16:x[jvj+12]=x[EX] ;z[jvj+12]=0;
pile[v[22]]=jvj+12; pile[WZ1]=207; pile[WZ2]=jvj+10; 
(*f[300])( );     /*TRI10(jvj+12,207,jvj+10)*/
goto l20;
l17:x[jvj+13]=x[EX] ;z[jvj+13]=0;
pile[v[22]]=jvj+13; pile[WZ1]=273; pile[WZ2]=jvj+10; 
(*f[300])( );     /*TRI10(jvj+13,273,jvj+10)*/
goto l20;
}
