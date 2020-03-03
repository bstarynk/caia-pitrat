#include "dx.h"
void QO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=15;
if(v[0]>99700) (*f[6])( );


WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(454,jvj+11,jvj+12)*/
l7:if((x[jvj+12]>0)) goto l8;
v[0]=jvj; return;
l2:x[jvj+13]=t[x[jvj+13]];
l1:if((x[jvj+13]<=0)) goto l9;
x[jvj+3]=s[x[jvj+13]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+13];
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+3,jvj+4)*/
if((x[jvj+4]!=20)) goto l2;
pile[v[22]]=101; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+3,jvj+5)*/
if(x[jvj+5]!=135&&x[jvj+5]!=134) goto l2;
pile[v[22]]=481; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(481,jvj+1,jvj+6)*/
x[jvj+14]=x[jvj+6] ;z[jvj+14]=z[jvj+6];
l3:if((x[jvj+14]>0)) goto l4;
pile[v[22]]=480; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(480,jvj+1,jvj+9)*/
x[jvj+15]=x[jvj+9] ;z[jvj+15]=z[jvj+9];
l6:if((x[jvj+15]<=0)) goto l9;
x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
pile[v[22]]=jvj+10; pile[WZ1]=280; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+10,280,0)*/
pile[WZ1]=164; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+10,164,1)*/
x[jvj+15]=t[x[jvj+15]];
goto l6;
l4:x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+8)*/
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+8,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=130; pile[WZ2]=V7; 
(*f[43])( );     /*CHGC2(jvj+7,130,V7)*/
l5:x[jvj+14]=t[x[jvj+14]];
goto l3;
l8:x[jvj+1]=s[x[jvj+12]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+12];
pile[v[22]]=481; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(481,jvj+1,jvj+2)*/
x[jvj+13]=x[jvj+2] ;z[jvj+13]=z[jvj+2];
goto l1;
l9:x[jvj+12]=t[x[jvj+12]];
goto l7;
}
