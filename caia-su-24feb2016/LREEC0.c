#include "dx.h"
void LREEC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,KR=0,V22=0,II=0,I=0,DN=0,DX=0,V6=0,DF=0,V7=0,DY=0,V11=0,V10=0,V33=0,V34=0,V15=0,V14=0,V35=0,V36=0,V16=0,V37=0,V38=0,V8=0,V19=0,DZ=0,V30=0,V31=0,V40=0,V39=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=11592;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==413&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l17:x[jvj+9]=incon;
pile[v[22]]=58; 
(*f[346])( );     /*LK1(58)*/
V1=bh[v[1]][0];
KR=V1;
if((KR==32)) goto l16;
II=1;
l1:pile[v[22]]=565; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(565,N,jvj+2)*/
x[jvj+20]=x[jvj+2] ;z[jvj+20]=z[jvj+2];
l2:if((x[jvj+20]>0)) goto l3;
I=II;
DN=(-1);
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,N,jvj+5)*/
if((x[jvj+5]==1512)) goto l5;
if((x[jvj+5]!=1562)) goto l16;
pile[v[22]]=DN; pile[WZ1]=jvj+6; 
(*f[335])( );if(v[102]) goto l16;     /*LANT0(DN,jvj+6,DX)*/
DX=pile[WZ2]; 
l6:pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(218,N,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+7; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+7,jvj+16)*/
pile[WZ3]=250; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+18)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=160; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,160,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=111; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,111,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+17,jvj+18,103,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+19; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+19,jvj+9)*/
pile[v[22]]=N; pile[WZ1]=565; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(N,565,jvj+9)*/
V6=bh[v[1]][DX];
if((V6!=59)) goto l7;
pile[v[22]]=DX; pile[WZ1]=jvj+9; 
(*f[321])( );if(v[102]) goto l7;     /*LCANT0(DX,jvj+9,DF)*/
DF=pile[WZ2]; 
V7=DF-1;
DY=V7;
l9:V16=bh[v[1]][DY];
if(V16==42) goto l10;
pile[v[22]]=20; pile[WZ1]=11592; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11592,0,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(41,1,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l10:pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(218,N,jvj+10)*/
pile[v[22]]=332; pile[WZ1]=jvj+10; 
(*f[219])( );if(v[102]) goto l11;     /*FNDC2(332,jvj+10,V8)*/
V8=pile[WZ2]; 
if((V8==61)) goto l8;
if((V8!=62)) goto l11;
V15=DY+1;
V14=bh[v[1]][V15];
if(V14==62) goto l11;
pile[v[22]]=20; pile[WZ1]=11592; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11592,0,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,3,V35,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=V36; 
(*f[40])( );     /*SLG0(V36)*/
l11:if(x[jvj+9]!=incon) goto l12;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+20]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+20];
pile[v[22]]=160; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(160,jvj+3,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+4,V22)*/
V22=pile[WZ2]; 
if((V22!=II)) goto l4;
II++;
if((II<=1000)) goto l1;
goto l16;
l4:x[jvj+20]=t[x[jvj+20]];
goto l2;
l5:pile[v[22]]=DN; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(DN,jvj+6,DX)*/
DX=pile[WZ2]; 
goto l6;
l7:DY=DX;
goto l9;
l8:V11=DY+1;
V10=bh[v[1]][V11];
if(V10==61) goto l11;
pile[v[22]]=20; pile[WZ1]=11592; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11592,0,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,2,V33,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
goto l11;
l12:pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(218,N,jvj+11)*/
if((x[jvj+11]==1512)) goto l13;
if((x[jvj+11]!=1562)) goto l16;
V30=DY+1;
pile[v[22]]=V30; pile[WZ1]=jvj+13; 
(*f[335])( );if(v[102]) goto l16;     /*LANT0(V30,jvj+13,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=103; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+9,103,jvj+13)*/
l14:V31=bh[v[1]][DZ];
if((V31==59)) goto l15;
V40=x[jvj+9];
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V40,0,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
goto l17;
l13:V19=DY+1;
pile[v[22]]=V19; pile[WZ1]=jvj+12; 
(*f[79])( );if(v[102]) goto l16;     /*LEXP0(V19,jvj+12,DZ)*/
DZ=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=103; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+9,103,jvj+12)*/
goto l14;
l15:pile[v[22]]=N; 
(*f[172])( );     /*SORBL1(N)*/
goto l17;
}
