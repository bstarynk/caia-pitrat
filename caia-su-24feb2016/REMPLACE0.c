#include "dx.h"
void REMPLACE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,P=0,V34=0,V33=0;
int R,S;
int NZ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; S=pile[v[22]+1]; NZ=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V9=x[S];
pile[v[22]]=S; pile[WZ1]=0; pile[WZ2]=V9; pile[WZ3]=538; 
(*f[285])( );     /*ENLY0(S,0,V9,538,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=539; 
(*f[285])( );     /*ENLY0(S,V2,V1,539,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=541; 
(*f[285])( );     /*ENLY0(S,V4,V3,541,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=543; 
(*f[285])( );     /*ENLY0(S,V6,V5,543,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=625)) goto l2;
pile[v[22]]=111; pile[WZ1]=S; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,S,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=625)) goto l2;
pile[v[22]]=160; pile[WZ1]=S; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(160,S,jvj+1)*/
l2:pile[v[22]]=111; pile[WZ1]=S; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,S,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=625)) goto l7;
pile[v[22]]=160; pile[WZ1]=S; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,S,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+9,P)*/
P=pile[WZ2]; 
x[jvj+10]=d[20];z[jvj+10]=0;
l3:if((x[jvj+10]<=0)) goto l7;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=S; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+11,S,jvj+12)*/
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(268,jvj+11,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=S; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+13,S,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=P; pile[WZ2]=102; pile[WZ3]=S; 
(*f[1147])( );     /*TREQM0(jvj+12,P,102,S)*/
pile[v[22]]=jvj+14; pile[WZ2]=103; 
(*f[1147])( );     /*TREQM0(jvj+14,P,103,S)*/
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l1:pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(160,R,jvj+6)*/
pile[v[22]]=S; pile[WZ1]=160; 
(*f[35])( );     /*CHGC1(S,160,jvj+6)*/
goto l2;
l6:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+16,R,jvj+17)*/
pile[v[22]]=514; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(514,jvj+16,jvj+18)*/
pile[v[22]]=S; 
(*f[1148])( );     /*METINV0(S)*/
if((V34=w[x[jvj+18]][1])==incon) goto l9;
if((V34!=23)) goto l11;
V33=x[R];
pile[v[22]]=jvj+18; pile[WZ1]=jvj+17; pile[WZ2]=V33; 
(*f[134])( );     /*OTA0(jvj+18,jvj+17,V33)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=S; 
(*f[36])( );     /*PLUSC0(jvj+17,jvj+18,S)*/
l9:x[NZ]=x[jvj+17] ;z[NZ]=z[jvj+17];
pile[v[22]]=jvj+17; 
(*f[2111])( );     /*ENLSTOCK0(jvj+17)*/
pile[v[22]]=S; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[35])( );     /*CHGC1(S,jvj+16,jvj+17)*/
l10:v[0]=jvj; v[22]-=3; return;
l7:x[jvj+15]=d[120];z[jvj+15]=0;
l5:if((x[jvj+15]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=NZ; 
(*f[181])( );     /*QUADRI2(100,20,101,250,NZ)*/
goto l10;
l8:x[jvj+15]=t[x[jvj+15]];
goto l5;
l11:pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=S; 
(*f[35])( );     /*CHGC1(jvj+17,jvj+18,S)*/
goto l9;
}
