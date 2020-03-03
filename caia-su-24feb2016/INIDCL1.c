#include "dx.h"
void INIDCL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,W=0,V30=0,V23=0,F=0,V8=0,V29=0,V33=0;
int X,Y,V,XV,EA,EJ,EV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=11479;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1399&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; V=pile[v[22]+2]; XV=pile[v[22]+3]; EA=pile[v[22]+4]; EJ=pile[v[22]+5]; EV=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=EV; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(EV,V)*/
x[jvj+26]=x[EA] ;z[jvj+26]=z[EA];
l7:if((x[jvj+26]<=0)) goto l10;
x[jvj+15]=s[x[jvj+26]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+26];
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+17,jvj+18)*/
F=x[jvj+18];
if(F!=278&&F!=910&&F!=1607) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+15,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[938])( );     /*USE0(jvj+19,jvj+20)*/
for(i=x[jvj+20],V8=0;i>0;i=t[i],V8++)  ;
if((V8!=1)) goto l8;
for(a=x[jvj+20];a>0;a=t[a]) if(s[a]==V) goto l9;
l8:x[jvj+26]=t[x[jvj+26]];
goto l7;
l4:W=s[V30];
for(a=x[EV];a>0;a=t[a]) if(s[a]==W) goto l5;
l13:x[jvj+27]=t[x[jvj+27]];
l11:if((x[jvj+27]>0)) goto l12;
V33=x[EV];
l16:if((V33>0)) goto l17;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; return;
l5:V30=t[V30];
l3:if((V30>0)) goto l4;
pile[v[22]]=905; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(905,X,V23)*/
V23=pile[WZ2]; 
if((V23!=(-11721))) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+3,jvj+11)*/
if((x[jvj+11]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+12,jvj+13)*/
x[jvj+9]=x[jvj+13] ;z[jvj+9]=z[jvj+13];
pile[v[22]]=1854; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1854,jvj+9,jvj+10)*/
l14:pile[v[22]]=jvj+24; pile[WZ1]=jvj+3; pile[WZ2]=jvj+25; 
(*f[1398])( );     /*FIGUREFON0(jvj+24,jvj+3,jvj+25)*/
if((x[jvj+25]==134)) goto l15;
goto l13;
l6:pile[v[22]]=39; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+9,jvj+14)*/
goto l13;
l9:pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+15,jvj+21)*/
x[jvj+22]=x[jvj+21] ;z[jvj+22]=z[jvj+21];
pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+15)*/
pile[v[22]]=jvj+22; pile[WZ1]=EV; 
(*f[1397])( );     /*CVINST0(jvj+22,EV)*/
l10:pile[v[22]]=763; pile[WZ1]=XV; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(763,XV,jvj+23)*/
pile[v[22]]=1404; pile[WZ1]=22; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(1404,22,jvj+24)*/
x[jvj+27]=x[EA] ;z[jvj+27]=z[EA];
goto l11;
l12:x[jvj+3]=s[x[jvj+27]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+27];
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+3,jvj+7)*/
if((x[jvj+7]==39)) goto l13;
l1:pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+3,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+5,jvj+6)*/
V10=x[jvj+6];
if(V10==278||V10==910||V10==1607) goto l13;
l2:pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[938])( );     /*USE0(jvj+3,jvj+8)*/
V30=x[jvj+8];
goto l3;
l15:pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+3)*/
goto l13;
l17:V29=s[V33];
for(a=x[EJ];a>0;a=t[a]) if(s[a]==V29) goto l18;
pile[v[22]]=EJ; pile[WZ1]=V29; 
(*f[331])( );     /*PLUE3(EJ,V29)*/
pile[v[22]]=X; pile[WZ1]=Y; pile[WZ2]=V29; pile[WZ3]=XV; pile[WZ4]=EA; pile[WZ5]=EJ; pile[v[22]+6]=EV; 
(*f[1399])( );     /*INIDCL1(X,Y,V29,XV,EA,EJ,EV)*/
l18:V33=t[V33];
goto l16;
}
