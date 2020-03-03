#include "dx.h"
void ATOME603T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V52=0,V42=0,V7=0,V53=0,V8=0,V54=0,V46=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=20603;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3796&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+7,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+11)*/
x[jvj+59]=x[jvj+11] ;z[jvj+59]=z[jvj+11];
l10:if((x[jvj+59]<=0)) goto l18;
x[jvj+4]=s[x[jvj+59]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+59];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+4,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=625)) goto l11;
pile[v[22]]=160; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(160,jvj+4,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=41)) goto l11;
x[jvj+60]=x[jvj+11] ;z[jvj+60]=z[jvj+11];
l12:if((x[jvj+60]<=0)) goto l11;
x[jvj+2]=s[x[jvj+60]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+60];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=278)) goto l13;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+2,jvj+18)*/
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=625)) goto l13;
pile[v[22]]=160; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,jvj+18,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=41)) goto l13;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+5)*/
V52=x[jvj+3];
l1:if((V52>0)) goto l2;
if((x[jvj+6]!=0)) goto l13;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=929; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+7,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=V42; 
(*f[207])( );     /*PLUE2(jvj+8,V42)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+9)*/
V53=x[jvj+9];
l6:if((V53>0)) goto l7;
pile[v[22]]=1006; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1006,jvj+4,jvj+10)*/
V54=x[jvj+10];
l8:if((V54>0)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+2,jvj+23)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1032])( );if(v[102]) goto l13;     /*MERGEQM0(jvj+4,jvj+23,jvj+24)*/
x[jvj+37]=x[jvj+24] ;z[jvj+37]=z[jvj+24];
x[jvj+25]=d[20];z[jvj+25]=0;
l14:if((x[jvj+25]<=0)) goto l13;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+4; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+26,jvj+4,jvj+27)*/
if((x[V]!=x[jvj+27])) goto l15;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+26,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+4; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+28,jvj+4,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=41)) goto l15;
x[jvj+31]=d[20];z[jvj+31]=0;
l16:if((x[jvj+31]<=0)) goto l15;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+18; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+32,jvj+18,jvj+33)*/
if((x[V]!=x[jvj+33])) goto l17;
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+32,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+18; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+34,jvj+18,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=41)) goto l17;
pile[v[22]]=jvj+37; pile[WZ1]=1006; pile[WZ2]=jvj+8; 
(*f[34])( );     /*CHGC0(jvj+37,1006,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+45)*/
pile[v[22]]=V46; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V46,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3796; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3796,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20603; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20603,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+38)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[1296])( );     /*NOUVCONTR0(jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+51)*/
pile[v[22]]=V46; pile[WZ1]=858; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(V46,858,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,v[13],642,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=3796; pile[WZ2]=246; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,3796,246,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=20603; pile[WZ2]=218; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,20603,218,jvj+50)*/
pile[v[22]]=jvj+51; pile[WZ1]=(-20); pile[WZ2]=jvj+50; pile[WZ3]=159; pile[WZ4]=jvj+52; 
(*f[298])( );     /*TRIENS1(jvj+51,(-20),jvj+50,159,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+52,1,158,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+23; 
(*f[966])( );     /*ELIMINE0(jvj+39,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+57)*/
pile[v[22]]=V46; pile[WZ1]=858; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V46,858,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,v[13],642,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=3796; pile[WZ2]=246; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,3796,246,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=20603; pile[WZ2]=218; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+55,20603,218,jvj+56)*/
pile[v[22]]=jvj+57; pile[WZ1]=(-20); pile[WZ2]=jvj+56; pile[WZ3]=159; pile[WZ4]=jvj+58; 
(*f[298])( );     /*TRIENS1(jvj+57,(-20),jvj+56,159,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+58,1,158,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+4; 
(*f[966])( );     /*ELIMINE0(jvj+40,jvj+4)*/
l17:x[jvj+31]=t[x[jvj+31]];
goto l16;
l2:V4=s[V52];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V4) goto l4;
l3:V52=t[V52];
goto l1;
l4:pile[v[22]]=jvj+6; pile[WZ1]=V4; 
(*f[207])( );     /*PLUE2(jvj+6,V4)*/
goto l3;
l7:V7=s[V53];
pile[v[22]]=jvj+8; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+8,V7)*/
V53=t[V53];
goto l6;
l9:V8=s[V54];
pile[v[22]]=jvj+8; pile[WZ1]=V8; 
(*f[207])( );     /*PLUE2(jvj+8,V8)*/
V54=t[V54];
goto l8;
l11:x[jvj+59]=t[x[jvj+59]];
goto l10;
l13:x[jvj+60]=t[x[jvj+60]];
goto l12;
l15:x[jvj+25]=t[x[jvj+25]];
goto l14;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
