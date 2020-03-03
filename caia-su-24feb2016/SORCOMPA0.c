#include "dx.h"
void SORCOMPA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,V8=0,V7=0,V5=0,V16=0,V17=0,V18=0,V19=0,V11=0,V22=0,V23=0,V24=0,V25=0,V26=0,V39=0,V40=0,V41=0,V32=0,V37=0,V31=0,V36=0;
int T,N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

T=pile[v[22]]; N=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=145; pile[WZ1]=T; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(145,T,jvj+1)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,T,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=898; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(898,T,jvj+2)*/
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(N,0,32,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V16,42,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=jvj+1; 
(*f[42])( );     /*SRA1(135,V17,jvj+1,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,V5,V18,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V19,(-4670),V2)*/
V2=pile[WZ2]; 
V1=incon;
if((V5>1)) goto l1;
V1=V2;
l3:pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
pile[v[22]]=jvj+2; pile[WZ1]=0; pile[WZ2]=N; 
(*f[846])( );     /*SORENSPB0(jvj+2,0,N)*/
l4:pile[v[22]]=447; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,T,jvj+3)*/
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,T,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(459,T,jvj+4)*/
pile[v[22]]=898; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(898,T,jvj+5)*/
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(N,0,32,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V22,42,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=jvj+3; 
(*f[42])( );     /*SRA1(135,V23,jvj+3,V24)*/
V24=pile[WZ3]; 
pile[WZ1]=V24; pile[WZ2]=jvj+4; 
(*f[42])( );     /*SRA1(135,V24,jvj+4,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V25; 
(*f[39])( );     /*SDX0(41,V11,V25,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V26,(-4670),V8)*/
V8=pile[WZ2]; 
V7=incon;
if((V11>1)) goto l2;
V7=V8;
l5:pile[v[22]]=V7; 
(*f[40])( );     /*SLG0(V7)*/
pile[v[22]]=jvj+5; pile[WZ1]=0; pile[WZ2]=N; 
(*f[846])( );     /*SORENSPB0(jvj+5,0,N)*/
l6:pile[v[22]]=226; pile[WZ1]=T; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(226,T,jvj+6)*/
l7:if((x[jvj+6]>0)) goto l8;
v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=V2; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V2,83,V1)*/
V1=pile[WZ2]; 
goto l3;
l2:pile[v[22]]=V8; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V8,83,V7)*/
V7=pile[WZ2]; 
goto l5;
l8:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=122; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(122,jvj+7,jvj+8)*/
pile[v[22]]=N; pile[WZ1]=0; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(N,0,32,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V39,61,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V40,62,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V41; pile[WZ2]=jvj+8; 
(*f[42])( );     /*SRA1(135,V41,jvj+8,V32)*/
V32=pile[WZ3]; 
V31=incon;
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+7,jvj+9)*/
pile[v[22]]=135; pile[WZ1]=V32; pile[WZ2]=262; 
(*f[42])( );     /*SRA1(135,V32,262,V37)*/
V37=pile[WZ3]; 
pile[WZ1]=V37; pile[WZ2]=jvj+9; 
(*f[42])( );     /*SRA1(135,V37,jvj+9,V31)*/
V31=pile[WZ3]; 
l9:pile[v[22]]=V31; 
(*f[40])( );     /*SLG0(V31)*/
l10:pile[v[22]]=256; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(256,jvj+7,jvj+10)*/
V36=N+4;
l11:if((x[jvj+10]>0)) goto l12;
x[jvj+6]=t[x[jvj+6]];
goto l7;
l12:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=V36; 
(*f[498])( );     /*SORCOMPA0(jvj+11,V36)*/
x[jvj+10]=t[x[jvj+10]];
goto l11;
l13:V31=V32;
goto l9;
}
