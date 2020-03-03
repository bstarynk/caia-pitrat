#include "dx.h"
void TRADRIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X,BA,Q;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11790;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1231&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; BA=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1738; pile[WZ1]=BA; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1738,BA,jvj+6)*/
pile[v[22]]=447; pile[WZ1]=68; pile[WZ2]=459; pile[WZ3]=865; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(447,68,459,865,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=BA; pile[WZ2]=X; pile[WZ3]=jvj+8; 
(*f[1234])( );if(v[102]) goto l3;     /*TRADCREE0(jvj+7,BA,X,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ2]=1881; pile[WZ3]=Q; pile[WZ4]=jvj+2; 
(*f[1232])( );     /*CORRECTIF0(jvj+8,BA,1881,Q,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+2,jvj+3)*/
if((250==x[jvj+3])) goto l3;
l1:pile[v[22]]=jvj+2; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=jvj+9; 
(*f[1233])( );if(v[102]) goto l3;     /*MISENFORME0(jvj+2,BA,1881,jvj+9)*/
if((x[jvj+9]!=250)) goto l2;
pile[v[22]]=218; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,BA,jvj+4)*/
x[jvj+5]=vo[20];z[jvj+5]=vz[20];
pile[v[22]]=jvj+5; pile[WZ1]=1051; 
(*f[36])( );     /*PLUSC0(jvj+5,1051,jvj+4)*/
l2:pile[v[22]]=jvj+6; pile[WZ1]=107; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+6,107,jvj+9)*/
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
