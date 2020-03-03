#include "dx.h"
void MEVALZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V=0,V16=0,V3=0,V9=0,V8=0;
int E,H,Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=10068;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2097&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; H=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=Z; pile[WZ1]=360; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(Z,360,68)*/
pile[v[22]]=216; pile[WZ1]=H; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(216,H,jvj+7)*/
V16=x[jvj+7];
l2:if((V16>0)) goto l3;
x[jvj+12]=x[E] ;z[jvj+12]=z[E];
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=140; pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,H,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=361; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(361,H,jvj+10)*/
if((x[jvj+10]!=225)) goto l11;
x[jvj+13]=x[E] ;z[jvj+13]=z[E];
l8:if((x[jvj+13]<=0)) goto l11;
x[jvj+3]=s[x[jvj+13]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+13];
pile[v[22]]=140; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8!=V9)) goto l9;
pile[v[22]]=361; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(361,jvj+3,jvj+11)*/
if((x[jvj+10]!=x[jvj+11])) goto l9;
pile[v[22]]=145; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(145,jvj+3,jvj+5)*/
if((x[jvj+5]==25)) goto l10;
l1:pile[v[22]]=145; pile[WZ1]=H; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(145,H,jvj+6)*/
pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(145,H,jvj+2)*/
if((x[jvj+2]!=26)) goto l9;
pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(145,jvj+3,jvj+4)*/
l10:pile[v[22]]=Z; pile[WZ1]=356; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(Z,356,jvj+3)*/
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:V=s[V16];
pile[v[22]]=140; pile[WZ1]=V; pile[WZ2]=361; pile[WZ3]=225; pile[WZ4]=jvj+8; 
(*f[692])( );     /*QUADRI13(140,V,361,225,jvj+8)*/
pile[v[22]]=Z; pile[WZ1]=356; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(Z,356,jvj+8)*/
V16=t[V16];
goto l2;
l5:x[jvj+9]=s[x[jvj+12]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+12];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+9,V3)*/
V3=pile[WZ2]; 
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V3) goto l6;
pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,H,V2)*/
V2=pile[WZ2]; 
if((V3==V2)) goto l6;
l7:pile[v[22]]=Z; pile[WZ1]=356; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(Z,356,jvj+9)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:x[jvj+13]=t[x[jvj+13]];
goto l8;
l11:pile[v[22]]=Z; pile[WZ1]=356; pile[WZ2]=H; 
(*f[36])( );     /*PLUSC0(Z,356,H)*/
goto l12;
}
