#include "dx.h"
void TRADNAM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,HH=0,V23=0,V13=0,V20=0,V21=0,V12=0,V18=0,V25=0,V24=0;
int R,RR,BL;
int BA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11834;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1247&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; BL=pile[v[22]+2]; BA=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=218; pile[WZ1]=R; pile[WZ2]=459; pile[WZ3]=68; pile[WZ4]=BA; 
(*f[181])( );     /*QUADRI2(218,R,459,68,BA)*/
pile[v[22]]=(-11438); pile[WZ1]=1881; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0((-11438),1881,BA)*/
pile[v[22]]=1871; pile[WZ1]=BL; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1871,BL,jvj+5)*/
pile[v[22]]=1673; pile[WZ1]=22; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1673,22,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l10;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=754; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(754,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=1877; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1877,jvj+3,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,jvj+5,jvj+9)*/
pile[v[22]]=V3; pile[WZ1]=jvj+9; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V3,jvj+9,BA)*/
(*f[1518])( );     /*NATFNS1(V3,jvj+9,BA)*/
pile[v[22]]=1878; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1878,jvj+3,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+4,jvj+5,jvj+6)*/
pile[v[22]]=V3; pile[WZ1]=jvj+6; pile[WZ2]=BA; 
(*f[1506])( );     /*NATFNS0(V3,jvj+6,BA)*/
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; 
(*f[1494])( );     /*FNDEXPR0(jvj+11)*/
x[jvj+10]=t[x[jvj+10]];
l3:if((x[jvj+10]>0)) goto l4;
pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+14)*/
l6:if((x[jvj+14]>0)) goto l7;
pile[v[22]]=1260; pile[WZ1]=BA; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=1260; 
(*f[34])( );     /*CHGC0(R,1260,jvj+16)*/
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l5:V12=V13;
l9:pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l8:x[jvj+14]=t[x[jvj+14]];
goto l6;
l7:x[jvj+12]=s[x[jvj+14]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+14];
pile[v[22]]=110; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(110,jvj+12,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1261,jvj+12,jvj+15)*/
V25=x[jvj+15];
pile[v[22]]=0; pile[WZ1]=V18; 
(*f[37])( );     /*SRA0(0,V18,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V25; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(23,V25,V24,V13)*/
V13=pile[WZ3]; 
V12=incon;
pile[v[22]]=129; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(129,jvj+12,jvj+13)*/
HH=x[jvj+13];
V23=HH;
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=129; 
(*f[42])( );     /*SRA1(135,V13,129,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V20,61,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V23; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(20,V23,V21,V12)*/
V12=pile[WZ3]; 
goto l9;
l10:pile[v[22]]=RR; pile[WZ1]=BA; 
(*f[1519])( );     /*NATFN0(RR,BA)*/
pile[v[22]]=1260; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+10)*/
goto l3;
}
