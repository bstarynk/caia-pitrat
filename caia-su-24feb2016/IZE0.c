#include "dx.h"
void IZE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V25=0,V3=0,V1=0,V17=0,NN=0,V35=0,V41=0,V45=0,V43=0,V36=0;
int X;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=30;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(128,X,jvj+8)*/
for(i=x[jvj+8],V3=0;i>0;i=t[i],V3++)  ;
pile[v[22]]=159; pile[WZ1]=240; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,240,jvj+9)*/
l5:if((x[jvj+9]<=0)) goto l11;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=128; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+10,jvj+11)*/
for(i=x[jvj+11],V1=0;i>0;i=t[i],V1++)  ;
if((V1!=V3)) goto l6;
x[jvj+29]=x[jvj+8] ;z[jvj+29]=z[jvj+8];
l3:if((x[jvj+29]>0)) goto l4;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+10,N)*/
N=pile[WZ2]; 
l13:if((N<295)) goto l14;
pile[v[22]]=10354; pile[WZ1]=N; pile[WZ2]=(-4381); 
(*f[242])( );     /*FAUTE0(10354,N,(-4381))*/
l14:v[0]=jvj; v[22]-=2; pile[v[22]+1]=N; v[102]=0;return;
l2:x[jvj+28]=t[x[jvj+28]];
l1:if((x[jvj+28]<=0)) goto l6;
x[jvj+5]=s[x[jvj+28]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+28];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(jvj+5,jvj+3,V25,jvj+6)*/
V25=pile[WZ2]; 
if((V23!=V25)) goto l2;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+7)*/
if((x[jvj+7]!=x[jvj+2])) goto l2;
x[jvj+29]=t[x[jvj+29]];
goto l3;
l4:x[jvj+1]=s[x[jvj+29]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+29];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+1,jvj+2)*/
if((x[jvj+3]=w[x[jvj+2]][3])==incon) goto l6;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+3; pile[WZ3]=jvj+4; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+1,jvj+3,V23,jvj+4)*/
V23=pile[WZ2]; 
x[jvj+28]=x[jvj+11] ;z[jvj+28]=z[jvj+11];
goto l1;
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l9:x[jvj+13]=s[x[jvj+30]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+30];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+13,V17)*/
V17=pile[WZ2]; 
if((V17!=NN)) goto l10;
NN++;
if((NN<=299)) goto l7;
v[0]=jvj; v[22]-=2; v[102]=1;return;
l10:x[jvj+30]=t[x[jvj+30]];
l8:if((x[jvj+30]>0)) goto l9;
pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,X,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=128; pile[WZ2]=jvj+18; 
(*f[300])( );     /*TRI10(jvj+16,128,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=NN; pile[WZ2]=117; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+18,NN,117,jvj+17)*/
N=NN;
x[jvj+14]=vo[20];z[jvj+14]=vz[20];
pile[v[22]]=301; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(301,jvj+14,jvj+15)*/
if((x[jvj+15]==68)) goto l12;
l15:pile[v[22]]=216; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(216,158,jvj+19)*/
x[jvj+20]=vo[20];z[jvj+20]=vz[20];
pile[v[22]]=jvj+20; pile[WZ1]=128; 
(*f[36])( );     /*PLUSC0(jvj+20,128,jvj+19)*/
pile[v[22]]=128; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(128,jvj+17,jvj+21)*/
V35=(-41);
l16:if((x[jvj+21]>0)) goto l17;
x[jvj+22]=vo[20];z[jvj+22]=vz[20];
pile[v[22]]=jvj+22; pile[WZ1]=191; pile[WZ2]=675; 
(*f[35])( );     /*CHGC1(jvj+22,191,675)*/
pile[WZ1]=1654; pile[WZ2]=1684; 
(*f[35])( );     /*CHGC1(jvj+22,1654,1684)*/
pile[v[22]]=158; pile[WZ1]=jvj+19; 
(*f[71])( );     /*ENLV0(158,jvj+19)*/
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+17,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=195; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(195,jvj+19,jvj+23)*/
d[V41]=x[jvj+23];
l12:pile[v[22]]=240; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(240,159,jvj+17)*/
goto l13;
l11:NN=0;
l7:pile[v[22]]=159; pile[WZ1]=240; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,240,jvj+12)*/
x[jvj+30]=x[jvj+12] ;z[jvj+30]=z[jvj+12];
goto l8;
l17:x[jvj+24]=s[x[jvj+21]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+21];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+26]=w[x[jvj+25]][3])==incon) goto l18;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+26; pile[WZ3]=jvj+27; 
(*f[45])( );if(v[102]) goto l18;     /*FNDZ0(jvj+24,jvj+26,V45,jvj+27)*/
V45=pile[WZ2]; 
V43=V45;
V36=V43;
pile[v[22]]=V35; pile[WZ1]=V36; pile[WZ2]=jvj+19; pile[WZ3]=195; 
(*f[70])( );     /*PLUSC1(V35,V36,jvj+19,195)*/
l18:x[jvj+21]=t[x[jvj+21]];
goto l16;
}
