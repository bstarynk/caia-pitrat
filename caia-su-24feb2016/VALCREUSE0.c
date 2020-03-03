#include "dx.h"
void VALCREUSE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0;
int A;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11011;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1269&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(A,274,Z)*/
pile[v[22]]=1078; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1078,A,jvj+2)*/
pile[v[22]]=1249; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1249,jvj+2,jvj+3)*/
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,5,36)*/
l25:pile[v[22]]=913; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(913,A,jvj+4)*/
x[jvj+5]=incon;
if((x[jvj+4]==279)) goto l13;
if((x[jvj+4]==412)) goto l14;
if((x[jvj+4]==659)) goto l14;
if((x[jvj+4]==899)) goto l15;
if((x[jvj+4]==493)) goto l16;
if((x[jvj+4]==753)) goto l17;
if((x[jvj+4]==1052)) goto l14;
if((x[jvj+4]==1063)) goto l13;
l27:pile[v[22]]=1245; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1245,jvj+4,V3)*/
V3=pile[WZ2]; 
x[jvj+6]=incon;
if((V3<0)) goto l18;
if((V3<=1)) goto l7;
if((V3<=3)) goto l8;
if((V3<=7)) goto l9;
if((V3<=13)) goto l10;
if((V3<=25)) goto l11;
if((V3<=44)) goto l12;
x[jvj+6]=606 ;z[jvj+6]=606;
l28:pile[v[22]]=jvj+6; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+6,607,Z,2,36)*/
l18:x[jvj+7]=incon;
if((V3<0)) goto l30;
if((V3<=2)) goto l19;
if((V3<=8)) goto l20;
if((V3<=21)) goto l21;
if((V3<=61)) goto l22;
if((V3<=156)) goto l23;
if((V3<=468)) goto l24;
x[jvj+7]=606 ;z[jvj+7]=606;
l29:pile[v[22]]=jvj+7; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+7,607,Z,4,36)*/
l30:pile[v[22]]=510; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,A,V1)*/
V1=pile[WZ2]; 
x[jvj+8]=incon;
if((V1<0)) goto l32;
if((V1<=10)) goto l1;
if((V1<=95)) goto l2;
if((V1<=934)) goto l3;
if((V1<=9404)) goto l4;
if((V1<=94832)) goto l5;
if((V1<=956428)) goto l6;
x[jvj+8]=606 ;z[jvj+8]=606;
l31:pile[v[22]]=jvj+8; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+8,607,Z,1,36)*/
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+8]=607 ;z[jvj+8]=607;
goto l31;
l2:x[jvj+8]=602 ;z[jvj+8]=602;
goto l31;
l3:x[jvj+8]=603 ;z[jvj+8]=603;
goto l31;
l4:x[jvj+8]=206 ;z[jvj+8]=206;
goto l31;
l5:x[jvj+8]=604 ;z[jvj+8]=604;
goto l31;
l6:x[jvj+8]=605 ;z[jvj+8]=605;
goto l31;
l7:x[jvj+6]=607 ;z[jvj+6]=607;
goto l28;
l8:x[jvj+6]=602 ;z[jvj+6]=602;
goto l28;
l9:x[jvj+6]=603 ;z[jvj+6]=603;
goto l28;
l10:x[jvj+6]=206 ;z[jvj+6]=206;
goto l28;
l11:x[jvj+6]=604 ;z[jvj+6]=604;
goto l28;
l12:x[jvj+6]=605 ;z[jvj+6]=605;
goto l28;
l13:x[jvj+5]=603 ;z[jvj+5]=603;
l26:pile[v[22]]=jvj+5; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+5,602,Z,3,36)*/
goto l27;
l14:x[jvj+5]=607 ;z[jvj+5]=607;
goto l26;
l15:x[jvj+5]=206 ;z[jvj+5]=206;
goto l26;
l16:x[jvj+5]=602 ;z[jvj+5]=602;
goto l26;
l17:x[jvj+5]=616 ;z[jvj+5]=616;
goto l26;
l19:x[jvj+7]=607 ;z[jvj+7]=607;
goto l29;
l20:x[jvj+7]=602 ;z[jvj+7]=602;
goto l29;
l21:x[jvj+7]=603 ;z[jvj+7]=603;
goto l29;
l22:x[jvj+7]=206 ;z[jvj+7]=206;
goto l29;
l23:x[jvj+7]=604 ;z[jvj+7]=604;
goto l29;
l24:x[jvj+7]=605 ;z[jvj+7]=605;
goto l29;
}
