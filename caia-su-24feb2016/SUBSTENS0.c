#include "dx.h"
void SUBSTENS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,Y,E;
int F;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11066;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3199&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; E=pile[v[22]+2]; F=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+11]=x[E] ;z[jvj+11]=z[E];
l3:if((x[jvj+11]>0)) goto l4;
x[F]=x[jvj+10] ;z[F]=z[jvj+10];
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l1:pile[v[22]]=jvj+5; pile[WZ1]=X; pile[WZ2]=Y; pile[WZ3]=jvj+7; pile[WZ4]=jvj+8; 
(*f[3130])( );if(v[102]) goto l2;     /*SUBSTITUVAR1(jvj+5,X,Y,jvj+7,jvj+8)*/
if((x[jvj+8]==876)) goto l2;
pile[v[22]]=68; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[1157])( );if(v[102]) goto l2;     /*NORME1(68,jvj+7,jvj+9)*/
x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
x[jvj+12]=x[jvj+13] ;z[jvj+12]=z[jvj+13];
l6:x[jvj+2]=x[jvj+12] ;z[jvj+2]=z[jvj+12];
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==135)) goto l5;
l7:pile[v[22]]=jvj+10; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+2)*/
l5:x[jvj+11]=t[x[jvj+11]];
goto l3;
l4:x[jvj+5]=s[x[jvj+11]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+11];
x[jvj+12]=incon;
pile[v[22]]=X; pile[WZ1]=jvj+4; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(X,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l1;
l2:x[jvj+12]=x[jvj+5] ;z[jvj+12]=z[jvj+5];
goto l6;
}
