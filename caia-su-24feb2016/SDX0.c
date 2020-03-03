#include "dx.h"
void SDX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,I=0,V24=0,V21=0,YY=0,V3=0,V4=0,V5=0,V7=0,V61=0,V59=0,V60=0,V12=0,V13=0,V10=0,V11=0,V26=0,V15=0,V18=0,V63=0,V64=0;
int TY,X,II;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

TY=pile[v[22]]; X=pile[v[22]+1]; II=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
L=incon;
if((II>0)) goto l1;
I=0;
l3:x[jvj+11]=67 ;z[jvj+11]=67;
if(L==incon) goto l7;
l20:v[0]=jvj; v[22]-=4; pile[v[22]+3]=L; return;
l1:V1=II+1;
I=V1;
if((I<20000)) goto l2;
L=I;
l2:c[v[1]][II]=32;
goto l3;
l4:V24=I+1;
V21=V24;
l15:pile[v[22]]=V21; pile[WZ1]=jvj+5; 
(*f[223])( );if(v[102]) goto l21;     /*XX0(V21,jvj+5,L)*/
L=pile[WZ2]; 
if((V21==I)) goto l20;
c[v[1]][I]=94;
goto l20;
l5:x[jvj+1]=X ;z[jvj+1]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(277,jvj+1,jvj+2)*/
if(x[jvj+2]==480||x[jvj+2]==481) goto l13;
l12:pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l20;
l6:x[jvj+3]=X ;z[jvj+3]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+4)*/
l13:x[jvj+5]=X ;z[jvj+5]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+5,jvj+10)*/
if((x[jvj+10]!=508)) goto l14;
pile[v[22]]=365; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
if((x[jvj+6]<=0)) goto l14;
YY=s[x[jvj+6]];
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,I,jvj+5,L)*/
L=pile[WZ3]; 
goto l20;
l7:if((x[TY]==89)) goto l8;
if((x[TY]==1317)) goto l9;
if((x[TY]==20)) goto l10;
if((x[TY]==96)) goto l16;
if((x[TY]==21)) goto l17;
if((x[TY]==23)) goto l18;
if((x[TY]!=41)) goto l21;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l20;
l8:V3=X;
V4=I+1;
V5=V4+1;
V7=V5+1;
c[v[1]][V4]=V3;
c[v[1]][V5]=39;
L=V7;
c[v[1]][I]=39;
goto l20;
l9:V61=X;
pile[v[22]]=V61; pile[WZ1]=I; 
(*f[227])( );     /*SPCMT0(V61,I,V59)*/
V59=pile[WZ2]; 
V60=V59+1;
L=V60;
goto l20;
l10:if((X<=sepcte)) goto l11;
if((X<=sepcte)) goto l21;
if(x[jvj+11]!=67&&x[jvj+11]!=257) goto l6;
x[jvj+8]=X ;z[jvj+8]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(277,jvj+8,jvj+9)*/
if(x[jvj+9]!=480&&x[jvj+9]!=481) goto l6;
pile[v[22]]=I; 
(*f[226])( );     /*SDP0(I,jvj+8,L)*/
L=pile[WZ2]; 
goto l20;
l11:x[jvj+7]=X ;z[jvj+7]=(X<=sepcte) ? X : 0;
pile[v[22]]=jvj+7; pile[WZ1]=I; 
(*f[220])( );     /*SRA4(jvj+7,I,L)*/
L=pile[WZ2]; 
goto l20;
l14:if((x[jvj+10]==508)) goto l21;
V21=incon;
if(x[jvj+10]==41||x[jvj+10]==89||x[jvj+10]==96||x[jvj+10]==20||x[jvj+10]==21) goto l4;
V21=I;
goto l15;
l16:V12=X;
V13=I+1;
c[v[1]][I]=96;
pile[v[22]]=V12; pile[WZ1]=V13; 
(*f[64])( );     /*SRA2(V12,V13,V10)*/
V10=pile[WZ2]; 
V11=V10+1;
c[v[1]][V10]=96;
L=V11;
goto l20;
l17:V26=X;
pile[v[22]]=V26; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V26,I,L)*/
L=pile[WZ2]; 
goto l20;
l18:if((X==0)) goto l19;
if((X==0)) goto l21;
;
pile[v[22]]=91; pile[WZ1]=X; pile[WZ2]=I; pile[WZ3]=jvj+11; 
(*f[222])( );     /*SDE0(91,X,I,jvj+11,V15)*/
V15=pile[WZ4]; 
V18=V15+1;
c[v[1]][V15]=93;
L=V18;
goto l20;
l19:pile[v[22]]=(-1278); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1278),I,L)*/
L=pile[WZ2]; 
goto l20;
l21:L=0;
V63=v[200];
pile[v[22]]=41; pile[WZ1]=V63; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V63,0,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
fflush(stdout);
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
}
