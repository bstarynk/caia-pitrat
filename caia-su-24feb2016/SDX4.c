#include "dx.h"
void SDX4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,TY=0,V23=0,V20=0,YY=0,V2=0,V3=0,V4=0,V6=0,V61=0,V59=0,V60=0,V35=0,V40=0,V11=0,V12=0,V9=0,V10=0,V25=0,V14=0,V17=0,V63=0,V64=0;
int ATT,X,I,PX;
int L;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

ATT=pile[v[22]]; X=pile[v[22]+1]; I=pile[v[22]+2]; PX=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
L=TY=incon;
if((I<20000)) goto l1;
L=I;
l1:if((V27=w[x[ATT]][1])==incon) goto l7;
TY=V27;
l7:if(L==incon) goto l8;
l29:v[0]=jvj; v[22]-=5; pile[v[22]+4]=L; return;
l2:x[jvj+18]=67 ;z[jvj+18]=67;
l28:pile[v[22]]=91; pile[WZ1]=X; pile[WZ2]=I; pile[WZ3]=jvj+18; 
(*f[222])( );     /*SDE0(91,X,I,jvj+18,V14)*/
V14=pile[WZ4]; 
V17=V14+1;
c[v[1]][V14]=93;
L=V17;
goto l29;
l3:V23=I+1;
V20=V23;
l19:pile[v[22]]=V20; pile[WZ1]=jvj+11; 
(*f[223])( );if(v[102]) goto l20;     /*XX0(V20,jvj+11,L)*/
L=pile[WZ2]; 
if((V20==I)) goto l29;
c[v[1]][I]=94;
goto l29;
l4:x[jvj+1]=X ;z[jvj+1]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(277,jvj+1,jvj+2)*/
if(x[jvj+2]==480||x[jvj+2]==481) goto l17;
l16:pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l29;
l5:x[jvj+3]=X ;z[jvj+3]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+3,jvj+4)*/
l17:x[jvj+11]=X ;z[jvj+11]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+11,jvj+16)*/
if((x[jvj+16]!=508)) goto l18;
pile[v[22]]=365; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(365,jvj+11,jvj+12)*/
if((x[jvj+12]<=0)) goto l18;
YY=s[x[jvj+12]];
pile[v[22]]=135; pile[WZ1]=I; pile[WZ2]=jvj+11; 
(*f[98])( );     /*SRA3(135,I,jvj+11,L)*/
L=pile[WZ3]; 
goto l29;
l6:x[jvj+7]=X ;z[jvj+7]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(277,jvj+7,jvj+8)*/
if(x[jvj+8]==480||x[jvj+8]==481) goto l30;
l23:pile[v[22]]=30; pile[WZ1]=68; pile[WZ2]=X; 
(*f[225])( );     /*SRL0(30,68,X)*/
L=0;
goto l29;
l8:if(TY!=incon) goto l9;
l30:L=0;
V63=v[200];
pile[v[22]]=41; pile[WZ1]=V63; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V63,0,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
fflush(stdout);
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l9:if((TY==89)) goto l10;
if((TY==1317)) goto l11;
if((TY==20)) goto l12;
if((TY==96)) goto l24;
if((TY==21)) goto l25;
if((TY==23)) goto l26;
if((TY!=41)) goto l30;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l29;
l10:V2=X;
V3=I+1;
V4=V3+1;
V6=V4+1;
c[v[1]][V3]=V2;
c[v[1]][V4]=39;
L=V6;
c[v[1]][I]=39;
goto l29;
l11:V61=X;
pile[v[22]]=V61; pile[WZ1]=I; 
(*f[227])( );     /*SPCMT0(V61,I,V59)*/
V59=pile[WZ2]; 
V60=V59+1;
L=V60;
goto l29;
l12:if((X<=sepcte)) goto l13;
if((x[PX]!=41)) goto l14;
if((X<=sepcte)) goto l14;
pile[v[22]]=X; pile[WZ1]=I; 
(*f[221])( );     /*SRN0(X,I,L)*/
L=pile[WZ2]; 
goto l29;
l13:x[jvj+13]=X ;z[jvj+13]=(X<=sepcte) ? X : 0;
pile[v[22]]=jvj+13; pile[WZ1]=I; 
(*f[220])( );     /*SRA4(jvj+13,I,L)*/
L=pile[WZ2]; 
goto l29;
l14:if((X<=sepcte)) goto l30;
if(x[PX]!=67&&x[PX]!=257) goto l15;
x[jvj+14]=X ;z[jvj+14]=(X<=sepcte) ? X : 0;
pile[v[22]]=277; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(277,jvj+14,jvj+15)*/
if(x[jvj+15]!=480&&x[jvj+15]!=481) goto l15;
pile[v[22]]=I; 
(*f[226])( );     /*SDP0(I,jvj+14,L)*/
L=pile[WZ2]; 
goto l29;
l15:if((x[PX]==67)) goto l5;
if((x[PX]!=41)) goto l17;
goto l30;
l18:if((x[jvj+16]==508)) goto l20;
V20=incon;
if(x[jvj+16]==41||x[jvj+16]==89||x[jvj+16]==96||x[jvj+16]==20||x[jvj+16]==21) goto l3;
V20=I;
goto l19;
l20:if((x[PX]==68)) goto l21;
if((x[PX]!=257)) goto l30;
x[jvj+9]=X ;z[jvj+9]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+9,jvj+10)*/
goto l30;
l21:x[jvj+5]=X ;z[jvj+5]=(X<=sepcte) ? X : 0;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+5,jvj+6)*/
goto l30;
l22:pile[v[22]]=373; pile[WZ1]=jvj+5; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(373,jvj+5,jvj+17)*/
pile[v[22]]=I; pile[WZ1]=40; pile[WZ2]=X; pile[WZ3]=jvj+17; pile[WZ4]=PX; 
(*f[224])( );     /*SDA0(I,40,X,jvj+17,PX,V35)*/
V35=pile[WZ5]; 
V40=V35+1;
c[v[1]][V35]=41;
L=V40;
goto l29;
l24:V11=X;
V12=I+1;
c[v[1]][I]=96;
pile[v[22]]=V11; pile[WZ1]=V12; 
(*f[64])( );     /*SRA2(V11,V12,V9)*/
V9=pile[WZ2]; 
V10=V9+1;
c[v[1]][V9]=96;
L=V10;
goto l29;
l25:V25=X;
pile[v[22]]=V25; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V25,I,L)*/
L=pile[WZ2]; 
goto l29;
l26:if((X==0)) goto l27;
if((X==0)) goto l30;
x[jvj+18]=incon;
if((x[PX]==257)) goto l2;
x[jvj+18]=x[PX] ;z[jvj+18]=z[PX];
goto l28;
l27:pile[v[22]]=(-1278); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1278),I,L)*/
L=pile[WZ2]; 
goto l29;
}
