#include "dx.h"
void USVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V31=0,V10=0,V11=0,V32=0,V25=0,V33=0,F=0;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=21;
if(v[0]>99700) (*f[6])( );

R=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=253; pile[WZ1]=R; 
(*f[71])( );     /*ENLV0(253,R)*/
pile[v[22]]=107; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,R,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+15]=d[10];z[jvj+15]=0;
l9:if((x[jvj+15]>0)) goto l10;
v[0]=jvj; v[22]-=1; return;
l2:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+4,jvj+5)*/
V10=x[jvj+5];
if(V10==54||V10==50||V10==48||V10==55||V10==178) goto l13;
l16:pile[v[22]]=253; pile[WZ1]=jvj+3; 
(*f[71])( );     /*ENLV0(253,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[1834])( );     /*USS0(jvj+3,jvj+3)*/
pile[v[22]]=253; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(253,jvj+3,jvj+8)*/
V32=x[jvj+8];
l3:if((V32<=0)) goto l13;
V11=s[V32];
pile[v[22]]=R; pile[WZ1]=253; pile[WZ2]=V11; 
(*f[735])( );     /*PLUSC4(R,253,V11)*/
V32=t[V32];
goto l3;
l5:V25=s[V33];
pile[v[22]]=R; pile[WZ1]=253; pile[WZ2]=V25; 
(*f[735])( );     /*PLUSC4(R,253,V25)*/
pile[v[22]]=jvj+3; 
(*f[735])( );     /*PLUSC4(jvj+3,253,V25)*/
V33=t[V33];
l4:if((V33>0)) goto l5;
x[jvj+21]=t[x[jvj+21]];
l15:if((x[jvj+21]<=0)) goto l13;
x[jvj+9]=s[x[jvj+21]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+21];
pile[v[22]]=jvj+9; pile[WZ1]=498; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+9,498,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+3,498,R)*/
pile[v[22]]=jvj+9; 
(*f[1651])( );     /*USVAR0(jvj+9)*/
pile[v[22]]=253; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(253,jvj+9,jvj+10)*/
V33=x[jvj+10];
goto l4;
l7:x[jvj+1]=s[x[jvj+11]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+11];
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+1,jvj+12)*/
if((x[jvj+12]!=22)) goto l8;
pile[v[22]]=111; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+1,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+13,jvj+14)*/
F=x[jvj+14];
if(F!=54&&F!=50&&F!=48&&F!=55) goto l8;
pile[v[22]]=jvj+1; pile[WZ1]=498; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(jvj+1,498,R)*/
(*f[1651])( );     /*USVAR0(jvj+1)*/
pile[v[22]]=253; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(253,jvj+1,jvj+2)*/
V31=x[jvj+2];
l1:if((V31<=0)) goto l8;
V=s[V31];
pile[v[22]]=R; pile[WZ1]=253; pile[WZ2]=V; 
(*f[735])( );     /*PLUSC4(R,253,V)*/
V31=t[V31];
goto l1;
l8:x[jvj+11]=t[x[jvj+11]];
goto l6;
l10:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,R,jvj+17)*/
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
l11:if((x[jvj+20]>0)) goto l12;
x[jvj+15]=t[x[jvj+15]];
goto l9;
l12:x[jvj+3]=s[x[jvj+20]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+20];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+3,jvj+18)*/
if((x[jvj+18]==47)) goto l14;
if((x[jvj+18]==22)) goto l2;
if((x[jvj+18]!=73)) goto l16;
pile[v[22]]=111; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==255)) goto l13;
goto l16;
l13:x[jvj+20]=t[x[jvj+20]];
goto l11;
l14:pile[v[22]]=184; pile[WZ1]=jvj+3; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(184,jvj+3,jvj+19)*/
x[jvj+21]=x[jvj+19] ;z[jvj+21]=z[jvj+19];
goto l15;
}
