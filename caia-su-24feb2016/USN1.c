#include "dx.h"
void USN1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V13=0,V21=0,V24=0,V29=0,V30=0,V=0,V33=0,V34=0;
int A,T,F,G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; T=pile[v[22]+1]; F=pile[v[22]+2]; G=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,A,jvj+14)*/
if((x[jvj+14]!=39)) goto l13;
pile[v[22]]=114; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(114,A,jvj+15)*/
l11:if((x[jvj+15]<=0)) goto l13;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+16,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=T; pile[WZ2]=F; pile[WZ3]=G; 
(*f[1832])( );     /*USN1(jvj+17,T,F,G)*/
l12:x[jvj+15]=t[x[jvj+15]];
goto l11;
l1:pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(159,T,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
x[jvj+5]=vo[15];z[jvj+5]=vz[15];
pile[v[22]]=283; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(283,jvj+5,jvj+6)*/
l5:if((x[jvj+6]<=0)) goto l23;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V24)*/
V24=pile[WZ2]; 
if((V24!=V)) goto l6;
pile[v[22]]=158; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(158,jvj+7,jvj+11)*/
pile[v[22]]=159; pile[WZ1]=362; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(159,362,jvj+12)*/
l9:if((x[jvj+12]<=0)) goto l23;
x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
pile[v[22]]=158; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(158,jvj+8,jvj+13)*/
if((x[jvj+13]!=x[jvj+11])) goto l10;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+8,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=T; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(159,T,jvj+9)*/
x[jvj+25]=x[jvj+9] ;z[jvj+25]=z[jvj+9];
l7:if((x[jvj+25]<=0)) goto l22;
x[jvj+10]=s[x[jvj+25]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+25];
pile[v[22]]=140; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+10,V30)*/
V30=pile[WZ2]; 
if((V29==V30)) goto l10;
l8:x[jvj+25]=t[x[jvj+25]];
goto l7;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+4,V21)*/
V21=pile[WZ2]; 
if((V21==V)) goto l23;
l4:x[jvj+3]=t[x[jvj+3]];
goto l2;
l6:x[jvj+6]=t[x[jvj+6]];
goto l5;
l10:x[jvj+12]=t[x[jvj+12]];
goto l9;
l13:x[jvj+26]=w[x[jvj+14]][9];
if((x[jvj+14]!=185)) goto l14;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(160,A,jvj+1)*/
pile[v[22]]=162; pile[WZ1]=jvj+1; 
(*f[219])( );if(v[102]) goto l14;     /*FNDC2(162,jvj+1,V4)*/
V4=pile[WZ2]; 
if((V4==36)) goto l17;
l14:if((x[jvj+26]>0)) goto l15;
if((x[jvj+14]!=39)) goto l17;
l21:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
for(a=x[G];a>0;a=t[a]) if(s[a]==V) goto l1;
for(a=x[F];a>0;a=t[a]) if(s[a]==V) goto l1;
l23:v[0]=jvj; v[22]-=4; return;
l15:x[jvj+18]=s[x[jvj+26]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+26];
pile[v[22]]=jvj+18; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+18,A,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=T; pile[WZ2]=F; pile[WZ3]=G; 
(*f[1832])( );     /*USN1(jvj+19,T,F,G)*/
l16:x[jvj+26]=t[x[jvj+26]];
goto l14;
l17:x[jvj+27]=w[x[jvj+14]][8];
if((x[jvj+14]!=185)) goto l18;
pile[v[22]]=160; pile[WZ1]=A; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(160,A,jvj+2)*/
pile[v[22]]=162; pile[WZ1]=jvj+2; 
(*f[219])( );if(v[102]) goto l18;     /*FNDC2(162,jvj+2,V13)*/
V13=pile[WZ2]; 
if((V13==36)) goto l21;
l18:if((x[jvj+27]<=0)) goto l21;
x[jvj+20]=s[x[jvj+27]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+27];
pile[v[22]]=jvj+20; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(jvj+20,A,jvj+21)*/
x[jvj+28]=x[jvj+21] ;z[jvj+28]=z[jvj+21];
l19:if((x[jvj+28]>0)) goto l20;
x[jvj+27]=t[x[jvj+27]];
goto l18;
l20:x[jvj+22]=s[x[jvj+28]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+28];
pile[v[22]]=jvj+22; pile[WZ1]=T; pile[WZ2]=F; pile[WZ3]=G; 
(*f[1832])( );     /*USN1(jvj+22,T,F,G)*/
x[jvj+28]=t[x[jvj+28]];
goto l19;
l22:pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+8,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(110,jvj+8,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=163; pile[WZ2]=jvj+24; 
(*f[329])( );     /*TRI13(V,163,jvj+24)*/
pile[v[22]]=110; pile[WZ1]=V34; pile[WZ2]=140; pile[WZ3]=V33; pile[WZ4]=jvj+24; pile[WZ5]=jvj+23; 
(*f[1833])( );     /*QUADRI18(110,V34,140,V33,jvj+24,jvj+23)*/
pile[v[22]]=T; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(T,159,jvj+23)*/
goto l23;
}
