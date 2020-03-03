#include "dx.h"
void MEVALE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,I1=0,T=0,T1=0,V17=0,V19=0,I2=0,R=0,T2=0,V12=0,V13=0,V20=0,V21=0;
int Y,X,P,BT;
int AT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10069;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1996&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; X=pile[v[22]+1]; P=pile[v[22]+2]; BT=pile[v[22]+3]; AT=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
I2=x[jvj+2]=T=T1=incon;
if((x[BT]==102)) goto l2;
if((x[BT]!=103)) goto l3;
pile[v[22]]=844; pile[WZ1]=P; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(844,P,jvj+2)*/
l3:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,X,jvj+3)*/
if((x[jvj+4]=w[x[jvj+3]][3])==incon) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(jvj+4,Y,I1)*/
I1=pile[WZ2]; 
l5:pile[v[22]]=145; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(145,Y,jvj+7)*/
if(x[jvj+7]!=30&&x[jvj+7]!=28) goto l6;
if((x[jvj+7]==30)) goto l7;
if((x[jvj+7]!=28)) goto l8;
V19=I1-1;
T=27;
T1=V19;
l8:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(100,X,jvj+8)*/
if((x[jvj+9]=w[x[jvj+8]][3])==incon) goto l1;
pile[v[22]]=jvj+9; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(jvj+9,X,I2)*/
I2=pile[WZ2]; 
l1:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,X,V3)*/
V3=pile[WZ2]; 
if((V3==(-99999998))) goto l10;
l9:pile[v[22]]=158; pile[WZ1]=Y; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,Y,jvj+10)*/
if((x[jvj+8]==x[jvj+10])) goto l10;
pile[v[22]]=10069; pile[WZ1]=X; pile[WZ2]=(-4383); pile[WZ3]=jvj+10; 
(*f[1061])( );     /*FAUTE4(10069,X,(-4383),jvj+10)*/
l10:if(I2!=incon) goto l11;
l33:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l2:x[jvj+2]=x[P] ;z[jvj+2]=z[P];
goto l3;
l4:pile[v[22]]=158; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(158,Y,jvj+5)*/
if((x[jvj+3]==x[jvj+5])) goto l8;
if((x[jvj+6]=w[x[jvj+5]][3])==incon) goto l8;
pile[v[22]]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(jvj+6,Y,I1)*/
I1=pile[WZ2]; 
goto l5;
l6:T=x[jvj+7];
T1=I1;
goto l8;
l7:V17=I1+1;
T=29;
T1=V17;
goto l8;
l11:if(x[jvj+2]!=incon) goto l12;
goto l33;
l12:if(x[jvj+2]!=30&&x[jvj+2]!=28) goto l13;
if((x[jvj+2]==30)) goto l14;
if((x[jvj+2]!=28)) goto l33;
V13=I2-1;
R=27;
T2=V13;
l15:if(T!=incon) goto l16;
goto l33;
l13:R=x[jvj+2];
T2=I2;
goto l15;
l14:V12=I2+1;
R=29;
T2=V12;
goto l15;
l16:if(T1!=incon) goto l17;
goto l33;
l17:if((T==25)) goto l18;
if((T==26)) goto l25;
if((T==27)) goto l26;
if((T!=29)) goto l33;
if((R==29)) goto l30;
if((R==25)) goto l31;
if((R==27)) goto l32;
if((R!=26)) goto l33;
if((T2>=T1)) goto l20;
goto l33;
l18:if((T1==T2)) goto l19;
if((R==25)) goto l21;
l22:if((R==27)) goto l23;
if((R==29)) goto l24;
if((R!=26)) goto l33;
if((T1!=T2)) goto l20;
goto l33;
l19:if((R==25)) goto l20;
if((R==26)) goto l21;
goto l22;
l21:x[AT]=134 ;z[AT]=134;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l23:if((T2>=T1)) goto l21;
l20:x[AT]=135 ;z[AT]=135;
goto l34;
l24:if((T2<=T1)) goto l21;
goto l20;
l25:if((T1!=T2)) goto l33;
if((R==26)) goto l20;
if((R==25)) goto l21;
goto l33;
l26:if((R==27)) goto l27;
if((R==25)) goto l28;
if((R==29)) goto l29;
if((R!=26)) goto l33;
if((T2<=T1)) goto l20;
goto l33;
l27:if((T2<=T1)) goto l20;
goto l33;
l28:if((T2<=T1)) goto l21;
goto l33;
l29:V20=T1+1;
if((T2<=V20)) goto l21;
goto l33;
l30:if((T2>=T1)) goto l20;
goto l33;
l31:if((T2>=T1)) goto l21;
goto l33;
l32:V21=T1-1;
if((T2>=V21)) goto l21;
goto l33;
}
