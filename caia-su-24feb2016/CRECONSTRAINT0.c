#include "dx.h"
void CRECONSTRAINT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V9=0,V24=0,V26=0,V25=0,V27=0,V20=0,V35=0,V36=0,V37=0,V38=0,V34=0,V33=0,V32=0,V31=0,V30=0;
int CT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10038;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==571&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
CT=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V7=sepnouv+1;
l2:if((V7<=sepfacts)) goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+15]=250 ;z[jvj+15]=250;
l7:x[jvj+9]=x[jvj+15] ;z[jvj+9]=z[jvj+15];
if((x[jvj+9]!=250)) goto l9;
V24=x[jvj+4];
V26=x[jvj+6];
pile[v[22]]=20; pile[WZ1]=V24; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V24,0,V25)*/
V25=pile[WZ3]; 
pile[WZ1]=V26; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(20,V26,V25,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
l9:if((V20=w[x[jvj+9]][1])==incon) goto l6;
if((V20==20)) goto l12;
if((V20!=23)) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(jvj+9,jvj+6,jvj+10)*/
V35=x[jvj+4];
l10:if((x[jvj+10]<=0)) goto l6;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=20; pile[WZ1]=V35; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V35,0,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V36; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V36,jvj+2,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=jvj+11; 
(*f[344])( );if(v[102]) goto l11;     /*XX1(V37,jvj+11,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; 
(*f[40])( );     /*SLG0(V38)*/
l11:x[jvj+10]=t[x[jvj+10]];
goto l10;
l3:V7++;
goto l2;
l4:V9=r[V7];
if((V9!=1)) goto l3;
x[jvj+4]=V7 ;z[jvj+4]=(V7<=sepcte) ? V7 : 0;
pile[v[22]]=CT; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(CT,jvj+4,jvj+5)*/
x[jvj+14]=x[jvj+5] ;z[jvj+14]=z[jvj+5];
l5:if((x[jvj+14]<=0)) goto l3;
x[jvj+6]=s[x[jvj+14]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+14];
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
x[jvj+2]=x[jvj+8] ;z[jvj+2]=z[jvj+8];
x[jvj+15]=incon;
pile[v[22]]=1696; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1696,jvj+2,jvj+3)*/
x[jvj+16]=x[jvj+3] ;z[jvj+16]=z[jvj+3];
x[jvj+15]=x[jvj+16] ;z[jvj+15]=z[jvj+16];
goto l7;
l12:pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; pile[WZ3]=jvj+13; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+6,jvj+9,V30,jvj+13)*/
V30=pile[WZ2]; 
x[jvj+12]=V30 ;z[jvj+12]=(x[jvj+13]==20&&V30<=sepcte) ? V30 : (x[jvj+13]==41) ? (-1000) : 0;
V31=x[jvj+4];
pile[v[22]]=20; pile[WZ1]=V31; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V31,0,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=jvj+2; 
(*f[42])( );     /*SRA1(135,V32,jvj+2,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; pile[WZ1]=jvj+12; 
(*f[344])( );if(v[102]) goto l6;     /*XX1(V33,jvj+12,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l6:x[jvj+14]=t[x[jvj+14]];
goto l5;
}
