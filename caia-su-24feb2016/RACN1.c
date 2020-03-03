#include "dx.h"
void RACN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V19=0,H=0,V2=0,V8=0,V6=0,V5=0,V4=0,T=0,V11=0,V9=0,V10=0,Y=0,P=0,V16=0,V17=0,V15=0,V13=0,V12=0,V20=0;
int X,A,B,C,E;
int R;
int WZ1,WZ2;

X=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; E=pile[v[22]+4]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
V20=E;
V19=X;
l28:R=P=incon;
if((A!=0)) goto l1;
R=0;
l1:V3=B-1;
pile[v[22]]=V3; pile[WZ1]=V19; 
(*f[1006])( );if(v[102]) goto l26;     /*POWER0(V3,V19,H)*/
H=pile[WZ2]; 
V2=B*H;
if((V2<=0)) goto l26;
V8=H*V19;
V6=V3*V8;
V5=V6+A;
V4=V5/V2;
T=V4;
V9=incon;
if((T<=0)) goto l2;
V9=T;
l3:V10=incon;
if((B==2)) goto l4;
if((B==3)) goto l5;
if((B==4)) goto l6;
if((B==5)) goto l7;
if((B==6)) goto l8;
if((B==7)) goto l9;
if((B==8)) goto l10;
if((B<9)) goto l12;
if((V9<=3)) goto l11;
if((B>17)) goto l11;
V10=3;
l17:Y=V10;
pile[v[22]]=B; pile[WZ1]=Y; 
(*f[1006])( );if(v[102]) goto l19;     /*POWER0(B,Y,P)*/
P=pile[WZ2]; 
l19:if(R==incon) goto l20;
l27:v[22]-=6; pile[v[22]+5]=R; v[102]=0;return;
l2:V11=(-T);
V9=V11;
if((T!=0)) goto l3;
V9=20;
goto l3;
l4:if((V9<=30000)) goto l12;
V10=30000;
goto l17;
l5:if((V9<=900)) goto l12;
V10=900;
goto l17;
l6:if((V9<=120)) goto l12;
V10=120;
goto l17;
l7:if((V9<=50)) goto l12;
V10=50;
goto l17;
l8:if((V9<=25)) goto l12;
V10=25;
goto l17;
l9:if((V9<=15)) goto l12;
V10=15;
goto l17;
l10:if((V9<=10)) goto l12;
V10=10;
goto l17;
l11:if((B<=23)) goto l12;
l14:if((V9<=1)) goto l15;
V10=1;
goto l17;
l12:if((V9<=2)) goto l13;
if((B<=17)) goto l16;
V10=2;
l13:if((B>23)) goto l14;
l15:if(V10==incon) goto l16;
goto l17;
l16:V10=V9;
goto l17;
l18:V16=V17;
l23:if((V16==(-99999998))) goto l24;
pile[v[22]]=B; pile[WZ1]=V17; 
(*f[1006])( );if(v[102]) goto l24;     /*POWER0(B,V17,V15)*/
V15=pile[WZ2]; 
if((A>=V15)) goto l24;
R=V16;
goto l27;
l20:if(P!=incon) goto l21;
l24:V13=Y-V19;
V12=abs(V13);
if((V12>=V20)) goto l25;
V19=Y;
V20=V12;
goto l28;
l21:if((P==A)) goto l22;
if((A<=P)) goto l24;
V17=Y+1;
V16=incon;
if((x[C]==28)) goto l18;
if((x[C]!=30)) goto l24;
V16=Y;
goto l23;
l22:R=Y;
goto l27;
l26:if(R!=incon) goto l27;
l25:v[22]-=6; v[102]=1;return;
}
