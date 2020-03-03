#include "dx.h"
void CODN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V25=0,V2=0,V5=0,V3=0,V4=0,V1=0,N=0,V23=0,V22=0,V21=0,V19=0,V14=0,V13=0,V30=0,V31=0,V32=0,V9=0,RR=0,V11=0,V7=0;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10783;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==128&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=163; pile[WZ1]=905; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(163,905,V2)*/
V2=pile[WZ2]; 
if((V2!=(-11721))) goto l1;
pile[v[22]]=510; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,854,V23)*/
V23=pile[WZ2]; 
V22=V23+1;
V21=sepfacts+V22;
l4:if((V21>sephist)) goto l11;
V19=r[V21];
if((V19!=1)) goto l5;
V21++;
goto l4;
l1:pile[v[22]]=510; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,854,V5)*/
V5=pile[WZ2]; 
V3=sepfacts+1;
V4=sepfacts+V5;
l2:if((V3>V4)) goto l11;
V1=r[V3];
if((V1!=1)) goto l3;
V3++;
goto l2;
l3:N=V3;
l6:x[jvj+5]=N ;z[jvj+5]=(N<=sepcte) ? N : 0;
r[N]=1;
s[N]=68;
x[R]=x[jvj+5] ;z[R]=z[jvj+5];
w[N][0]=(-5598);
pile[v[22]]=R; pile[WZ1]=3; pile[WZ2]=(-5598); 
(*f[177])( );     /*CHGC4(R,3,(-5598))*/
pile[WZ1]=100; pile[WZ2]=854; 
(*f[35])( );     /*CHGC1(R,100,854)*/
V14=sephist-sepfacts;
V13=N+V14;
x[jvj+2]=V13 ;z[jvj+2]=(V13<=sepcte) ? V13 : 0;
r[V13]=1;
s[V13]=68;
w[V13][0]=(-6231);
pile[v[22]]=jvj+2; pile[WZ2]=746; 
(*f[35])( );     /*CHGC1(jvj+2,100,746)*/
pile[WZ1]=983; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+2,983,R)*/
pile[v[22]]=R; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(R,983,jvj+2)*/
pile[v[22]]=jvj+2; pile[WZ1]=3; pile[WZ2]=(-6231); 
(*f[177])( );     /*CHGC4(jvj+2,3,(-6231))*/
pile[v[22]]=0; pile[WZ1]=(-5609); 
(*f[37])( );     /*SRA0(0,(-5609),V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=(-5598); 
(*f[37])( );     /*SRA0(V30,(-5598),V31)*/
V31=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=N; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,N,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
pile[v[22]]=R; pile[WZ1]=708; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,708,68)*/
V7=incon;
V9=bh[v[1]][2];
if((V9==32)) goto l9;
pile[v[22]]=159; pile[WZ1]=905; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,905,jvj+3)*/
pile[v[22]]=1; 
(*f[258])( );     /*SMV1(1,RR)*/
RR=pile[WZ1]; 
l7:if((x[jvj+3]<=0)) goto l9;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,jvj+4,V11)*/
V11=pile[WZ2]; 
if((V11!=RR)) goto l8;
V7=RR;
l10:pile[v[22]]=R; pile[WZ1]=905; pile[WZ2]=V7; 
(*f[177])( );     /*CHGC4(R,905,V7)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=0;return;
l5:N=V21;
V24=V21-sepfacts;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1484,854,V25)*/
V25=pile[WZ2]; 
if((V24<=V25)) goto l6;
pile[v[22]]=854; pile[WZ1]=1484; pile[WZ2]=V24; 
(*f[43])( );     /*CHGC2(854,1484,V24)*/
goto l6;
l8:x[jvj+3]=t[x[jvj+3]];
goto l7;
l9:pile[v[22]]=163; pile[WZ1]=905; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,905,V7)*/
V7=pile[WZ2]; 
goto l10;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; v[102]=1;return;
}
