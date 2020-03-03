#include "dx.h"
void COMPLETE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V46=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,LL=0,V9=0,V=0,V25=0,W=0,V29=0,V33=0,V32=0,SS=0,S=0,V53=0;
int N,KR,UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=10010;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==380&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; KR=pile[v[22]+1]; UR=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=345; pile[WZ1]=N; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(345,N,jvj+2)*/
pile[v[22]]=184; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(184,jvj+2)*/
l1:pile[v[22]]=184; pile[WZ1]=N; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,N,jvj+3)*/
l2:if((x[jvj+3]>0)) goto l3;
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+6)*/
if((x[jvj+6]>0)) goto l4;
pile[v[22]]=N; pile[WZ1]=0; 
(*f[744])( );if(v[102]) goto l21;     /*VE0(N,0,LL)*/
LL=pile[WZ2]; 
pile[WZ1]=583; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(N,583,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+2; pile[WZ2]=297; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+2,297,jvj+32)*/
pile[v[22]]=130; pile[WZ1]=0; pile[WZ2]=246; pile[WZ3]=LL; pile[WZ4]=jvj+32; pile[WZ5]=jvj+8; 
(*f[190])( );     /*QUADRI3(130,0,246,LL,jvj+32,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=365; pile[WZ2]=jvj+8; 
(*f[36])( );     /*PLUSC0(jvj+2,365,jvj+8)*/
l7:x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,N,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=69)) goto l12;
pile[v[22]]=108; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(108,jvj+17,jvj+19)*/
x[jvj+20]=d[38];z[jvj+20]=0;
l9:if((x[jvj+19]<=0)) goto l12;
x[jvj+21]=s[x[jvj+19]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+19];
pile[v[22]]=103; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+21,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+22,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+15]=x[jvj+24] ;z[jvj+15]=z[jvj+24];
x[jvj+33]=incon;
pile[v[22]]=288; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(288,jvj+15,jvj+16)*/
x[jvj+35]=x[jvj+16] ;z[jvj+35]=z[jvj+16];
x[jvj+33]=x[jvj+35] ;z[jvj+33]=z[jvj+35];
l11:W=V25;
pile[v[22]]=140; pile[WZ1]=W; pile[WZ2]=158; pile[WZ3]=jvj+33; pile[WZ4]=jvj+25; 
(*f[692])( );     /*QUADRI13(140,W,158,jvj+33,jvj+25)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+25,jvj+26)*/
l10:x[jvj+19]=t[x[jvj+19]];
goto l9;
l3:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l2;
l4:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
V46=x[jvj+7];
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=jvj+7; pile[WZ1]=0; pile[WZ2]=V46; pile[WZ3]=213; 
(*f[285])( );     /*ENLY0(jvj+7,0,V46,213,V37,V38)*/
V37=pile[WZ4]; V38=pile[WZ5]; 
pile[WZ1]=V38; pile[WZ2]=V37; pile[WZ3]=222; 
(*f[285])( );     /*ENLY0(jvj+7,V38,V37,222,V39,V40)*/
V39=pile[WZ4]; V40=pile[WZ5]; 
pile[WZ1]=V40; pile[WZ2]=V39; pile[WZ3]=223; 
(*f[285])( );     /*ENLY0(jvj+7,V40,V39,223,V41,V42)*/
V41=pile[WZ4]; V42=pile[WZ5]; 
pile[WZ1]=V42; pile[WZ2]=V41; pile[WZ3]=283; 
(*f[285])( );     /*ENLY0(jvj+7,V42,V41,283,V43,V44)*/
V43=pile[WZ4]; V44=pile[WZ5]; 
goto l7;
l8:x[jvj+33]=20 ;z[jvj+33]=20;
goto l11;
l12:pile[v[22]]=jvj+8; pile[WZ1]=283; pile[WZ2]=jvj+26; 
(*f[34])( );     /*CHGC0(jvj+8,283,jvj+26)*/
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,N,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=69)) goto l13;
pile[v[22]]=108; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(108,jvj+9,jvj+11)*/
l5:if((x[jvj+11]<=0)) goto l13;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+12,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+13,V9)*/
V9=pile[WZ2]; 
V=V9;
pile[v[22]]=jvj+14; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+14,V)*/
l6:x[jvj+11]=t[x[jvj+11]];
goto l5;
l13:x[jvj+27]=x[jvj+14] ;z[jvj+27]=z[jvj+14];
pile[v[22]]=jvj+8; pile[WZ1]=222; pile[WZ2]=jvj+27; 
(*f[34])( );     /*CHGC0(jvj+8,222,jvj+27)*/
V53=x[jvj+27];
l18:if((V53>0)) goto l19;
pile[v[22]]=jvj+8; 
(*f[745])( );     /*CREKNDR0(jvj+8)*/
pile[WZ1]=73; 
(*f[273])( );     /*PLUK1(jvj+8,73)*/
pile[v[22]]=KR; pile[WZ1]=UR; pile[WZ2]=jvj+8; 
(*f[355])( );     /*EAX0(KR,UR,jvj+8)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l15:x[jvj+29]=s[x[jvj+36]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+36];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+29,V29)*/
V29=pile[WZ2]; 
if((V29!=SS)) goto l16;
SS++;
l17:if((SS>V32)) goto l20;
pile[v[22]]=213; pile[WZ1]=jvj+8; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(213,jvj+8,jvj+28)*/
x[jvj+36]=x[jvj+28] ;z[jvj+36]=z[jvj+28];
l14:if((x[jvj+36]>0)) goto l15;
pile[v[22]]=S; pile[WZ1]=140; pile[WZ2]=jvj+34; 
(*f[329])( );     /*TRI13(S,140,jvj+34)*/
pile[v[22]]=122; pile[WZ1]=114; pile[WZ2]=130; pile[WZ3]=SS; pile[WZ4]=jvj+34; pile[WZ5]=jvj+30; 
(*f[47])( );     /*QUADRI0(122,114,130,SS,jvj+34,jvj+30)*/
pile[v[22]]=jvj+8; pile[WZ1]=213; pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+8,213,jvj+30)*/
l20:V53=t[V53];
goto l18;
l16:x[jvj+36]=t[x[jvj+36]];
goto l14;
l19:S=s[V53];
for(i=x[jvj+27],V33=0;i>0;i=t[i],V33++)  ;
V32=V33-1;
SS=0;
goto l17;
l22:pile[v[22]]=100; pile[WZ1]=508; pile[WZ2]=218; pile[WZ3]=854; pile[WZ4]=jvj+2; 
(*f[181])( );     /*QUADRI2(100,508,218,854,jvj+2)*/
pile[v[22]]=N; pile[WZ1]=345; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(N,345,jvj+2)*/
pile[WZ1]=367; 
(*f[36])( );     /*PLUSC0(N,367,jvj+2)*/
goto l1;
}
