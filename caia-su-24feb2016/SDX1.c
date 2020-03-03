#include "dx.h"
void SDX1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V20=0,YY=0,V2=0,V3=0,V4=0,V6=0,V60=0,V58=0,V59=0,V11=0,V12=0,V9=0,V10=0,V25=0,V14=0,V17=0,V62=0,V63=0;
int I,X,TY;
int L;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; X=pile[v[22]+1]; TY=pile[v[22]+2]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
L=incon;
if((I<20000)) goto l1;
L=I;
l1:x[jvj+11]=67 ;z[jvj+11]=67;
if(L==incon) goto l5;
l18:v[0]=jvj; v[22]-=4; pile[v[22]+3]=L; return;
l2:V23=I+1;
V20=V23;
l13:pile[v[22]]=V20; pile[WZ1]=jvj+5; 
(*f[223])( );if(v[102]) goto l19;     /*XX0(V20,jvj+5,L)*/
L=pile[WZ2]; 
if((V20==I)) goto l18;
c[v[1]][I]=94;
goto l18;
l3:x[jvj+1]=X ;z[jvj+1]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(277,jvj+1,jvj+2)*/
if(x[jvj+2]==480||x[jvj+2]==481) goto l11;
l10:pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l18;
l4:x[jvj+3]=X ;z[jvj+3]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+3,jvj+4)*/
l11:x[jvj+5]=X ;z[jvj+5]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+5,jvj+10)*/
if((x[jvj+10]!=508)) goto l12;
pile[v[22]]=365; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+5,jvj+6)*/
if((x[jvj+6]<=0)) goto l12;
YY=s[x[jvj+6]];
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,I,jvj+5,L)*/
L=pile[WZ3]; 
goto l18;
l5:if((x[TY]==89)) goto l6;
if((x[TY]==1317)) goto l7;
if((x[TY]==20)) goto l8;
if((x[TY]==96)) goto l14;
if((x[TY]==21)) goto l15;
if((x[TY]==23)) goto l16;
if((x[TY]!=41)) goto l19;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l18;
l6:V2=X;
V3=I+1;
V4=V3+1;
V6=V4+1;
c[v[1]][V3]=V2;
c[v[1]][V4]=39;
L=V6;
c[v[1]][I]=39;
goto l18;
l7:V60=X;
pile[v[22]]=V60; pile[WZ1]=I; 
(*f[227])( );     /*SPCMT0(V60,I,V58)*/
V58=pile[WZ2]; 
V59=V58+1;
L=V59;
goto l18;
l8:if((X<=sepcte)) goto l9;
if((X<=sepcte)) goto l19;
if(x[jvj+11]!=67&&x[jvj+11]!=257) goto l4;
x[jvj+8]=X ;z[jvj+8]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(277,jvj+8,jvj+9)*/
if(x[jvj+9]!=480&&x[jvj+9]!=481) goto l4;
pile[v[22]]=I; 
(*f[226])( );     /*SDP0(I,jvj+8,L)*/
L=pile[WZ2]; 
goto l18;
l9:x[jvj+7]=X ;z[jvj+7]=(X<=sepcte) ? X : 0;
pile[v[22]]=jvj+7; pile[WZ1]=I; 
(*f[220])( );     /*SRA4(jvj+7,I,L)*/
L=pile[WZ2]; 
goto l18;
l12:if((x[jvj+10]==508)) goto l19;
V20=incon;
if(x[jvj+10]==41||x[jvj+10]==89||x[jvj+10]==96||x[jvj+10]==20||x[jvj+10]==21) goto l2;
V20=I;
goto l13;
l14:V11=X;
V12=I+1;
c[v[1]][I]=96;
pile[v[22]]=V11; pile[WZ1]=V12; 
(*f[64])( );     /*SRA2(V11,V12,V9)*/
V9=pile[WZ2]; 
V10=V9+1;
c[v[1]][V9]=96;
L=V10;
goto l18;
l15:V25=X;
pile[v[22]]=V25; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V25,I,L)*/
L=pile[WZ2]; 
goto l18;
l16:if((X==0)) goto l17;
if((X==0)) goto l19;
;
pile[v[22]]=91; pile[WZ1]=X; pile[WZ2]=I; pile[WZ3]=jvj+11; 
(*f[222])( );     /*SDE0(91,X,I,jvj+11,V14)*/
V14=pile[WZ4]; 
V17=V14+1;
c[v[1]][V14]=93;
L=V17;
goto l18;
l17:pile[v[22]]=(-1278); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1278),I,L)*/
L=pile[WZ2]; 
goto l18;
l19:L=0;
V62=v[200];
pile[v[22]]=41; pile[WZ1]=V62; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V62,0,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
fflush(stdout);
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l18;
}
