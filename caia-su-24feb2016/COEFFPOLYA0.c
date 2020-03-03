#include "dx.h"
void COEFFPOLYA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V3=0,V28=0,V20=0,V19=0,V15=0,V21=0,V33=0,V35=0,V40=0,V42=0,V48=0,V54=0;
int A,N,E;
int RES;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=31;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; N=pile[v[22]+1]; E=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]!=484)) goto l8;
x[RES]=135 ;z[RES]=135;
V33=1;
x[jvj+28]=x[E] ;z[jvj+28]=z[E];
l16:if((x[jvj+28]>0)) goto l18;
x[jvj+13]=d[64];z[jvj+13]=0;
pile[v[22]]=510; pile[WZ1]=V33; pile[WZ2]=515; pile[WZ3]=N; pile[WZ4]=jvj+14; 
(*f[391])( );     /*QUADRI10(510,V33,515,N,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+13,jvj+14,E)*/
l15:v[0]=jvj; v[22]-=4; return;
l2:x[jvj+1]=s[x[jvj+10]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+10];
pile[v[22]]=jvj+1; pile[WZ1]=N; pile[WZ2]=E; pile[WZ3]=jvj+2; 
(*f[4002])( );     /*COEFFPOLYA0(jvj+1,N,E,jvj+2)*/
if((x[jvj+2]==134)) goto l14;
x[jvj+10]=t[x[jvj+10]];
l1:if((x[jvj+10]>0)) goto l2;
x[RES]=135 ;z[RES]=135;
goto l15;
l4:x[jvj+3]=s[x[jvj+25]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+25];
if((x[jvj+3]==x[jvj+12])) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]==484)) goto l5;
l13:x[jvj+27]=t[x[jvj+27]];
l12:if((x[jvj+27]<=0)) goto l14;
x[jvj+12]=s[x[jvj+27]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+27];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+12,V15)*/
V15=pile[WZ2]; 
x[jvj+25]=x[jvj+11] ;z[jvj+25]=z[jvj+11];
l3:if((x[jvj+25]>0)) goto l4;
V21=N*V15;
x[RES]=135 ;z[RES]=135;
x[jvj+31]=x[E] ;z[jvj+31]=z[E];
l25:if((x[jvj+31]>0)) goto l27;
x[jvj+22]=d[64];z[jvj+22]=0;
pile[v[22]]=510; pile[WZ1]=V19; pile[WZ2]=515; pile[WZ3]=V21; pile[WZ4]=jvj+23; 
(*f[391])( );     /*QUADRI10(510,V19,515,V21,jvj+23)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+22,jvj+23,E)*/
goto l15;
l5:x[jvj+25]=t[x[jvj+25]];
goto l3;
l7:x[jvj+5]=s[x[jvj+26]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+26];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l11;
x[jvj+26]=t[x[jvj+26]];
l6:if((x[jvj+26]>0)) goto l7;
for(i=x[jvj+11],V28=0;i>0;i=t[i],V28++)  ;
x[RES]=135 ;z[RES]=135;
x[jvj+30]=x[E] ;z[jvj+30]=z[E];
l22:if((x[jvj+30]>0)) goto l24;
x[jvj+19]=d[64];z[jvj+19]=0;
pile[v[22]]=510; pile[WZ1]=V28; pile[WZ2]=515; pile[WZ3]=N; pile[WZ4]=jvj+20; 
(*f[391])( );     /*QUADRI10(510,V28,515,N,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+19,jvj+20,E)*/
goto l15;
l8:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
V3=N*K;
x[RES]=135 ;z[RES]=135;
V40=0;
x[jvj+29]=x[E] ;z[jvj+29]=z[E];
l19:if((x[jvj+29]>0)) goto l21;
x[jvj+16]=d[64];z[jvj+16]=0;
pile[v[22]]=510; pile[WZ1]=V40; pile[WZ2]=515; pile[WZ3]=V3; pile[WZ4]=jvj+17; 
(*f[391])( );     /*QUADRI10(510,V40,515,V3,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; pile[WZ2]=E; 
(*f[196])( );     /*PLUF0(jvj+16,jvj+17,E)*/
goto l15;
l9:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==485)) goto l10;
if((x[jvj+9]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,A,jvj+11)*/
x[jvj+26]=x[jvj+11] ;z[jvj+26]=z[jvj+11];
goto l6;
l10:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,A,jvj+10)*/
goto l1;
l11:for(i=x[jvj+11],V20=0;i>0;i=t[i],V20++)  ;
V19=V20-1;
x[jvj+27]=x[jvj+11] ;z[jvj+27]=z[jvj+11];
goto l12;
l14:x[RES]=134 ;z[RES]=134;
goto l15;
l17:x[jvj+28]=t[x[jvj+28]];
goto l16;
l18:x[jvj+15]=s[x[jvj+28]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+28];
pile[v[22]]=510; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(510,jvj+15,V35)*/
V35=pile[WZ2]; 
if((V35!=V33)) goto l17;
pile[v[22]]=jvj+15; pile[WZ1]=515; pile[WZ2]=N; 
(*f[186])( );     /*BTC0(jvj+15,515,N)*/
goto l15;
l20:x[jvj+29]=t[x[jvj+29]];
goto l19;
l21:x[jvj+18]=s[x[jvj+29]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+29];
pile[v[22]]=510; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+18,V42)*/
V42=pile[WZ2]; 
if((V42!=V40)) goto l20;
pile[v[22]]=jvj+18; pile[WZ1]=515; pile[WZ2]=V3; 
(*f[186])( );     /*BTC0(jvj+18,515,V3)*/
goto l15;
l23:x[jvj+30]=t[x[jvj+30]];
goto l22;
l24:x[jvj+21]=s[x[jvj+30]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+30];
pile[v[22]]=510; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(510,jvj+21,V48)*/
V48=pile[WZ2]; 
if((V48!=V28)) goto l23;
pile[v[22]]=jvj+21; pile[WZ1]=515; pile[WZ2]=N; 
(*f[186])( );     /*BTC0(jvj+21,515,N)*/
goto l15;
l26:x[jvj+31]=t[x[jvj+31]];
goto l25;
l27:x[jvj+24]=s[x[jvj+31]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+31];
pile[v[22]]=510; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(510,jvj+24,V54)*/
V54=pile[WZ2]; 
if((V54!=V19)) goto l26;
pile[v[22]]=jvj+24; pile[WZ1]=515; pile[WZ2]=V21; 
(*f[186])( );     /*BTC0(jvj+24,515,V21)*/
goto l15;
}
