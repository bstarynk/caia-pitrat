#include "dx.h"
void COMPARE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0,V10=0,V11=0,V8=0;
int X,Y,S;
int RES;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10965;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1545&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; S=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=incon;
x[jvj+4]=1113 ;z[jvj+4]=1113;
l1:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
pile[v[22]]=145; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(145,jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=Y; pile[WZ3]=jvj+6; 
(*f[1728])( );     /*COMPARAISON0(jvj+5,X,Y,jvj+6)*/
if((x[jvj+6]==68)) goto l3;
l2:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,jvj+3,jvj+4)*/
goto l1;
l3:x[RES]=x[jvj+5] ;z[RES]=z[jvj+5];
l4:if(x[RES]==incon) goto l5;
l6:if(x[RES]!=incon) goto l7;
l11:x[jvj+7]=d[109];z[jvj+7]=0;
l9:if((x[jvj+7]>0)) goto l10;
x[jvj+9]=d[110];z[jvj+9]=0;
l13:if((x[jvj+9]>0)) goto l14;
if(x[RES]!=incon) goto l18;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l5:x[RES]=178 ;z[RES]=178;
goto l6;
l7:if((x[RES]==25)) goto l8;
pile[v[22]]=S; pile[WZ1]=1113; pile[WZ2]=RES; 
(*f[35])( );     /*CHGC1(S,1113,RES)*/
pile[v[22]]=Y; 
(*f[35])( );     /*CHGC1(Y,1113,RES)*/
l8:pile[v[22]]=117; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,X,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=Y; pile[WZ1]=1113; pile[WZ2]=RES; 
(*f[35])( );     /*CHGC1(Y,1113,RES)*/
pile[WZ1]=1115; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(Y,1115,V4)*/
pile[v[22]]=S; 
(*f[43])( );     /*CHGC2(S,1115,V4)*/
goto l11;
l10:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(jvj+8,X,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(jvj+8,Y,V11)*/
V11=pile[WZ2]; 
if((V10==V11)) goto l12;
pile[v[22]]=S; pile[WZ1]=jvj+8; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(S,jvj+8,V11)*/
l12:x[jvj+7]=t[x[jvj+7]];
goto l9;
l14:x[jvj+2]=s[x[jvj+9]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(jvj+2,Y,V8)*/
V8=pile[WZ2]; 
pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(jvj+2,X,V6)*/
V6=pile[WZ2]; 
if((V6<=((V8*11)/10)+2)&&(V6>=((V8*9)/10)-2)) goto l15;
l16:pile[v[22]]=S; pile[WZ1]=jvj+2; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(S,jvj+2,V8)*/
l15:x[jvj+9]=t[x[jvj+9]];
goto l13;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
}
