#include "dx.h"
void EXAPBI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V8=0,H=0,V18=0,V17=0;
int E,EC,UR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=11227;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==499&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EC=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+12]=x[jvj+18] ;z[jvj+12]=z[jvj+18];
x[jvj+5]=d[53];z[jvj+5]=0;
x[jvj+19]=x[E] ;z[jvj+19]=z[E];
l5:if((x[jvj+19]>0)) goto l6;
pile[v[22]]=jvj+12; pile[WZ1]=876; pile[WZ2]=547; pile[WZ3]=301; pile[WZ4]=69; 
(*f[848])( );     /*EXAPBMSG0(jvj+12,876,547,301,69)*/
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:if((H==1)) goto l10;
l9:x[jvj+21]=t[x[jvj+21]];
l8:if((x[jvj+21]<=0)) goto l7;
x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=1078; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1078,jvj+2,jvj+8)*/
pile[v[22]]=860; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(860,jvj+8,jvj+9)*/
if((x[jvj+9]!=530)) goto l9;
pile[v[22]]=1005; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1005,jvj+2,V8)*/
V8=pile[WZ2]; 
H=V8;
if((H>=1000)) goto l9;
if((H!=1)) goto l1;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(493,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9>=100)) goto l9;
l1:if((UR==85)) goto l2;
if((UR==88)) goto l3;
if((UR==84)) goto l10;
if((UR==78)) goto l4;
if((UR!=77)) goto l9;
if((H<=1)) goto l9;
pile[v[22]]=935; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+2,jvj+4)*/
if((x[jvj+4]==936)) goto l10;
goto l9;
l3:if((H>1)) goto l10;
goto l9;
l4:if((H!=1)) goto l9;
pile[v[22]]=935; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+2,jvj+3)*/
if((x[jvj+3]==936)) goto l10;
goto l9;
l6:x[jvj+13]=s[x[jvj+19]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+19];
pile[v[22]]=109; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+13,jvj+14)*/
pile[v[22]]=983; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(983,jvj+14,jvj+15)*/
pile[v[22]]=878; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(878,jvj+15,jvj+16)*/
l13:if((x[jvj+16]<=0)) goto l7;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=163; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+17,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(163,jvj+13,V17)*/
V17=pile[WZ2]; 
if((V18==V17)) goto l14;
x[jvj+16]=t[x[jvj+16]];
goto l13;
l7:x[jvj+19]=t[x[jvj+19]];
goto l5;
l10:pile[v[22]]=jvj+2; pile[WZ1]=EC; pile[WZ2]=jvj+10; 
(*f[505])( );     /*EVCOND0(jvj+2,EC,jvj+10)*/
if((x[jvj+10]==135)) goto l12;
goto l9;
l12:pile[v[22]]=218; pile[WZ1]=jvj+13; pile[WZ2]=447; pile[WZ3]=jvj+2; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(218,jvj+13,447,jvj+2,jvj+11)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[196])( );     /*PLUF0(jvj+5,jvj+11,jvj+12)*/
goto l9;
l14:x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
x[jvj+6]=x[jvj+20] ;z[jvj+6]=z[jvj+20];
pile[v[22]]=944; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(944,jvj+6,jvj+7)*/
x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
goto l8;
}
