#include "dx.h"
void EDITOUTATOME1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,C=0,V4=0,V3=0,V=0,V22=0,V25=0,I=0,V34=0,V35=0,MM=0,V27=0,V12=0,V32=0,V26=0,V28=0,V29=0,V30=0,V31=0,V42=0;
int NR,EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=10921;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==538&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; EA=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V42=NR;
l10:if((V42==4)) goto l6;
if((V42!=3)) goto l16;
x[jvj+24]=x[EA] ;z[jvj+24]=z[EA];
l11:if((x[jvj+24]<=0)) goto l16;
x[jvj+7]=s[x[jvj+24]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+24];
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+7,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=69)) goto l12;
pile[v[22]]=108; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(108,jvj+15,jvj+17)*/
pile[v[22]]=184; pile[WZ1]=jvj+7; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(184,jvj+7,jvj+18)*/
V27=x[jvj+7];
x[jvj+25]=x[jvj+17] ;z[jvj+25]=z[jvj+17];
l13:if((x[jvj+25]<=0)) goto l12;
x[jvj+19]=s[x[jvj+25]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+25];
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+19,jvj+20)*/
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+20,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+19,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=576)) goto l14;
V=V12;
x[jvj+26]=x[jvj+18] ;z[jvj+26]=z[jvj+18];
l15:if((x[jvj+26]<=0)) goto l14;
x[jvj+6]=s[x[jvj+26]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+26];
pile[v[22]]=V; pile[WZ1]=jvj+6; pile[WZ2]=jvj+23; 
(*f[536])( );     /*ALLURV0(V,jvj+6,jvj+23)*/
V32=x[jvj+23];
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V27,0,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=576; 
(*f[42])( );     /*SRA1(135,V26,576,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V28,V,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V32; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(20,V32,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
x[jvj+4]=d[25];z[jvj+4]=0;
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+26]=t[x[jvj+26]];
goto l15;
l1:V3=V4;
l5:pile[v[22]]=V3; pile[WZ1]=I; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V3,I,41,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
l4:x[jvj+4]=t[x[jvj+4]];
goto l2;
l3:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=V; pile[WZ2]=jvj+6; pile[WZ3]=jvj+7; pile[WZ4]=jvj+8; 
(*f[537])( );if(v[102]) goto l4;     /*TROUVAL0(jvj+5,V,jvj+6,jvj+7,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=22)) goto l4;
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+8,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+10,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+8,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
x[jvj+3]=x[jvj+12] ;z[jvj+3]=z[jvj+12];
pile[v[22]]=331; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(331,jvj+3,V25)*/
V25=pile[WZ2]; 
I=V22;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+5; 
(*f[42])( );     /*SRA1(135,0,jvj+5,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=V25; 
(*f[38])( );     /*SPC0(V34,V25,V4)*/
V4=pile[WZ2]; 
V3=incon;
pile[v[22]]=332; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l1;     /*FNDC2(332,jvj+3,V24)*/
V24=pile[WZ2]; 
C=V24;
pile[v[22]]=V4; pile[WZ1]=C; 
(*f[38])( );     /*SPC0(V4,C,V3)*/
V3=pile[WZ2]; 
goto l5;
l6:MM=1;
l9:x[jvj+13]=d[26];z[jvj+13]=0;
l7:if((x[jvj+13]>0)) goto l8;
MM++;
if((MM<=2)) goto l9;
V42=3;
goto l10;
l8:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=MM; pile[WZ1]=EA; pile[WZ2]=jvj+14; 
(*f[539])( );     /*EDITOUTATOME2(MM,EA,jvj+14)*/
x[jvj+13]=t[x[jvj+13]];
goto l7;
l12:x[jvj+24]=t[x[jvj+24]];
goto l11;
l14:x[jvj+25]=t[x[jvj+25]];
goto l13;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
