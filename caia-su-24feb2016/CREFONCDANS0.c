#include "dx.h"
void CREFONCDANS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V11=0,V12=0,V15=0;
int EN;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10719;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==697&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EN=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=11161; pile[WZ1]=jvj+12; 
(*f[1083])( );     /*CREFONCDANSA0(11161,jvj+12)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1484,854,V13)*/
V13=pile[WZ2]; 
V11=sepfacts+1;
V12=sepfacts+V13;
l7:if((V11>V12)) goto l10;
V15=r[V11];
if((V15!=1)) goto l8;
x[jvj+8]=V11 ;z[jvj+8]=(V11<=sepcte) ? V11 : 0;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[1083])( );     /*CREFONCDANSA0(jvj+8,jvj+9)*/
x[jvj+20]=x[jvj+9] ;z[jvj+20]=z[jvj+9];
l9:if((x[jvj+20]<=0)) goto l8;
x[jvj+11]=s[x[jvj+20]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+20];
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
x[jvj+20]=t[x[jvj+20]];
goto l9;
l2:x[jvj+2]=s[x[jvj+17]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+17];
pile[v[22]]=jvj+2; pile[WZ1]=1223; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(jvj+2,1223,jvj+3)*/
x[jvj+18]=x[jvj+3] ;z[jvj+18]=z[jvj+3];
l3:if((x[jvj+18]>0)) goto l4;
x[jvj+17]=t[x[jvj+17]];
l1:if((x[jvj+17]>0)) goto l2;
x[jvj+24]=x[jvj+6] ;z[jvj+24]=z[jvj+6];
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+21]=x[jvj+12] ;z[jvj+21]=z[jvj+12];
l11:if((x[jvj+21]>0)) goto l12;
x[jvj+22]=x[jvj+24] ;z[jvj+22]=z[jvj+24];
l13:if((x[jvj+22]>0)) goto l14;
x[jvj+23]=x[jvj+25] ;z[jvj+23]=z[jvj+25];
l15:if((x[jvj+23]>0)) goto l16;
x[EN]=x[jvj+13] ;z[EN]=z[jvj+13];
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+4]=s[x[jvj+18]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+18];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[1083])( );     /*CREFONCDANSA0(jvj+4,jvj+5)*/
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
l5:if((x[jvj+19]>0)) goto l6;
x[jvj+18]=t[x[jvj+18]];
goto l3;
l6:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+19]=t[x[jvj+19]];
goto l5;
l8:V11++;
goto l7;
l10:x[jvj+25]=x[jvj+10] ;z[jvj+25]=z[jvj+10];
x[jvj+6]=0 ;z[jvj+6]=0;
x[jvj+17]=w[1223][8];
goto l1;
l12:x[jvj+14]=s[x[jvj+21]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+21];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+14)*/
x[jvj+21]=t[x[jvj+21]];
goto l11;
l14:x[jvj+15]=s[x[jvj+22]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+22];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+15)*/
x[jvj+22]=t[x[jvj+22]];
goto l13;
l16:x[jvj+16]=s[x[jvj+23]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+23];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+16)*/
x[jvj+23]=t[x[jvj+23]];
goto l15;
}
