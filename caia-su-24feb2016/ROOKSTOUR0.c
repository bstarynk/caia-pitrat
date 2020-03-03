#include "dx.h"
void ROOKSTOUR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0,V7=0,XX=0,V8=0,YY=0,V9=0,V11=0,V10=0,V4=0,Q=0;
int I,N;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26090;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2359&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=I; pile[WZ1]=(-591); 
(*f[201])( );if(v[102]) goto l6;     /*FCOEFF0(I,(-591),V2)*/
V2=pile[WZ2]; 
V6=V2/N;
V7=V2%N;
XX=(-1);
l2:V8=V7+XX;
if((V8<0)) goto l1;
if((V8>=N)) goto l1;
YY=(-1);
l4:if((XX==YY)) goto l3;
if((XX==0)) goto l5;
if((YY==0)) goto l5;
l3:YY++;
if((YY<=1)) goto l4;
l1:XX++;
if((XX<=1)) goto l2;
l6:x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l5:V9=V6+YY;
if((V9<0)) goto l3;
if((V9>=N)) goto l3;
V11=N*V9;
V10=V8+V11;
pile[v[22]]=V10; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l3;     /*FCOEFF0(V10,(-598),V4)*/
V4=pile[WZ2]; 
Q=V4;
if((Q<=0)) goto l3;
pile[v[22]]=jvj+2; pile[WZ1]=Q; 
(*f[207])( );     /*PLUE2(jvj+2,Q)*/
goto l3;
}
