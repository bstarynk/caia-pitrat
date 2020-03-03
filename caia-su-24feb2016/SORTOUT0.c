#include "dx.h"
void SORTOUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V1=0,R=0,V28=0,V21=0,V20=0,V7=0,V5=0,V19=0,V16=0,V17=0,V18=0,V11=0,V29=0,V27=0,V26=0,V14=0,V12=0,V25=0,V22=0,V23=0,V24=0;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10549;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==106&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
I=1;
l1:if((I<=sepbase)) goto l3;
V7=sepbase+1;
l5:if((V7<=sepbloc)) goto l7;
V14=sepexp+1;
l9:if((V14<=sepsimp)) goto l11;
l12:x[jvj+1]=incon; v[0]=jvj; return;
l3:V1=r[I];
if((V1!=1)) goto l2;
x[jvj+2]=I ;z[jvj+2]=(I<=sepcte) ? I : 0;
pile[v[22]]=jvj+2; 
(*f[109])( );     /*SD0(jvj+2)*/
l2:I++;
goto l1;
l6:V7++;
goto l5;
l7:V5=r[V7];
if((V5!=1)) goto l6;
x[jvj+3]=V7 ;z[jvj+3]=(V7<=sepcte) ? V7 : 0;
V19=x[jvj+3];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=5; pile[WZ1]=V16; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(5,V16,32,V17)*/
V17=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(20,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; 
(*f[40])( );     /*SLG0(V18)*/
pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+4)*/
V28=x[jvj+4];
l4:if((V28<=0)) goto l6;
R=s[V28];
V21=R;
pile[v[22]]=20; pile[WZ1]=V21; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V21,0,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=V20; 
(*f[40])( );     /*SLG0(V20)*/
V28=t[V28];
goto l4;
l10:V14++;
goto l9;
l11:V12=r[V14];
if((V12!=1)) goto l10;
x[jvj+5]=V14 ;z[jvj+5]=(V14<=sepcte) ? V14 : 0;
V25=x[jvj+5];
pile[v[22]]=30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(30,0,42,V22)*/
V22=pile[WZ3]; 
pile[WZ1]=V22; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,V22,32,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(20,V25,V23,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=V24; 
(*f[40])( );     /*SLG0(V24)*/
pile[v[22]]=565; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(565,jvj+5,jvj+6)*/
V29=x[jvj+6];
l8:if((V29<=0)) goto l10;
V11=s[V29];
V27=V11;
pile[v[22]]=20; pile[WZ1]=V27; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V27,0,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
V29=t[V29];
goto l8;
}
