#include "dx.h"
void INTERPRETATION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int L=0,LL=0,V12=0,V24=0,V25=0,V27=0,K=0,RR=0,V5=0,V15=0,V14=0,V30=0,V29=0,RA=0,RB=0,V6=0,V10=0;
int X,Y,I;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=14;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; Y=pile[v[22]+1]; I=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,X,K)*/
K=pile[WZ2]; 
R=K;
l17:v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
pile[v[22]]=jvj+1; pile[WZ1]=Y; pile[WZ2]=I; 
(*f[3505])( );if(v[102]) goto l3;     /*INTERPRETATION0(jvj+1,Y,I,L)*/
L=pile[WZ3]; 
pile[v[22]]=jvj+2; pile[WZ1]=L; 
(*f[978])( );     /*PLUB3(jvj+2,L)*/
l3:x[jvj+11]=t[x[jvj+11]];
l1:if((x[jvj+11]>0)) goto l2;
for(i=x[jvj+2],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=V15)) goto l16;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
l4:if((x[jvj+2]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+3,V12)*/
V12=pile[WZ2]; 
R=V12;
goto l17;
l5:LL=s[x[jvj+2]];
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=LL; 
(*f[186])( );     /*BTC0(jvj+3,117,LL)*/
x[jvj+2]=t[x[jvj+2]];
goto l4;
l7:x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=jvj+4; pile[WZ1]=Y; pile[WZ2]=I; 
(*f[3505])( );if(v[102]) goto l8;     /*INTERPRETATION0(jvj+4,Y,I,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=jvj+5; pile[WZ1]=V24; 
(*f[978])( );     /*PLUB3(jvj+5,V24)*/
l8:x[jvj+12]=t[x[jvj+12]];
l6:if((x[jvj+12]>0)) goto l7;
for(i=x[jvj+5],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=V30)) goto l16;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(1,117,jvj+6)*/
l9:if((x[jvj+5]>0)) goto l10;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+6,V27)*/
V27=pile[WZ2]; 
R=V27;
goto l17;
l10:V25=s[x[jvj+5]];
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V25; 
(*f[818])( );     /*MTC0(jvj+6,117,V25)*/
x[jvj+5]=t[x[jvj+5]];
goto l9;
l11:pile[v[22]]=X; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(X,Y,jvj+7)*/
if((x[jvj+7]==135)) goto l12;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==52)) goto l13;
if((x[jvj+9]==485)) goto l14;
if((x[jvj+9]==486)) goto l15;
if((x[jvj+9]!=990)) goto l16;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=Y; pile[WZ2]=I; 
(*f[3505])( );if(v[102]) goto l16;     /*INTERPRETATION0(jvj+13,Y,I,RA)*/
RA=pile[WZ3]; 
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,X,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=Y; pile[WZ2]=I; 
(*f[3505])( );if(v[102]) goto l16;     /*INTERPRETATION0(jvj+14,Y,I,RB)*/
RB=pile[WZ3]; 
V6=RA%RB;
if((V6!=0)) goto l16;
if((RB==0)) goto l16;
V10=RA/RB;
R=V10;
goto l17;
l12:R=I;
goto l17;
l13:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,X,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=Y; pile[WZ2]=I; 
(*f[3505])( );if(v[102]) goto l16;     /*INTERPRETATION0(jvj+10,Y,I,RR)*/
RR=pile[WZ3]; 
V5=(-RR);
R=V5;
goto l17;
l14:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,X,jvj+11)*/
for(i=x[jvj+11],V15=0;i>0;i=t[i],V15++)  ;
x[jvj+2]=0 ;z[jvj+2]=0;
goto l1;
l15:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,X,jvj+12)*/
for(i=x[jvj+12],V30=0;i>0;i=t[i],V30++)  ;
x[jvj+5]=0 ;z[jvj+5]=0;
goto l6;
l16:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
