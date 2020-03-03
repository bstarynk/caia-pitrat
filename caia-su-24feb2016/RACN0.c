#include "dx.h"
void RACN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V3=0,H=0,V2=0,V8=0,V6=0,V5=0,V4=0,T=0,V11=0,V9=0,V10=0,E=0,Y=0,P=0,V16=0,V17=0,V15=0,V13=0,V12=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
T=R=P=incon;
if((A!=0)) goto l1;
R=0;
l1:X=2;
V3=B-1;
pile[v[22]]=V3; pile[WZ1]=X; 
(*f[1006])( );if(v[102]) goto l18;     /*POWER0(V3,X,H)*/
H=pile[WZ2]; 
V2=B*H;
if((V2<=0)) goto l18;
V8=H*X;
V6=V3*V8;
V5=V6+A;
V4=V5/V2;
T=V4;
l18:E=999999999;
if(T!=incon) goto l2;
if(R!=incon) goto l28;
l27:v[22]-=4; v[102]=1;return;
l2:V9=incon;
if((T<=0)) goto l3;
V9=T;
l4:V10=incon;
if((B==2)) goto l5;
if((B==3)) goto l6;
if((B==4)) goto l7;
if((B==5)) goto l8;
if((B==6)) goto l9;
if((B==7)) goto l10;
if((B==8)) goto l11;
if((B<9)) goto l13;
if((V9<=3)) goto l12;
if((B>17)) goto l12;
V10=3;
l19:Y=V10;
pile[v[22]]=B; pile[WZ1]=Y; 
(*f[1006])( );if(v[102]) goto l21;     /*POWER0(B,Y,P)*/
P=pile[WZ2]; 
l21:if(R==incon) goto l22;
l28:v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l3:V11=(-T);
V9=V11;
if((T!=0)) goto l4;
V9=20;
goto l4;
l5:if((V9<=30000)) goto l13;
V10=30000;
goto l19;
l6:if((V9<=900)) goto l13;
V10=900;
goto l19;
l7:if((V9<=120)) goto l13;
V10=120;
goto l19;
l8:if((V9<=50)) goto l13;
V10=50;
goto l19;
l9:if((V9<=25)) goto l13;
V10=25;
goto l19;
l10:if((V9<=15)) goto l13;
V10=15;
goto l19;
l11:if((V9<=10)) goto l13;
V10=10;
goto l19;
l12:if((B<=23)) goto l13;
l15:if((V9<=1)) goto l16;
V10=1;
goto l19;
l13:if((V9<=2)) goto l14;
if((B<=17)) goto l17;
V10=2;
l14:if((B>23)) goto l15;
l16:if(V10==incon) goto l17;
goto l19;
l17:V10=V9;
goto l19;
l20:V16=V17;
l25:if((V16==(-99999998))) goto l26;
pile[v[22]]=B; pile[WZ1]=V17; 
(*f[1006])( );if(v[102]) goto l26;     /*POWER0(B,V17,V15)*/
V15=pile[WZ2]; 
if((A>=V15)) goto l26;
R=V16;
goto l28;
l22:if(P!=incon) goto l23;
l26:V13=Y-X;
V12=abs(V13);
if((V12>=E)) goto l27;
pile[v[22]]=Y; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=C; pile[WZ4]=V12; 
(*f[1356])( );if(v[102]) goto l27;     /*RACN1(Y,A,B,C,V12,R)*/
R=pile[WZ5]; 
goto l28;
l23:if((P==A)) goto l24;
if((A<=P)) goto l26;
V17=Y+1;
V16=incon;
if((x[C]==28)) goto l20;
if((x[C]!=30)) goto l26;
V16=Y;
goto l25;
l24:R=Y;
goto l28;
}
