#include "dx.h"
void SORJGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V10=0,V11=0,V21=0,V22=0,V24=0,V25=0,V26=0,V27=0,V7=0,V15=0,V16=0,V17=0,V18=0,V20=0,V13=0,V14=0;
int Z;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
if(v[0]>99700) (*f[6])( );

Z=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=159; pile[WZ1]=Z; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,Z,jvj+9)*/
l6:if((x[jvj+9]>0)) goto l7;
v[0]=jvj; v[22]-=1; return;
l1:V1=V2;
l9:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
pile[v[22]]=258; pile[WZ1]=jvj+1; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(258,jvj+1,jvj+7)*/
x[jvj+12]=x[jvj+7] ;z[jvj+12]=z[jvj+7];
l4:if((x[jvj+12]<=0)) goto l8;
x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+4,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=274; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(274,jvj+4,jvj+8)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=409; 
(*f[42])( );     /*SRA1(135,0,409,V15)*/
V15=pile[WZ3]; 
pile[WZ1]=V15; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V15,jvj+8,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=(-6739); 
(*f[37])( );     /*SRA0(V16,(-6739),V17)*/
V17=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V7; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,V7,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V18; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V18,53,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
pile[v[22]]=578; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(578,jvj+4,jvj+5)*/
x[jvj+11]=x[jvj+5] ;z[jvj+11]=z[jvj+5];
l2:if((x[jvj+11]<=0)) goto l5;
x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+6,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+6,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(10,0,32,V21)*/
V21=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(41,V11,V21,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V22; pile[WZ2]=53; 
(*f[42])( );     /*SRA1(135,V22,53,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; pile[WZ1]=(-6740); 
(*f[37])( );     /*SRA0(V24,(-6740),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V25; pile[WZ2]=611; 
(*f[42])( );     /*SRA1(135,V25,611,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(41,V10,V26,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l3:x[jvj+11]=t[x[jvj+11]];
goto l2;
l5:x[jvj+12]=t[x[jvj+12]];
goto l4;
l7:x[jvj+1]=s[x[jvj+9]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+9];
pile[v[22]]=1002; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1002,jvj+1,jvj+10)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1002; 
(*f[42])( );     /*SRA1(135,0,1002,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V13,61,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V14; pile[WZ2]=jvj+10; 
(*f[42])( );     /*SRA1(135,V14,jvj+10,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=550; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(550,jvj+1,jvj+2)*/
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=135; pile[WZ1]=V2; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V2,jvj+3,V1)*/
V1=pile[WZ3]; 
goto l9;
l8:x[jvj+9]=t[x[jvj+9]];
goto l6;
}
