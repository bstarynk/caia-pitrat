#include "dx.h"
void REDIZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V29=0,K=0,V25=0,V33=0,V32=0,V45=0,V44=0,V48=0,V47=0;
int L,H,X,BT,S;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

L=pile[v[22]]; H=pile[v[22]+1]; X=pile[v[22]+2]; BT=pile[v[22]+3]; S=pile[v[22]+4]; v[22]+=5; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,X,K)*/
K=pile[WZ2]; 
if((K<L)) goto l5;
V25=K%L;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V25; pile[WZ4]=jvj+20; 
(*f[192])( );     /*QUADRI4(100,41,130,V25,jvj+20)*/
if((V45=w[x[BT]][1])==incon) goto l4;
if((V45!=23)) goto l18;
V44=x[X];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V44; 
(*f[134])( );     /*OTA0(BT,S,V44)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+20)*/
l4:pile[v[22]]=H; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,218,68)*/
l5:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,X,jvj+11)*/
x[jvj+22]=w[x[jvj+11]][8];
if((x[jvj+11]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if(x[jvj+6]==1215||x[jvj+6]==1214||x[jvj+6]==1273) goto l10;
l6:if((x[jvj+22]>0)) goto l7;
if((x[jvj+11]!=484)) goto l10;
l15:x[jvj+17]=x[X] ;z[jvj+17]=z[X];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+17,jvj+7)*/
pile[v[22]]=489; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(489,jvj+7,jvj+18)*/
if((x[jvj+18]!=0)) goto l17;
pile[v[22]]=365; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+10)*/
if((x[jvj+10]<=0)) goto l17;
x[jvj+19]=s[x[jvj+10]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+19,V33)*/
V33=pile[WZ2]; 
V32=V33%L;
pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+8)*/
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V32; pile[WZ4]=jvj+21; 
(*f[192])( );     /*QUADRI4(100,41,130,V32,jvj+21)*/
if((V48=w[x[BT]][1])==incon) goto l16;
if((V48!=23)) goto l19;
V47=x[X];
pile[v[22]]=BT; pile[WZ1]=S; pile[WZ2]=V47; 
(*f[134])( );     /*OTA0(BT,S,V47)*/
pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(S,BT,jvj+21)*/
l16:pile[v[22]]=H; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(H,218,68)*/
l17:v[0]=jvj; v[22]-=5; return;
l2:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+9,V30)*/
V30=pile[WZ2]; 
V29=V30%L;
if((V29!=V32)) goto l17;
l3:x[jvj+8]=t[x[jvj+8]];
goto l1;
l7:x[jvj+12]=s[x[jvj+22]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+22];
pile[v[22]]=jvj+12; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(jvj+12,X,jvj+13)*/
x[jvj+23]=x[jvj+13] ;z[jvj+23]=z[jvj+13];
l8:if((x[jvj+23]>0)) goto l9;
x[jvj+22]=t[x[jvj+22]];
goto l6;
l9:x[jvj+14]=s[x[jvj+23]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+23];
pile[v[22]]=L; pile[WZ1]=H; pile[WZ2]=jvj+14; pile[WZ3]=jvj+12; pile[WZ4]=X; 
(*f[3993])( );     /*REDIZ0(L,H,jvj+14,jvj+12,X)*/
x[jvj+23]=t[x[jvj+23]];
goto l8;
l10:x[jvj+24]=w[x[jvj+11]][9];
if((x[jvj+11]!=22)) goto l11;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+1,jvj+2)*/
if(x[jvj+2]==63||x[jvj+2]==326) goto l17;
l11:if((x[jvj+24]>0)) goto l12;
if((x[jvj+11]==484)) goto l15;
goto l17;
l12:x[jvj+15]=s[x[jvj+24]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+24];
if((x[jvj+15]!=160)) goto l14;
if((x[jvj+11]!=22)) goto l14;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==625)) goto l13;
l14:pile[v[22]]=jvj+15; pile[WZ1]=X; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+15,X,jvj+16)*/
pile[v[22]]=L; pile[WZ1]=H; pile[WZ3]=jvj+15; pile[WZ4]=X; 
(*f[3993])( );     /*REDIZ0(L,H,jvj+16,jvj+15,X)*/
l13:x[jvj+24]=t[x[jvj+24]];
goto l11;
l18:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(S,BT,jvj+20)*/
goto l4;
l19:pile[v[22]]=S; pile[WZ1]=BT; pile[WZ2]=jvj+21; 
(*f[35])( );     /*CHGC1(S,BT,jvj+21)*/
goto l16;
}
