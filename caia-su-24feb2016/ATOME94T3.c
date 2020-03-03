#include "dx.h"
void ATOME94T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V9=0,FF=0,V2=0,V60=0,F=0,V4=0,V62=0,V22=0,V13=0,V53=0,V15=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=20094;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3318&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+37; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+37)*/
for(i=x[jvj+37],V13=0;i>0;i=t[i],V13++)  ;
x[jvj+38]=vo[14];z[jvj+38]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+38,V53)*/
V53=pile[WZ2]; 
x[jvj+36]=0 ;z[jvj+36]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+30; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+30)*/
l16:if((x[jvj+30]>0)) goto l17;
pile[v[22]]=jvj+36; pile[WZ1]=D; pile[WZ2]=jvj+39; 
(*f[3205])( );     /*PREPOU0(jvj+36,D,jvj+39)*/
for(i=x[jvj+39],V15=0;i>0;i=t[i],V15++)  ;
if((V13!=V15)) goto l22;
x[jvj+50]=x[jvj+39] ;z[jvj+50]=z[jvj+39];
l3:if((x[jvj+50]<=0)) goto l22;
x[jvj+3]=s[x[jvj+50]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+50];
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+4)*/
for(i=x[jvj+4],V11=0;i>0;i=t[i],V11++)  ;
x[jvj+49]=x[jvj+39] ;z[jvj+49]=z[jvj+39];
l1:if((x[jvj+49]>0)) goto l2;
pile[v[22]]=763; pile[WZ1]=jvj+3; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(763,jvj+3,jvj+40)*/
pile[v[22]]=971; pile[WZ1]=D; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(971,D,jvj+41)*/
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==1289) goto l20;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+5]=s[x[jvj+49]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+49];
pile[v[22]]=763; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(763,jvj+5,jvj+6)*/
for(i=x[jvj+6],V9=0;i>0;i=t[i],V9++)  ;
if((V9<V11)) goto l4;
x[jvj+49]=t[x[jvj+49]];
goto l1;
l4:x[jvj+50]=t[x[jvj+50]];
goto l3;
l7:x[jvj+7]=s[x[jvj+52]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+52];
pile[v[22]]=763; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(763,jvj+7,jvj+8)*/
x[jvj+51]=x[jvj+8] ;z[jvj+51]=z[jvj+8];
l5:if((x[jvj+51]<=0)) goto l21;
x[jvj+9]=s[x[jvj+51]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+51];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l8;
x[jvj+51]=t[x[jvj+51]];
goto l5;
l8:x[jvj+52]=t[x[jvj+52]];
l6:if((x[jvj+52]>0)) goto l7;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+47)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V53,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3318; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3318,246,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20094; pile[WZ2]=218; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20094,218,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=jvj+46; pile[WZ3]=159; pile[WZ4]=jvj+48; 
(*f[298])( );     /*TRIENS1(jvj+47,(-20),jvj+46,159,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+48,1,158,jvj+42)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+42; 
(*f[1296])( );     /*NOUVCONTR0(jvj+10,jvj+42)*/
l21:x[jvj+40]=t[x[jvj+40]];
l20:if((x[jvj+40]<=0)) goto l22;
x[jvj+10]=s[x[jvj+40]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+40];
x[jvj+52]=x[jvj+39] ;z[jvj+52]=z[jvj+39];
goto l6;
l10:x[jvj+12]=s[x[jvj+53]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+53];
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=22)) goto l11;
pile[v[22]]=103; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(103,jvj+12,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+12,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+16,jvj+17)*/
FF=x[jvj+17];
if(FF!=26&&FF!=27&&FF!=28&&FF!=29&&FF!=30) goto l11;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+14,jvj+18)*/
if((x[jvj+18]!=x[D])) goto l11;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,jvj+12,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+19,jvj+20)*/
if(x[jvj+20]!=96&&x[jvj+20]!=89&&x[jvj+20]!=41&&x[jvj+20]!=20&&x[jvj+20]!=128&&x[jvj+20]!=570&&x[jvj+20]!=1317) goto l11;
V60=x[jvj+35];
l12:if((V60<=0)) goto l11;
V2=s[V60];
if((x[jvj+12]!=V2)) goto l19;
V60=t[V60];
goto l12;
l11:x[jvj+53]=t[x[jvj+53]];
l9:if((x[jvj+53]>0)) goto l10;
x[jvj+54]=x[jvj+35] ;z[jvj+54]=z[jvj+35];
l13:if((x[jvj+54]<=0)) goto l18;
x[jvj+21]=s[x[jvj+54]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+54];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=22)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+21,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l14;
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+21,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+25,jvj+26)*/
F=x[jvj+26];
if(F!=26&&F!=27&&F!=28&&F!=29&&F!=30) goto l14;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+23,jvj+27)*/
if((x[jvj+27]!=x[D])) goto l14;
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+21,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+28,jvj+29)*/
if(x[jvj+29]!=96&&x[jvj+29]!=89&&x[jvj+29]!=41&&x[jvj+29]!=20&&x[jvj+29]!=128&&x[jvj+29]!=570&&x[jvj+29]!=1317) goto l14;
V62=x[jvj+35];
l15:if((V62<=0)) goto l14;
V4=s[V62];
if((x[jvj+21]!=V4)) goto l19;
V62=t[V62];
goto l15;
l14:x[jvj+54]=t[x[jvj+54]];
goto l13;
l17:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=100; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+31,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+32,jvj+34)*/
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+35)*/
for(i=x[jvj+35],V22=0;i>0;i=t[i],V22++)  ;
if((x[jvj+33]!=22)) goto l18;
if((V22!=2)) goto l18;
if((x[jvj+34]!=55)) goto l18;
x[jvj+53]=x[jvj+35] ;z[jvj+53]=z[jvj+35];
goto l9;
l19:pile[v[22]]=jvj+36; pile[WZ1]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+31)*/
l18:x[jvj+30]=t[x[jvj+30]];
goto l16;
}
