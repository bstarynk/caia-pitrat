#include "dx.h"
void SNUM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V6=0,V1=0,V3=0,M=0,A=0,J=0,V25=0,V26=0,V27=0,V28=0,V29=0,V31=0,V32=0,V34=0,V35=0,V12=0,V11=0,V40=0,V37=0,V39=0,V17=0,V16=0,V18=0,V43=0,V41=0,V42=0,V44=0,V45=0,V23=0,V22=0,V24=0,V49=0,V47=0,V48=0,V50=0,V51=0;
int C;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10353;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==82&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((C==32)) goto l3;
if((C==79)) goto l3;
l5:if((C==66)) goto l6;
l10:if((C==80)) goto l12;
l11:if((C==70)) goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=332; pile[WZ1]=jvj+3; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(332,jvj+3,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=331; 
(*f[219])( );if(v[102]) goto l4;     /*FNDC2(331,jvj+3,V3)*/
V3=pile[WZ2]; 
(*f[275])( );     /*DATE2(M,A,J)*/
M=pile[v[22]]; A=pile[WZ1]; J=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V3; 
(*f[38])( );     /*SPC0(0,V3,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=V1; 
(*f[38])( );     /*SPC0(V25,V1,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=(-710); 
(*f[37])( );     /*SRA0(V26,(-710),V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V27,58,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=J; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V28,J,41,V29)*/
V29=pile[WZ3]; 
pile[v[22]]=V29; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V29,45,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V31,M,41,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V32,45,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V34,A,41,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
I=1;
l1:if((I>sepbase)) goto l4;
V6=r[I];
if((V6!=1)) goto l2;
x[jvj+2]=I ;z[jvj+2]=(I<=sepcte) ? I : 0;
pile[v[22]]=jvj+2; 
(*f[109])( );     /*SD0(jvj+2)*/
l2:I++;
goto l1;
l4:if((C==32)) goto l6;
goto l5;
l6:V12=sepbase+1;
l7:if((V12<=sepbloc)) goto l9;
if((C==32)) goto l12;
goto l10;
l9:V11=r[V12];
if((V11!=1)) goto l8;
V40=V12;
pile[v[22]]=41; pile[WZ1]=V12; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V12,0,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V40,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l8:V12++;
goto l7;
l12:V17=sepcod+1;
l13:if((V17<=seppb)) goto l15;
if((C==32)) goto l16;
goto l11;
l15:V16=r[V17];
if((V16!=1)) goto l14;
V18=V17-sepcod;
V43=V17;
pile[v[22]]=0; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(0,(-2986),V41)*/
V41=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,V43,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=(-2987); 
(*f[37])( );     /*SRA0(V42,(-2987),V44)*/
V44=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,V18,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l14:V17++;
goto l13;
l16:V23=sepnouv+1;
l17:if((V23>sepfacts)) goto l19;
V22=r[V23];
if((V22!=1)) goto l18;
V24=V23-sepnouv;
V49=V23;
pile[v[22]]=0; pile[WZ1]=(-5092); 
(*f[37])( );     /*SRA0(0,(-5092),V47)*/
V47=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(20,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=(-2987); 
(*f[37])( );     /*SRA0(V48,(-2987),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V24; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(41,V24,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; 
(*f[40])( );     /*SLG0(V51)*/
l18:V23++;
goto l17;
}
