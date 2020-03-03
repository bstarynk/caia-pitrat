#include "dx.h"
void CE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V19=0,V10=0,V13=0,V15=0;
int TL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10612;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1070&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V9=0;
V19=V9;
x[jvj+10]=x[TL] ;z[jvj+10]=z[TL];
l5:pile[v[22]]=213; pile[WZ1]=TL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(213,TL,jvj+6)*/
l6:if((x[jvj+6]<=0)) goto l1;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V10)*/
V10=pile[WZ2]; 
if((V10!=V19)) goto l7;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(140,jvj+7,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V13; pile[WZ4]=jvj+8; 
(*f[270])( );     /*QUADRI7(100,21,140,V13,jvj+8)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=117; pile[WZ3]=V19; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(102,jvj+8,117,V19,jvj+9)*/
V15=V19+1;
pile[v[22]]=jvj+10; pile[WZ1]=120; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+10,120,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
V19=V15;
goto l5;
l1:pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(583,TL,jvj+2)*/
x[jvj+5]=incon;
pile[v[22]]=708; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(708,jvj+2,jvj+3)*/
if(x[jvj+3]!=68&&x[jvj+3]!=729) goto l2;
x[jvj+5]=68 ;z[jvj+5]=68;
l3:x[jvj+4]=vo[20];z[jvj+4]=vz[20];
pile[v[22]]=jvj+4; pile[WZ1]=617; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(jvj+4,617,jvj+5)*/
pile[v[22]]=TL; 
(*f[1387])( );     /*MNA0(TL)*/
(*f[1388])( );     /*MNB0(TL)*/
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+5]=67 ;z[jvj+5]=67;
goto l3;
l7:x[jvj+6]=t[x[jvj+6]];
goto l6;
}
