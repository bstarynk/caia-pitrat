#include "dx.h"
void SUBVERIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V35=0,V32=0,V34=0,V11=0,V29=0,V31=0,V23=0,V24=0,V25=0,V26=0,V28=0,V30=0;
int EE;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11534;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3588&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EE=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+33]=x[EE] ;z[jvj+33]=z[EE];
l1:if((x[jvj+33]>0)) goto l2;
x[jvj+35]=x[EE] ;z[jvj+35]=z[EE];
l6:if((x[jvj+35]>0)) goto l7;
x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+17]=d[72];z[jvj+17]=0;
x[jvj+36]=x[EE] ;z[jvj+36]=z[EE];
l9:if((x[jvj+36]>0)) goto l10;
x[jvj+32]=x[jvj+22] ;z[jvj+32]=z[jvj+22];
x[jvj+29]=vo[16];z[jvj+29]=vz[16];
pile[v[22]]=1374; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1374,jvj+29,jvj+30)*/
l15:if((x[jvj+30]>0)) goto l16;
x[RES]=135 ;z[RES]=135;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+33]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+33];
pile[v[22]]=447; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(447,jvj+2,jvj+3)*/
pile[v[22]]=459; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(459,jvj+2,jvj+4)*/
x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+5,jvj+6)*/
x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
x[jvj+34]=x[EE] ;z[jvj+34]=z[EE];
l4:if((x[jvj+34]<=0)) goto l3;
x[jvj+7]=s[x[jvj+34]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+34];
if((x[jvj+7]==x[jvj+2])) goto l5;
pile[v[22]]=459; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(459,jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+4; pile[WZ3]=jvj+10; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+9,jvj+4,jvj+8,jvj+10)*/
pile[v[22]]=jvj+7; pile[WZ1]=459; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+7,459,jvj+10)*/
l5:x[jvj+34]=t[x[jvj+34]];
goto l4;
l3:x[jvj+33]=t[x[jvj+33]];
goto l1;
l7:x[jvj+11]=s[x[jvj+35]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+35];
pile[v[22]]=459; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+11,jvj+12)*/
pile[v[22]]=300; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1157])( );if(v[102]) goto l8;     /*NORME1(300,jvj+12,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=459; 
(*f[35])( );     /*CHGC1(jvj+11,459,jvj+13)*/
l8:x[jvj+35]=t[x[jvj+35]];
goto l6;
l10:x[jvj+18]=s[x[jvj+36]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+36];
pile[v[22]]=447; pile[WZ1]=jvj+18; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(447,jvj+18,jvj+14)*/
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+14,jvj+15)*/
pile[v[22]]=1348; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1348,jvj+15,jvj+16)*/
if((x[jvj+16]==68)) goto l11;
l12:pile[v[22]]=459; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(459,jvj+18,jvj+19)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+20; 
(*f[1290])( );if(v[102]) goto l11;     /*DEPEXP0(jvj+14,jvj+20)*/
pile[v[22]]=447; pile[WZ2]=459; pile[WZ3]=jvj+19; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(447,jvj+20,459,jvj+19,jvj+21)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[196])( );     /*PLUF0(jvj+17,jvj+21,jvj+22)*/
l11:x[jvj+36]=t[x[jvj+36]];
goto l9;
l16:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+23; 
(*f[1355])( );if(v[102]) goto l17;     /*SUBSTOTAL0(jvj+31,jvj+32,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l17;
l18:x[RES]=134 ;z[RES]=134;
if((v[230]<=0)) goto l19;
x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(929,jvj+28,V11)*/
V11=pile[WZ2]; 
V29=x[jvj+31];
V31=x[jvj+23];
pile[v[22]]=0; pile[WZ1]=5; 
(*f[178])( );     /*SPLO0(0,5,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(20,V23,38,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=11534; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,11534,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V11,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V29,V26,V28)*/
V28=pile[WZ3]; 
pile[WZ1]=V31; pile[WZ2]=V28; 
(*f[39])( );     /*SDX0(20,V31,V28,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=V30; 
(*f[40])( );     /*SLG0(V30)*/
x[jvj+37]=x[jvj+32] ;z[jvj+37]=z[jvj+32];
l13:if((x[jvj+37]<=0)) goto l19;
x[jvj+25]=s[x[jvj+37]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+37];
pile[v[22]]=459; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(459,jvj+25,jvj+26)*/
pile[v[22]]=447; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(447,jvj+25,jvj+27)*/
V33=x[jvj+27];
V35=x[jvj+26];
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V33,0,V32)*/
V32=pile[WZ3]; 
pile[WZ1]=V35; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V35,V32,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l14:x[jvj+37]=t[x[jvj+37]];
goto l13;
l17:x[jvj+30]=t[x[jvj+30]];
goto l15;
}
