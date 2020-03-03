#include "dx.h"
void VALPRIO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BL,A,S,F;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=11152;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1442&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; A=pile[v[22]+1]; S=pile[v[22]+2]; F=pile[v[22]+3]; Z=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=BL; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(BL,274,Z)*/
if((x[A]==902)) goto l15;
if((x[A]!=904)) goto l1;
pile[v[22]]=603; pile[WZ1]=602; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(603,602,Z,2,36)*/
l1:x[jvj+2]=incon;
if((F<0)) goto l8;
if((F<=3)) goto l2;
if((F<=10)) goto l3;
if((F<=31)) goto l4;
if((F<=95)) goto l5;
if((F<=296)) goto l6;
if((F<=934)) goto l7;
x[jvj+2]=607 ;z[jvj+2]=607;
l16:pile[v[22]]=jvj+2; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+2,607,Z,3,36)*/
l8:x[jvj+3]=incon;
if((S<0)) goto l18;
if((S<=3)) goto l9;
if((S<=10)) goto l10;
if((S<=31)) goto l11;
if((S<=95)) goto l12;
if((S<=296)) goto l13;
if((S<=934)) goto l14;
x[jvj+3]=606 ;z[jvj+3]=606;
l17:pile[v[22]]=jvj+3; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+3,602,Z,4,36)*/
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+2]=606 ;z[jvj+2]=606;
goto l16;
l3:x[jvj+2]=605 ;z[jvj+2]=605;
goto l16;
l4:x[jvj+2]=604 ;z[jvj+2]=604;
goto l16;
l5:x[jvj+2]=206 ;z[jvj+2]=206;
goto l16;
l6:x[jvj+2]=603 ;z[jvj+2]=603;
goto l16;
l7:x[jvj+2]=602 ;z[jvj+2]=602;
goto l16;
l9:x[jvj+3]=607 ;z[jvj+3]=607;
goto l17;
l10:x[jvj+3]=602 ;z[jvj+3]=602;
goto l17;
l11:x[jvj+3]=603 ;z[jvj+3]=603;
goto l17;
l12:x[jvj+3]=206 ;z[jvj+3]=206;
goto l17;
l13:x[jvj+3]=604 ;z[jvj+3]=604;
goto l17;
l14:x[jvj+3]=605 ;z[jvj+3]=605;
goto l17;
l15:pile[v[22]]=602; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(602,602,Z,1,36)*/
goto l1;
}
