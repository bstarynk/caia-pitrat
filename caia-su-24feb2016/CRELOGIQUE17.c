#include "dx.h"
void CRELOGIQUE17(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V5=0,V4=0,V13=0,V11=0,V15=0,V14=0,V6=0,V8=0,V7=0,V9=0,V10=0,V16=0,V18=0,V17=0;
int I,J;
int NNNX;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=1;
x[jvj+1]=26136;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2580&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; J=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((J==2)) goto l4;
if((J==3)) goto l5;
if((J==5)) goto l6;
if((J==1)) goto l1;
if((J!=4)) goto l9;
V11=incon;
pile[v[22]]=I; pile[WZ1]=(-8198); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(I,(-8198),V13)*/
V13=pile[WZ2]; 
if((V13==0)) goto l3;
V15=64+V13;
V14=V15;
V11=V14;
l8:NNNX=V11;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNX; v[102]=0;return;
l1:V1=incon;
pile[v[22]]=I; pile[WZ1]=(-8197); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(I,(-8197),V3)*/
V3=pile[WZ2]; 
if((V3==0)) goto l2;
V5=64+V3;
V4=V5;
V1=V4;
l7:NNNX=V1;
goto l10;
l2:V1=32;
goto l7;
l3:V11=32;
goto l8;
l4:pile[v[22]]=I; pile[WZ1]=(-2730); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(I,(-2730),V6)*/
V6=pile[WZ2]; 
V8=48+V6;
V7=V8;
NNNX=V7;
goto l10;
l5:pile[v[22]]=I; pile[WZ1]=(-632); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(I,(-632),V9)*/
V9=pile[WZ2]; 
V10=V9;
NNNX=V10;
goto l10;
l6:pile[v[22]]=I; pile[WZ1]=(-2889); 
(*f[1010])( );if(v[102]) goto l9;     /*FVECT0(I,(-2889),V16)*/
V16=pile[WZ2]; 
V18=48+V16;
V17=V18;
NNNX=V17;
goto l10;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
