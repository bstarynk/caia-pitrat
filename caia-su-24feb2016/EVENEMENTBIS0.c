#include "dx.h"
void EVENEMENTBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int A,B,HIST;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=11595;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1366&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; HIST=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if(x[A]!=25&&x[A]!=1347) goto l3;
pile[v[22]]=B; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(B,jvj+2)*/
if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(509,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l3;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=B; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+5,B,jvj+6)*/
if((x[jvj+6]==135)) goto l2;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l2:x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
l4:pile[v[22]]=jvj+7; pile[WZ1]=971; pile[WZ2]=A; 
(*f[36])( );     /*PLUSC0(jvj+7,971,A)*/
if(x[A]!=27&&x[A]!=29&&x[A]!=1289) goto l5;
(*f[1595])( );     /*CRETUND0(jvj+7)*/
l5:if(x[A]!=25&&x[A]!=1347) goto l6;
pile[v[22]]=1417; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(1417,jvj+7)*/
pile[v[22]]=jvj+7; 
(*f[1554])( );     /*CRETUCONTR0(jvj+7)*/
l6:pile[v[22]]=A; pile[WZ1]=jvj+7; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(A,jvj+7,HIST)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+7]=x[B] ;z[jvj+7]=z[B];
goto l4;
}
