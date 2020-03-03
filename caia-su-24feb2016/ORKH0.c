#include "dx.h"
void ORKH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V=0;
int H,R;
int N;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10701;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1993&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
H=pile[v[22]]; R=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=204; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(204,R,V2)*/
V2=pile[WZ2]; 
V1=(-V2);
pile[v[22]]=R; pile[WZ1]=244; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(R,244,V1)*/
l7:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,R,jvj+7)*/
x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(583,jvj+8,jvj+9)*/
l8:if((x[jvj+7]<=0)) goto l10;
x[jvj+10]=s[x[jvj+7]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+7];
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=39)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+10,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+9]!=x[jvj+13])) goto l9;
pile[v[22]]=R; pile[WZ1]=244; pile[WZ2]=(-100); 
(*f[186])( );     /*BTC0(R,244,(-100))*/
l9:x[jvj+7]=t[x[jvj+7]];
goto l8;
l2:x[jvj+2]=s[x[jvj+25]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+25];
if((x[jvj+2]==x[R])) goto l4;
pile[v[22]]=263; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(263,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l17;
l4:x[jvj+25]=t[x[jvj+25]];
l1:if((x[jvj+25]>0)) goto l2;
pile[v[22]]=R; pile[WZ1]=244; pile[WZ2]=50; 
(*f[186])( );     /*BTC0(R,244,50)*/
l17:x[jvj+22]=t[x[jvj+22]];
l15:if((x[jvj+22]>0)) goto l16;
pile[v[22]]=244; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(244,R,N)*/
N=pile[WZ2]; 
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=N; v[102]=0;return;
l3:x[jvj+25]=x[H] ;z[jvj+25]=z[H];
goto l1;
l5:pile[v[22]]=105; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(105,R,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l14;
x[jvj+4]=s[x[jvj+6]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+6];
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=435)) goto l13;
x[jvj+6]=t[x[jvj+6]];
goto l6;
l10:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,R,jvj+14)*/
if((x[jvj+14]!=42)) goto l5;
pile[v[22]]=105; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(105,R,jvj+15)*/
x[jvj+16]=vo[15];z[jvj+16]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(583,jvj+16,jvj+17)*/
l11:if((x[jvj+15]<=0)) goto l5;
x[jvj+18]=s[x[jvj+15]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+15];
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=39)) goto l12;
pile[v[22]]=111; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+18,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+17]!=x[jvj+21])) goto l12;
pile[v[22]]=R; pile[WZ1]=244; pile[WZ2]=(-1000); 
(*f[186])( );     /*BTC0(R,244,(-1000))*/
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l13:pile[v[22]]=R; pile[WZ1]=244; pile[WZ2]=(-10); 
(*f[186])( );     /*BTC0(R,244,(-10))*/
l14:pile[v[22]]=263; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(263,R,jvj+22)*/
x[jvj+23]=vo[15];z[jvj+23]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(223,jvj+23,jvj+24)*/
goto l15;
l16:V=s[x[jvj+22]];
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==V) goto l3;
goto l17;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
