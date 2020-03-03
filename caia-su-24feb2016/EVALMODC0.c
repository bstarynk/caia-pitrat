#include "dx.h"
void EVALMODC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V16=0,V18=0,I=0,RR=0,V5=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0;
int A,P;
int RS;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11661;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3563&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; P=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
V29=I%P;
V30=V29;
if((V30<0)) goto l12;
RS=V30;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=RS; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+8]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+8];
pile[v[22]]=jvj+2; pile[WZ1]=P; 
(*f[3563])( );if(v[102]) goto l3;     /*EVALMODC0(jvj+2,P,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V6; 
(*f[186])( );     /*BTC0(jvj+3,117,V6)*/
l3:x[jvj+8]=t[x[jvj+8]];
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+3,V8)*/
V8=pile[WZ2]; 
V32=V8%P;
V33=V32;
if((V33<0)) goto l13;
RS=V33;
goto l11;
l5:x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=jvj+4; pile[WZ1]=P; 
(*f[3563])( );if(v[102]) goto l6;     /*EVALMODC0(jvj+4,P,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=117; pile[WZ2]=V16; 
(*f[818])( );     /*MTC0(jvj+5,117,V16)*/
l6:x[jvj+9]=t[x[jvj+9]];
l4:if((x[jvj+9]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+5,V18)*/
V18=pile[WZ2]; 
V35=V18%P;
V36=V35;
if((V36<0)) goto l14;
RS=V36;
goto l11;
l7:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==485)) goto l8;
if((x[jvj+7]==486)) goto l9;
if((x[jvj+7]!=52)) goto l10;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=P; 
(*f[3563])( );if(v[102]) goto l10;     /*EVALMODC0(jvj+10,P,RR)*/
RR=pile[WZ2]; 
V5=(-RR);
V38=V5%P;
V39=V38;
if((V39<0)) goto l15;
RS=V39;
goto l11;
l8:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,A,jvj+8)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
goto l1;
l9:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,A,jvj+9)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+5; 
(*f[46])( );     /*TRI0(1,117,jvj+5)*/
goto l4;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l12:V31=V30+P;
RS=V31;
goto l11;
l13:V34=V33+P;
RS=V34;
goto l11;
l14:V37=V36+P;
RS=V37;
goto l11;
l15:V40=V39+P;
RS=V40;
goto l11;
}
