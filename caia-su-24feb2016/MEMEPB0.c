#include "dx.h"
void MEMEPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V30=0,V1=0,V32=0,V2=0,V14=0,V15=0,V7=0,V9=0,V18=0,V20=0,V40=0,V39=0,V42=0,V27=0,V41=0;
int P,DQ;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; DQ=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V3=incon;
pile[v[22]]=948; pile[WZ1]=P; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(948,P,jvj+1)*/
V3=x[jvj+1];
l2:V4=incon;
pile[v[22]]=948; pile[WZ1]=DQ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(948,DQ,jvj+2)*/
V4=x[jvj+2];
l4:if((V3!=V4)) goto l5;
x[jvj+3]=d[86];z[jvj+3]=0;
l6:if((x[jvj+3]>0)) goto l7;
pile[v[22]]=1025; pile[WZ1]=P; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1025,P,jvj+17)*/
for(i=x[jvj+17],V7=0;i>0;i=t[i],V7++)  ;
pile[WZ1]=DQ; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1025,DQ,jvj+18)*/
for(i=x[jvj+18],V9=0;i>0;i=t[i],V9++)  ;
if((V7!=V9)) goto l5;
l12:if((x[jvj+17]>0)) goto l13;
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1081,P,jvj+19)*/
for(i=x[jvj+19],V18=0;i>0;i=t[i],V18++)  ;
pile[WZ1]=DQ; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(1081,DQ,jvj+20)*/
for(i=x[jvj+20],V20=0;i>0;i=t[i],V20++)  ;
if((V18!=V20)) goto l5;
l15:if((x[jvj+19]>0)) goto l16;
pile[v[22]]=901; pile[WZ1]=P; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(901,P,jvj+21)*/
pile[WZ1]=DQ; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(901,DQ,jvj+22)*/
for(i=x[jvj+21],V40=0;i>0;i=t[i],V40++)  ;
for(i=x[jvj+22],V39=0;i>0;i=t[i],V39++)  ;
if((V40!=V39)) goto l21;
V42=x[jvj+21];
l20:if((V42>0)) goto l23;
V27=135;
l18:if((V27==134)) goto l5;
x[R]=68 ;z[R]=68;
l19:v[0]=jvj; v[22]-=3; return;
l1:V3=67;
goto l2;
l3:V4=67;
goto l4;
l5:x[R]=67 ;z[R]=67;
goto l19;
l7:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=P; pile[WZ1]=jvj+4; pile[WZ3]=jvj+5; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(P,jvj+4,V30,jvj+5)*/
V30=pile[WZ2]; 
V1=V30;
pile[v[22]]=DQ; pile[WZ3]=jvj+6; 
(*f[45])( );if(v[102]) goto l8;     /*FNDZ0(DQ,jvj+4,V32,jvj+6)*/
V32=pile[WZ2]; 
V2=V32;
if((V1!=V2)) goto l5;
l8:x[jvj+3]=t[x[jvj+3]];
goto l6;
l13:x[jvj+7]=s[x[jvj+17]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+17];
pile[v[22]]=1110; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1110,jvj+7,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=1025; pile[WZ1]=DQ; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1025,DQ,jvj+8)*/
pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(698,jvj+7,jvj+9)*/
x[jvj+23]=x[jvj+8] ;z[jvj+23]=z[jvj+8];
l9:if((x[jvj+23]<=0)) goto l5;
x[jvj+10]=s[x[jvj+23]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+23];
pile[v[22]]=1110; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1110,jvj+10,V15)*/
V15=pile[WZ2]; 
if((V14!=V15)) goto l10;
pile[v[22]]=698; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(698,jvj+10,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[760])( );     /*MEMEX0(jvj+9,jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l14;
l10:x[jvj+23]=t[x[jvj+23]];
goto l9;
l14:x[jvj+17]=t[x[jvj+17]];
goto l12;
l16:x[jvj+14]=s[x[jvj+19]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+19];
pile[v[22]]=1081; pile[WZ1]=DQ; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1081,DQ,jvj+13)*/
x[jvj+24]=x[jvj+13] ;z[jvj+24]=z[jvj+13];
l11:if((x[jvj+24]<=0)) goto l5;
x[jvj+15]=s[x[jvj+24]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+24];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+14,jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l17;
x[jvj+24]=t[x[jvj+24]];
goto l11;
l17:x[jvj+19]=t[x[jvj+19]];
goto l15;
l22:V42=t[V42];
goto l20;
l23:V41=s[V42];
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==V41) goto l22;
l21:V27=134;
goto l18;
}
