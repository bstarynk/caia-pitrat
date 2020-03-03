#include "dx.h"
void INIDCL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,W=0,V33=0,V26=0,F=0,V11=0,V32=0,V36=0;
int X,Y,V,XV,EA;
int EV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=11479;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1085&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; V=pile[v[22]+2]; XV=pile[v[22]+3]; EA=pile[v[22]+4]; EV=pile[v[22]+5]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=jvj+3; pile[WZ1]=(-3629); 
(*f[331])( );     /*PLUE3(jvj+3,(-3629))*/
pile[WZ1]=(-6470); 
(*f[331])( );     /*PLUE3(jvj+3,(-6470))*/
x[jvj+28]=0 ;z[jvj+28]=0;
x[EV]=x[jvj+3] ;z[EV]=z[jvj+3];
x[jvj+27]=x[jvj+28] ;z[jvj+27]=z[jvj+28];
pile[v[22]]=EV; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(EV,V)*/
x[jvj+29]=x[EA] ;z[jvj+29]=z[EA];
l7:if((x[jvj+29]<=0)) goto l10;
x[jvj+16]=s[x[jvj+29]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+29];
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+16,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+18,jvj+19)*/
F=x[jvj+19];
if(F!=278&&F!=910&&F!=1607) goto l8;
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+16,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[938])( );     /*USE0(jvj+20,jvj+21)*/
for(i=x[jvj+21],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=1)) goto l8;
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==V) goto l9;
l8:x[jvj+29]=t[x[jvj+29]];
goto l7;
l4:W=s[V33];
for(a=x[EV];a>0;a=t[a]) if(s[a]==W) goto l5;
l13:x[jvj+30]=t[x[jvj+30]];
l11:if((x[jvj+30]>0)) goto l12;
V36=x[EV];
l16:if((V36>0)) goto l17;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=6; return;
l5:V33=t[V33];
l3:if((V33>0)) goto l4;
pile[v[22]]=905; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(905,X,V26)*/
V26=pile[WZ2]; 
if((V26!=(-11721))) goto l14;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+4,jvj+12)*/
if((x[jvj+12]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+4,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+13,jvj+14)*/
x[jvj+10]=x[jvj+14] ;z[jvj+10]=z[jvj+14];
pile[v[22]]=1854; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1854,jvj+10,jvj+11)*/
l14:pile[v[22]]=jvj+25; pile[WZ1]=jvj+4; pile[WZ2]=jvj+26; 
(*f[1398])( );     /*FIGUREFON0(jvj+25,jvj+4,jvj+26)*/
if((x[jvj+26]==134)) goto l15;
goto l13;
l6:pile[v[22]]=39; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(39,jvj+10,jvj+15)*/
goto l13;
l9:pile[v[22]]=103; pile[WZ1]=jvj+16; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+16,jvj+22)*/
x[jvj+23]=x[jvj+22] ;z[jvj+23]=z[jvj+22];
pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+16)*/
pile[v[22]]=jvj+23; pile[WZ1]=EV; 
(*f[1397])( );     /*CVINST0(jvj+23,EV)*/
l10:pile[v[22]]=763; pile[WZ1]=XV; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(763,XV,jvj+24)*/
pile[v[22]]=1404; pile[WZ1]=22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(1404,22,jvj+25)*/
x[jvj+30]=x[EA] ;z[jvj+30]=z[EA];
goto l11;
l12:x[jvj+4]=s[x[jvj+30]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+30];
for(a=x[jvj+24];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(100,jvj+4,jvj+8)*/
if((x[jvj+8]==39)) goto l13;
l1:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+4,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
V13=x[jvj+7];
if(V13==278||V13==910||V13==1607) goto l13;
l2:pile[v[22]]=jvj+4; pile[WZ1]=jvj+9; 
(*f[938])( );     /*USE0(jvj+4,jvj+9)*/
V33=x[jvj+9];
goto l3;
l15:pile[v[22]]=XV; pile[WZ1]=763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(XV,763,jvj+4)*/
goto l13;
l17:V32=s[V36];
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V32) goto l18;
pile[v[22]]=jvj+27; pile[WZ1]=V32; 
(*f[331])( );     /*PLUE3(jvj+27,V32)*/
pile[v[22]]=X; pile[WZ1]=Y; pile[WZ2]=V32; pile[WZ3]=XV; pile[WZ4]=EA; pile[WZ5]=jvj+27; pile[v[22]+6]=EV; 
(*f[1399])( );     /*INIDCL1(X,Y,V32,XV,EA,jvj+27,EV)*/
l18:V36=t[V36];
goto l16;
}
