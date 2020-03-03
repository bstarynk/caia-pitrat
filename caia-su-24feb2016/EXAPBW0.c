#include "dx.h"
void EXAPBW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V19=0,V=0,V7=0,V6=0,V14=0,V15=0,V13=0,V17=0,V24=0,V16=0,V25=0,V26=0,V27=0,V29=0,V30=0,V31=0,V39=0,V38=0;
int NR,E,EC,G;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11220;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==516&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NR=pile[v[22]]; E=pile[v[22]+1]; EC=pile[v[22]+2]; G=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+17]=x[E] ;z[jvj+17]=z[E];
l6:if((x[jvj+17]>0)) goto l7;
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l3:V4=incon;
if((V16<=V13)) goto l4;
V4=0;
l12:pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=V4; 
(*f[39])( );     /*SDX0(20,V24,V4,V7)*/
V7=pile[WZ3]; 
V6=incon;
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(163,jvj+7,V19)*/
V19=pile[WZ2]; 
V=V19;
pile[v[22]]=V7; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V7,V,V6)*/
V6=pile[WZ2]; 
l13:pile[v[22]]=135; pile[WZ1]=V6; pile[WZ2]=954; 
(*f[42])( );     /*SRA1(135,V6,954,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V25,58,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=V16; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V26,V16,41,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V27; pile[WZ2]=298; 
(*f[42])( );     /*SRA1(135,V27,298,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V29,58,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V30,V13,41,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
pile[v[22]]=G; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
l11:x[jvj+19]=t[x[jvj+19]];
l10:if((x[jvj+19]<=0)) goto l8;
x[jvj+6]=s[x[jvj+19]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+19];
pile[v[22]]=860; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(860,jvj+6,jvj+11)*/
if((x[jvj+11]!=954)) goto l11;
pile[v[22]]=695; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(695,jvj+6,V16)*/
V16=pile[WZ2]; 
if((V16>V17)) goto l11;
pile[v[22]]=1015; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1015,jvj+6,V3)*/
V3=pile[WZ2]; 
goto l11;
l4:pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(15,0,42,V4)*/
V4=pile[WZ3]; 
goto l12;
l5:V6=V7;
goto l13;
l7:x[jvj+7]=s[x[jvj+17]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+17];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+7,jvj+12)*/
pile[v[22]]=983; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+12,jvj+13)*/
pile[v[22]]=878; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(878,jvj+13,jvj+14)*/
l15:if((x[jvj+14]<=0)) goto l8;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=163; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+15,V39)*/
V39=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+7,V38)*/
V38=pile[WZ2]; 
if((V39==V38)) goto l16;
x[jvj+14]=t[x[jvj+14]];
goto l15;
l8:x[jvj+17]=t[x[jvj+17]];
goto l6;
l9:pile[v[22]]=493; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(493,jvj+2,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(876,jvj+2,V15)*/
V15=pile[WZ2]; 
V13=V14+V15;
V17=NR*V13;
V24=x[jvj+8];
x[jvj+19]=x[jvj+10] ;z[jvj+19]=z[jvj+10];
goto l10;
l16:x[jvj+18]=x[jvj+15] ;z[jvj+18]=z[jvj+15];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+7,jvj+8)*/
x[jvj+9]=x[jvj+18] ;z[jvj+9]=z[jvj+18];
pile[v[22]]=944; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(944,jvj+9,jvj+10)*/
x[jvj+16]=x[jvj+10] ;z[jvj+16]=z[jvj+10];
l1:if((x[jvj+16]<=0)) goto l8;
x[jvj+2]=s[x[jvj+16]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+16];
pile[v[22]]=935; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(935,jvj+2,jvj+3)*/
if((x[jvj+3]!=547)) goto l2;
pile[v[22]]=860; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+2,jvj+4)*/
if((x[jvj+4]!=530)) goto l2;
pile[v[22]]=jvj+2; pile[WZ1]=EC; pile[WZ2]=jvj+5; 
(*f[505])( );     /*EVCOND0(jvj+2,EC,jvj+5)*/
if((x[jvj+5]==135)) goto l9;
l2:x[jvj+16]=t[x[jvj+16]];
goto l1;
}
