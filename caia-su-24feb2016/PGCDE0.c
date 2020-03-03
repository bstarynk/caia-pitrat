#include "dx.h"
void PGCDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,XN=0,V2=0,V5=0,V7=0;
int E;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11221;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==622&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+10]=x[E] ;z[jvj+10]=z[E];
l1:if((x[jvj+10]<=0)) goto l8;
x[jvj+2]=s[x[jvj+10]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+10];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+2,V1)*/
V1=pile[WZ2]; 
x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
XN=V1;
if((XN==1)) goto l3;
for(i=x[E],V2=0;i>0;i=t[i],V2++)  ;
if((V2==1)) goto l4;
if((V2==2)) goto l6;
if((V2<=2)) goto l8;
x[jvj+12]=x[E] ;z[jvj+12]=z[E];
l10:if((x[jvj+12]>0)) goto l11;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l3:R=1;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l4:R=XN;
goto l9;
l6:x[jvj+11]=x[E] ;z[jvj+11]=z[E];
l5:if((x[jvj+11]<=0)) goto l8;
x[jvj+3]=s[x[jvj+11]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+11];
if((x[jvj+3]==x[jvj+6])) goto l7;
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=XN; 
(*f[1011])( );     /*PGCD0(V5,XN,R)*/
R=pile[WZ2]; 
goto l9;
l7:x[jvj+11]=t[x[jvj+11]];
goto l5;
l11:x[jvj+5]=s[x[jvj+12]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+12];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[760])( );     /*MEMEX0(jvj+5,jvj+6,jvj+7)*/
if((x[jvj+7]==135)) goto l12;
x[jvj+12]=t[x[jvj+12]];
goto l10;
l12:x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+13]=x[E] ;z[jvj+13]=z[E];
l13:if((x[jvj+13]>0)) goto l14;
x[jvj+4]=x[jvj+8] ;z[jvj+4]=z[jvj+8];
pile[v[22]]=jvj+4; 
(*f[622])( );if(v[102]) goto l8;     /*PGCDE0(jvj+4,V7)*/
V7=pile[WZ1]; 
pile[v[22]]=V7; pile[WZ1]=XN; 
(*f[1011])( );     /*PGCD0(V7,XN,R)*/
R=pile[WZ2]; 
goto l9;
l14:x[jvj+9]=s[x[jvj+13]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+13];
if((x[jvj+9]==x[jvj+5])) goto l15;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
l15:x[jvj+13]=t[x[jvj+13]];
goto l13;
}
