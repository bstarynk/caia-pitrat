#include "dx.h"
void DVE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V18=0,V25=0,V30=0,V35=0;
int V,X;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=10476;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1790&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
x[jvj+3]=x[jvj+2] ;z[jvj+3]=z[jvj+2];
pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,X,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=23; 
(*f[1791])( );     /*DVF0(V35,23)*/
pile[v[22]]=283; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,jvj+3,jvj+6)*/
l4:if((x[jvj+6]>0)) goto l5;
pile[v[22]]=V; pile[WZ1]=(-96); pile[WZ2]=376; pile[WZ3]=jvj+26; 
(*f[1979])( );     /*TRIENS3(V,(-96),376,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=V35; pile[WZ2]=140; pile[WZ3]=jvj+12; 
(*f[631])( );     /*TRI16(jvj+26,V35,140,jvj+12)*/
pile[v[22]]=jvj+3; pile[WZ1]=283; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+3,283,jvj+12)*/
l10:pile[v[22]]=283; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(283,jvj+3,jvj+10)*/
l11:if((x[jvj+10]>0)) goto l12;
pile[v[22]]=V35; pile[WZ1]=(-96); pile[WZ2]=375; pile[WZ3]=jvj+27; 
(*f[1979])( );     /*TRIENS3(V35,(-96),375,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=V; pile[WZ2]=140; pile[WZ3]=jvj+13; 
(*f[631])( );     /*TRI16(jvj+27,V,140,jvj+13)*/
pile[v[22]]=jvj+3; pile[WZ1]=283; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+3,283,jvj+13)*/
l1:pile[v[22]]=283; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(283,jvj+3,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l7;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(140,jvj+5,V13)*/
V13=pile[WZ2]; 
if((V13!=V35)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=376; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(jvj+5,376,V)*/
l7:pile[v[22]]=283; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(283,jvj+3,jvj+8)*/
l8:if((x[jvj+8]<=0)) goto l14;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+9,V25)*/
V25=pile[WZ2]; 
if((V25!=V)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=375; pile[WZ2]=V35; 
(*f[735])( );     /*PLUSC4(jvj+9,375,V35)*/
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,X,jvj+14)*/
if((x[jvj+14]==43)) goto l15;
if((x[jvj+14]==128)) goto l16;
if((x[jvj+14]!=73)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,X,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+21,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,X,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=36)) goto l19;
if((x[jvj+25]=w[x[jvj+22]][2])==incon) goto l19;
pile[v[22]]=V; pile[WZ1]=jvj+25; 
(*f[1791])( );     /*DVF0(V,jvj+25)*/
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V18)*/
V18=pile[WZ2]; 
if((V18==V35)) goto l10;
l6:x[jvj+6]=t[x[jvj+6]];
goto l4;
l9:x[jvj+8]=t[x[jvj+8]];
goto l8;
l12:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+11,V30)*/
V30=pile[WZ2]; 
if((V30==V)) goto l1;
l13:x[jvj+10]=t[x[jvj+10]];
goto l11;
l15:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,X,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+17]=w[x[jvj+16]][2])==incon) goto l19;
pile[v[22]]=V; pile[WZ1]=jvj+17; 
(*f[1791])( );     /*DVF0(V,jvj+17)*/
goto l19;
l16:pile[v[22]]=128; pile[WZ1]=X; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(128,X,jvj+18)*/
l17:if((x[jvj+18]<=0)) goto l19;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+19,jvj+20)*/
pile[v[22]]=V; pile[WZ1]=jvj+20; 
(*f[1791])( );     /*DVF0(V,jvj+20)*/
l18:x[jvj+18]=t[x[jvj+18]];
goto l17;
}
