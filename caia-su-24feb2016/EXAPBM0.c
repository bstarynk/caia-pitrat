#include "dx.h"
void EXAPBM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V9=0,V3=0,V2=0,V15=0,V13=0,V14=0,V18=0,V20=0,V22=0,V23=0,V24=0,V33=0,V32=0;
int E,NRR,NX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11224;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==502&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; NRR=pile[v[22]+1]; NX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=NRR; pile[WZ1]=683; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(NRR,683,jvj+14)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=359; pile[WZ3]=NX; pile[WZ4]=jvj+14; pile[WZ5]=jvj+11; 
(*f[190])( );     /*QUADRI3(117,0,359,NX,jvj+14,jvj+11)*/
x[jvj+21]=x[E] ;z[jvj+21]=z[E];
l6:if((x[jvj+21]>0)) goto l7;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+11,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=359; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(359,jvj+11,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(683,jvj+11,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=898; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(898,jvj+11,jvj+13)*/
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V15,0,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V18,(-2986),V3)*/
V3=pile[WZ2]; 
V2=incon;
if((V15>1)) goto l9;
V2=V3;
l10:pile[v[22]]=41; pile[WZ1]=V14; pile[WZ2]=V2; 
(*f[39])( );     /*SDX0(41,V14,V2,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V20; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V20,48,V22)*/
V22=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=67; 
(*f[42])( );     /*SRA1(135,V22,67,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V13; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V13,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
pile[v[22]]=jvj+13; pile[WZ1]=0; pile[WZ2]=2; 
(*f[846])( );     /*SORENSPB0(jvj+13,0,2)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+19]=t[x[jvj+19]];
l1:if((x[jvj+19]<=0)) goto l8;
x[jvj+4]=s[x[jvj+19]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+19];
pile[v[22]]=683; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(683,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=NRR)) goto l2;
pile[v[22]]=860; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+4,jvj+5)*/
if((x[jvj+5]!=530)) goto l2;
pile[v[22]]=935; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(935,jvj+4,jvj+6)*/
if((x[jvj+6]!=547)) goto l2;
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+7)*/
x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l3:if((x[jvj+20]>0)) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=898; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+11,898,jvj+12)*/
pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
l8:x[jvj+21]=t[x[jvj+21]];
goto l6;
l4:x[jvj+8]=s[x[jvj+20]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+20];
pile[v[22]]=683; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+8,V9)*/
V9=pile[WZ2]; 
if((V9!=NX)) goto l5;
pile[v[22]]=860; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(860,jvj+8,jvj+9)*/
if((x[jvj+9]!=530)) goto l5;
pile[v[22]]=935; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+8,jvj+10)*/
if((x[jvj+10]==547)) goto l8;
l5:x[jvj+20]=t[x[jvj+20]];
goto l3;
l7:x[jvj+12]=s[x[jvj+21]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+21];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+12,jvj+15)*/
pile[v[22]]=983; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+15,jvj+16)*/
pile[v[22]]=878; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(878,jvj+16,jvj+17)*/
l12:if((x[jvj+17]<=0)) goto l8;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=163; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+18,V33)*/
V33=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(163,jvj+12,V32)*/
V32=pile[WZ2]; 
if((V33==V32)) goto l13;
x[jvj+17]=t[x[jvj+17]];
goto l12;
l9:pile[v[22]]=V3; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V3,83,V2)*/
V2=pile[WZ2]; 
goto l10;
l13:x[jvj+22]=x[jvj+18] ;z[jvj+22]=z[jvj+18];
x[jvj+2]=x[jvj+22] ;z[jvj+2]=z[jvj+22];
pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+3)*/
x[jvj+19]=x[jvj+3] ;z[jvj+19]=z[jvj+3];
goto l1;
}
