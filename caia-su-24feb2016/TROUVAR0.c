#include "dx.h"
void TROUVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V11=0,V17=0,V5=0,V8=0,V6=0,V9=0;
int EV,E;
int X,Y,RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11065;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3198&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
EV=pile[v[22]]; E=pile[v[22]+1]; X=pile[v[22]+2]; Y=pile[v[22]+3]; RES=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+35]=x[EV] ;z[jvj+35]=z[EV];
l8:if((x[jvj+35]>0)) goto l9;
x[jvj+18]=0 ;z[jvj+18]=0;
V6=incon;
l11:if((x[jvj+14]>0)) goto l12;
x[jvj+26]=0 ;z[jvj+26]=0;
V9=incon;
x[jvj+19]=d[139];z[jvj+19]=0;
l15:if((x[jvj+18]>0)) goto l16;
x[jvj+33]=x[jvj+26] ;z[jvj+33]=z[jvj+26];
l2:if((x[jvj+33]<=0)) goto l21;
x[jvj+5]=s[x[jvj+33]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+33];
pile[v[22]]=482; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(482,jvj+5,jvj+6)*/
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+6,jvj+7)*/
pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(688,jvj+7,V11)*/
V11=pile[WZ2]; 
x[jvj+32]=x[jvj+26] ;z[jvj+32]=z[jvj+26];
l1:if((x[jvj+32]<=0)) goto l20;
x[jvj+2]=s[x[jvj+32]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+32];
pile[v[22]]=482; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(482,jvj+2,jvj+3)*/
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(498,jvj+3,jvj+4)*/
pile[v[22]]=688; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(688,jvj+4,V10)*/
V10=pile[WZ2]; 
x[jvj+32]=t[x[jvj+32]];
goto l1;
l3:x[jvj+33]=t[x[jvj+33]];
goto l2;
l5:x[jvj+8]=s[x[jvj+34]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+34];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l7;
l6:x[jvj+34]=t[x[jvj+34]];
l4:if((x[jvj+34]>0)) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=1081; pile[WZ2]=jvj+30; 
(*f[300])( );     /*TRI10(jvj+10,1081,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+11; pile[WZ2]=482; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+30,jvj+11,482,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
l10:x[jvj+35]=t[x[jvj+35]];
goto l8;
l7:pile[v[22]]=jvj+10; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+8)*/
goto l6;
l9:x[jvj+11]=s[x[jvj+35]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+35];
pile[v[22]]=498; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(498,jvj+11,jvj+12)*/
pile[v[22]]=480; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(480,jvj+12,jvj+13)*/
for(i=x[jvj+13],V17=0;i>0;i=t[i],V17++)  ;
if((V17<=1)) goto l10;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+34]=x[E] ;z[jvj+34]=z[E];
goto l4;
l12:x[jvj+16]=s[x[jvj+14]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+14];
pile[v[22]]=1081; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1081,jvj+16,jvj+17)*/
for(i=x[jvj+17],V5=0;i>0;i=t[i],V5++)  ;
if((V5<=1)) goto l13;
if(V6==incon) goto l23;
if((V5==V6)) goto l14;
if((V5<=V6)) goto l23;
l13:x[jvj+14]=t[x[jvj+14]];
goto l11;
l16:x[jvj+20]=s[x[jvj+18]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+18];
pile[v[22]]=1081; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1081,jvj+20,jvj+21)*/
pile[v[22]]=482; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(482,jvj+20,jvj+22)*/
x[jvj+36]=x[jvj+21] ;z[jvj+36]=z[jvj+21];
l18:if((x[jvj+36]<=0)) goto l17;
x[jvj+23]=s[x[jvj+36]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+36];
pile[v[22]]=870; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(870,jvj+23,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=jvj+22; pile[WZ2]=68; pile[WZ3]=jvj+24; 
(*f[1931])( );if(v[102]) goto l19;     /*ISOLONS0(jvj+23,jvj+22,68,jvj+24)*/
if(V9==incon) goto l24;
if((V8==V9)) goto l25;
if((V8<=V9)) goto l24;
l19:x[jvj+36]=t[x[jvj+36]];
goto l18;
l17:x[jvj+18]=t[x[jvj+18]];
goto l15;
l20:x[jvj+27]=x[jvj+5] ;z[jvj+27]=z[jvj+5];
pile[v[22]]=1048; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1048,jvj+27,jvj+28)*/
pile[v[22]]=482; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(482,jvj+27,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=X; 
(*f[1290])( );if(v[102]) goto l21;     /*DEPEXP0(jvj+29,X)*/
x[Y]=x[jvj+28] ;z[Y]=z[jvj+28];
x[RES]=135 ;z[RES]=135;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l21:x[RES]=134 ;z[RES]=134;
x[X]=250 ;z[X]=250;
x[Y]=250 ;z[Y]=250;
goto l22;
l23:V6=V5;
x[jvj+18]=0 ;z[jvj+18]=0;
l14:pile[v[22]]=jvj+18; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+16)*/
goto l13;
l24:V9=V8;
x[jvj+26]=0 ;z[jvj+26]=0;
l25:pile[v[22]]=jvj+24; pile[WZ1]=1048; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+24,1048,jvj+31)*/
pile[v[22]]=482; pile[WZ1]=jvj+22; pile[WZ2]=576; pile[WZ3]=jvj+23; pile[WZ4]=jvj+31; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(482,jvj+22,576,jvj+23,jvj+31,jvj+25)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[196])( );     /*PLUF0(jvj+19,jvj+25,jvj+26)*/
goto l19;
}
