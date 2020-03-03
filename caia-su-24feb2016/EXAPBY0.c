#include "dx.h"
void EXAPBY0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V19=0,V3=0,V20=0,V=0,V6=0,V5=0,V22=0,H=0,V23=0,V10=0,V26=0,V9=0,V29=0,V30=0,V7=0,V31=0,V32=0,V33=0,V11=0,V36=0,V43=0,V42=0;
int E,EC,G;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11223;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==495&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; G=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=x[E] ;z[jvj+22]=z[E];
l14:if((x[jvj+22]>0)) goto l15;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=944; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(944,jvj+2,jvj+3)*/
x[jvj+20]=x[jvj+3] ;z[jvj+20]=z[jvj+3];
l2:if((x[jvj+20]<=0)) goto l16;
x[jvj+4]=s[x[jvj+20]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+20];
pile[v[22]]=1078; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1078,jvj+4,jvj+5)*/
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(860,jvj+5,jvj+6)*/
if((x[jvj+6]!=530)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=EC; pile[WZ2]=jvj+7; 
(*f[505])( );     /*EVCOND0(jvj+4,EC,jvj+7)*/
if((x[jvj+7]==135)) goto l17;
l3:x[jvj+20]=t[x[jvj+20]];
goto l2;
l5:x[jvj+10]=s[x[jvj+21]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+10,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=V18; 
(*f[818])( );     /*MTC0(jvj+11,117,V18)*/
l6:x[jvj+21]=t[x[jvj+21]];
l4:if((x[jvj+21]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+11,V19)*/
V19=pile[WZ2]; 
V3=V19;
if((V3>1)) goto l1;
pile[v[22]]=844; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(844,jvj+2,jvj+8)*/
if((x[jvj+8]==68)) goto l1;
l16:x[jvj+22]=t[x[jvj+22]];
goto l14;
l7:V5=V6;
l8:V7=incon;
pile[v[22]]=844; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(844,jvj+2,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=844; 
(*f[42])( );     /*SRA1(135,V5,844,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V29,61,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=jvj+14; 
(*f[42])( );     /*SRA1(135,V30,jvj+14,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=1180; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1180,jvj+2,V22)*/
V22=pile[WZ2]; 
H=V22;
V23=H+1;
pile[v[22]]=41; pile[WZ1]=V23; pile[WZ2]=V10; 
(*f[39])( );     /*SDX0(41,V23,V10,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V26,53,V9)*/
V9=pile[WZ3]; 
l10:V7=V9;
l12:V11=incon;
if((V3>1)) goto l13;
V11=V7;
l18:pile[v[22]]=V11; 
(*f[40])( );     /*SLG0(V11)*/
pile[v[22]]=G; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
goto l16;
l9:V9=V10;
goto l10;
l11:V7=V5;
goto l12;
l13:pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,V7,21,V31)*/
V31=pile[WZ3]; 
pile[WZ1]=V31; pile[WZ2]=66; 
(*f[42])( );     /*SRA1(135,V31,66,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V3; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V3,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V33,53,V11)*/
V11=pile[WZ3]; 
goto l18;
l15:x[jvj+12]=s[x[jvj+22]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+22];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+12,jvj+16)*/
pile[v[22]]=983; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(983,jvj+16,jvj+17)*/
pile[v[22]]=878; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(878,jvj+17,jvj+18)*/
l20:if((x[jvj+18]<=0)) goto l16;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+19,V43)*/
V43=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+12,V42)*/
V42=pile[WZ2]; 
if((V43==V42)) goto l21;
x[jvj+18]=t[x[jvj+18]];
goto l20;
l17:V36=x[jvj+15];
pile[v[22]]=20; pile[WZ1]=V36; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V36,0,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+12,V20)*/
V20=pile[WZ2]; 
V=V20;
pile[v[22]]=V6; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V6,V,V5)*/
V5=pile[WZ2]; 
goto l8;
l21:x[jvj+23]=x[jvj+19] ;z[jvj+23]=z[jvj+19];
x[jvj+2]=x[jvj+23] ;z[jvj+2]=z[jvj+23];
pile[v[22]]=109; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(109,jvj+12,jvj+15)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(1,117,jvj+11)*/
pile[v[22]]=1209; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1209,jvj+2,jvj+9)*/
x[jvj+21]=x[jvj+9] ;z[jvj+21]=z[jvj+9];
goto l4;
}
