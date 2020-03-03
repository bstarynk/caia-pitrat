#include "dx.h"
void ETIMP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V14=0,V13=0,V7=0;
int R,X,Y;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=10852;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==894&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=X; pile[WZ1]=jvj+25; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(X,jvj+25)*/
pile[v[22]]=R; pile[WZ1]=1292; pile[WZ2]=jvj+25; 
(*f[35])( );     /*CHGC1(R,1292,jvj+25)*/
l10:pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,Y,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]==48)) goto l11;
if(x[jvj+27]!=25&&x[jvj+27]!=26&&x[jvj+27]!=27&&x[jvj+27]!=28&&x[jvj+27]!=29&&x[jvj+27]!=30&&x[jvj+27]!=625&&x[jvj+27]!=1280) goto l1;
pile[v[22]]=100; pile[WZ1]=Y; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,Y,jvj+29)*/
if((x[jvj+29]!=22)) goto l1;
pile[v[22]]=20; pile[WZ2]=jvj+28; 
(*f[409])( );     /*TRI14(20,Y,jvj+28)*/
l13:x[jvj+38]=x[jvj+28] ;z[jvj+38]=z[jvj+28];
l12:if((x[jvj+38]<=0)) goto l1;
x[jvj+32]=s[x[jvj+38]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+38];
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+32,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+32,jvj+36)*/
x[jvj+37]=x[jvj+35] ;z[jvj+37]=z[jvj+35];
for(i=x[jvj+36],V7=0;i>0;i=t[i],V7++)  ;
pile[v[22]]=870; pile[WZ1]=V7; pile[WZ2]=1191; pile[WZ3]=jvj+37; pile[WZ4]=jvj+30; 
(*f[567])( );     /*QUADRI11(870,V7,1191,jvj+37,jvj+30)*/
if((V7!=1)) goto l15;
if((x[jvj+36]<=0)) goto l15;
x[jvj+31]=s[x[jvj+36]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+36];
pile[v[22]]=jvj+30; pile[WZ1]=497; pile[WZ2]=jvj+31; 
(*f[35])( );     /*CHGC1(jvj+30,497,jvj+31)*/
l15:pile[v[22]]=R; pile[WZ1]=1281; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(R,1281,jvj+30)*/
l14:x[jvj+38]=t[x[jvj+38]];
goto l12;
l1:V13=incon;
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,Y,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l18;
x[jvj+18]=d[20];z[jvj+18]=0;
l7:if((x[jvj+18]<=0)) goto l18;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=jvj+19; pile[WZ1]=Y; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+19,Y,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+19,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=Y; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+22,Y,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+23,jvj+24)*/
if(x[jvj+24]!=96&&x[jvj+24]!=89&&x[jvj+24]!=41&&x[jvj+24]!=20&&x[jvj+24]!=128&&x[jvj+24]!=570&&x[jvj+24]!=1317) goto l8;
V13=1;
l18:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+15; 
(*f[46])( );     /*TRI0(0,117,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,Y,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=48)) goto l6;
pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,Y,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l6;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=25)) goto l3;
x[jvj+8]=d[20];z[jvj+8]=0;
l4:if((x[jvj+8]<=0)) goto l3;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+9,jvj+5,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l5;
pile[v[22]]=268; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+12,jvj+5,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+13,jvj+14)*/
if(x[jvj+14]!=96&&x[jvj+14]!=89&&x[jvj+14]!=41&&x[jvj+14]!=20&&x[jvj+14]!=128&&x[jvj+14]!=570&&x[jvj+14]!=1317) goto l5;
pile[v[22]]=jvj+15; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+15,117,1)*/
l5:x[jvj+8]=t[x[jvj+8]];
goto l4;
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+15,V14)*/
V14=pile[WZ2]; 
if((V14<=0)) goto l9;
V13=V14;
l16:if((V13==(-99999998))) goto l17;
pile[v[22]]=R; pile[WZ1]=1293; pile[WZ2]=V13; 
(*f[43])( );     /*CHGC2(R,1293,V13)*/
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l8:x[jvj+18]=t[x[jvj+18]];
goto l7;
l9:if(V13==incon) goto l17;
goto l16;
l11:pile[v[22]]=107; pile[WZ1]=Y; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,Y,jvj+28)*/
goto l13;
}
