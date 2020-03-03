#include "dx.h"
void NUMDCL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V21=0,V29=0,V27=0,V26=0,V25=0,J=0,V24=0,V=0;
int BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11569;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==389&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1546; pile[WZ1]=BL; 
(*f[71])( );     /*ENLV0(1546,BL)*/
pile[v[22]]=1420; 
(*f[71])( );     /*ENLV0(1420,BL)*/
pile[v[22]]=762; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(762,BL,jvj+15)*/
pile[v[22]]=102; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,BL,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+16,jvj+17)*/
pile[v[22]]=108; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(108,jvj+16,jvj+18)*/
l11:if((x[jvj+15]<=0)) goto l13;
V=s[x[jvj+15]];
if((x[jvj+17]!=69)) goto l12;
x[jvj+19]=x[jvj+18] ;z[jvj+19]=z[jvj+18];
l1:if((x[jvj+19]>0)) goto l2;
x[jvj+20]=x[jvj+18] ;z[jvj+20]=z[jvj+18];
l4:if((x[jvj+20]<=0)) goto l12;
x[jvj+7]=s[x[jvj+20]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+20];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=108)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+7,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+9,V21)*/
V21=pile[WZ2]; 
if((V!=V21)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+7,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==749)) goto l9;
l5:x[jvj+20]=t[x[jvj+20]];
goto l4;
l2:x[jvj+2]=s[x[jvj+19]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+19];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=108)) goto l3;
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+4,V12)*/
V12=pile[WZ2]; 
if((V!=V12)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==576)) goto l9;
l3:x[jvj+19]=t[x[jvj+19]];
goto l1;
l7:x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+13,V29)*/
V29=pile[WZ2]; 
if((V29!=V24)) goto l8;
J++;
if((J<=2)) goto l10;
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l8:x[jvj+21]=t[x[jvj+21]];
l6:if((x[jvj+21]>0)) goto l7;
pile[v[22]]=110; pile[WZ1]=V; pile[WZ2]=117; pile[WZ3]=V24; pile[WZ4]=jvj+14; 
(*f[752])( );     /*QUADRI15(110,V,117,V24,jvj+14)*/
pile[v[22]]=BL; pile[WZ1]=1546; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(BL,1546,jvj+14)*/
goto l12;
l9:V27=x[BL];
V26=V27-sepfacts;
V25=3*V26;
J=0;
l10:V24=V25+J;
pile[v[22]]=1546; pile[WZ1]=BL; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1546,BL,jvj+12)*/
x[jvj+21]=x[jvj+12] ;z[jvj+21]=z[jvj+12];
goto l6;
l13:pile[v[22]]=BL; 
(*f[751])( );     /*CRINST0(BL)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
