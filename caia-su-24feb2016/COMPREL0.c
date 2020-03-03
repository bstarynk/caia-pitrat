#include "dx.h"
void COMPREL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V2=0,V8=0;
int AA,BB,K;
int RK;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

AA=pile[v[22]]; BB=pile[v[22]+1]; K=pile[v[22]+2]; RK=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+1; 
(*f[46])( );     /*TRI0(0,117,jvj+1)*/
pile[v[22]]=117; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+1,V1)*/
V1=pile[WZ2]; 
if((V1<=200)) goto l5;
pile[WZ1]=1550; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,1550,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[611])( );     /*ERRINCIDENT0(V2)*/
l5:pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+2)*/
l6:if((x[jvj+2]>0)) goto l7;
pile[v[22]]=1331; pile[WZ1]=BB; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1331,BB,jvj+6)*/
l14:if((x[jvj+6]>0)) goto l15;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:if(x[jvj+12]==incon) goto l4;
l9:x[RK]=x[jvj+12] ;z[RK]=z[jvj+12];
l18:v[0]=jvj; v[22]-=4; v[102]=0;return;
l4:x[jvj+12]=30 ;z[jvj+12]=30;
goto l9;
l7:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=497; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(497,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[AA])) goto l8;
pile[v[22]]=145; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(145,jvj+3,jvj+5)*/
x[jvj+12]=incon;
if((x[jvj+5]!=29)) goto l1;
x[jvj+12]=29 ;z[jvj+12]=29;
l1:if((x[K]!=29)) goto l2;
x[jvj+12]=29 ;z[jvj+12]=29;
l2:if((x[jvj+5]!=25)) goto l3;
if((x[K]!=25)) goto l3;
x[jvj+12]=25 ;z[jvj+12]=25;
goto l9;
l8:x[jvj+2]=t[x[jvj+2]];
goto l6;
l12:if(x[jvj+13]==incon) goto l13;
l17:x[jvj+10]=x[jvj+13] ;z[jvj+10]=z[jvj+13];
if((x[jvj+10]==25)) goto l16;
pile[v[22]]=jvj+1; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+1,117,1)*/
pile[v[22]]=jvj+8; pile[WZ1]=AA; pile[WZ2]=jvj+10; pile[WZ3]=jvj+1; pile[WZ4]=jvj+11; 
(*f[2116])( );if(v[102]) goto l16;     /*COMPREL1(jvj+8,AA,jvj+10,jvj+1,jvj+11)*/
x[RK]=x[jvj+11] ;z[RK]=z[jvj+11];
goto l18;
l13:x[jvj+13]=30 ;z[jvj+13]=30;
goto l17;
l15:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=497; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(497,jvj+7,jvj+8)*/
if((x[jvj+8]==x[AA])) goto l16;
pile[v[22]]=145; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(145,jvj+7,jvj+9)*/
V8=x[jvj+9];
x[jvj+13]=incon;
if((V8!=29)) goto l10;
x[jvj+13]=29 ;z[jvj+13]=29;
l10:if((x[K]!=29)) goto l11;
x[jvj+13]=29 ;z[jvj+13]=29;
l11:if((V8!=25)) goto l12;
if((x[K]!=25)) goto l12;
x[jvj+13]=25 ;z[jvj+13]=25;
goto l17;
l16:x[jvj+6]=t[x[jvj+6]];
goto l14;
}
