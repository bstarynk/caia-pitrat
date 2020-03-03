#include "dx.h"
void CREKNDR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int LL=0,V2=0,V4=0,V15=0,V16=0,V12=0;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10266;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==745&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=246; pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(246,TL,LL)*/
LL=pile[WZ2]; 
pile[v[22]]=213; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(213,TL,jvj+10)*/
l7:if((x[jvj+10]>0)) goto l8;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(0,117,jvj+5)*/
pile[v[22]]=213; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(213,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+5,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+9; 
(*f[46])( );     /*TRI0(0,117,jvj+9)*/
pile[v[22]]=213; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(213,TL,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+9,V4)*/
V4=pile[WZ2]; 
V12=V2+V4;
knd[LL]=V2;
knr[LL]=V12;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=122; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(122,jvj+3,jvj+4)*/
if((x[jvj+4]!=114)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,117,1)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l1;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=122; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(122,jvj+7,jvj+8)*/
if((x[jvj+8]!=113)) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,117,1)*/
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l8:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+11,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+11,V16)*/
V16=pile[WZ2]; 
vnd[LL][V15]=V16;
l9:x[jvj+10]=t[x[jvj+10]];
goto l7;
}
