#include "dx.h"
void ANAPREM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Y=0,V7=0,V4=0;
int A,P;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=11263;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3634&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; P=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=A; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(A,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
pile[v[22]]=P; pile[WZ1]=A; pile[WZ2]=(-1); pile[WZ3]=0; pile[WZ4]=jvj+9; 
(*f[3636])( );if(v[102]) goto l8;     /*CRESPENS0(P,A,(-1),0,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=E; 
(*f[4007])( );     /*CMTTENS0(jvj+9,E)*/
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:pile[v[22]]=1310; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1310,jvj+4,jvj+5)*/
x[jvj+10]=x[jvj+5] ;z[jvj+10]=z[jvj+5];
l3:if((x[jvj+10]<=0)) goto l8;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=P)) goto l4;
pile[v[22]]=195; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(195,jvj+2,jvj+3)*/
V7=x[jvj+3];
l1:if((V7<=0)) goto l7;
Y=s[V7];
if((Y<0)) goto l4;
V7=t[V7];
goto l1;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l6:x[jvj+4]=s[x[jvj+7]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+7];
pile[v[22]]=1287; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1287,jvj+4,jvj+8)*/
if((x[jvj+8]!=0)) goto l7;
pile[v[22]]=131; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(131,jvj+4,jvj+6)*/
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
