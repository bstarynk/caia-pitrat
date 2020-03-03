#include "dx.h"
void DOMINOSA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V5=0,V4=0,V7=0,V6=0,R=0,V16=0,V15=0,V22=0,V21=0,V24=0,V23=0,X=0,D=0,Y=0,V18=0,V17=0,V28=0,V32=0,V30=0,V33=0,V31=0,V29=0,V26=0,V27=0,V25=0;
int I,M,N;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=26254;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2986&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; M=pile[v[22]+1]; N=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=0 ;z[jvj+4]=0;
V16=M-1;
V15=V16*N;
if((I<V15)) goto l8;
V22=I-1;
V21=V22%M;
V24=I-V15;
V23=V24/M;
X=V21;
D=1;
Y=V23;
l1:x[jvj+2]=incon;
if((D==0)) goto l2;
pile[v[22]]=159; pile[WZ1]=1560; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,1560,jvj+2)*/
l3:if((x[jvj+2]>0)) goto l4;
x[NNNE]=x[jvj+4] ;z[NNNE]=z[jvj+4];
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:pile[v[22]]=763; pile[WZ1]=1560; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,1560,jvj+2)*/
goto l3;
l4:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=609; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(609,jvj+3,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+3,V5)*/
V5=pile[WZ2]; 
V4=X+V5;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(515,jvj+3,V7)*/
V7=pile[WZ2]; 
V6=Y+V7;
if((V8==0)) goto l9;
if((V8<=0)) goto l5;
if((V4>=M)) goto l5;
if((V4<0)) goto l5;
if((V6<0)) goto l5;
V28=N-1;
if((V6>=V28)) goto l5;
V32=M-1;
V30=V32*N;
V33=V6*M;
V31=V4+V33;
V29=V30+V31;
R=V29;
l6:pile[v[22]]=jvj+4; pile[WZ1]=R; 
(*f[207])( );     /*PLUE2(jvj+4,R)*/
l5:x[jvj+2]=t[x[jvj+2]];
goto l3;
l8:V17=I%V16;
V18=I/V16;
X=V17;
D=0;
Y=V18;
goto l1;
l9:if((V6>=N)) goto l5;
if((V4<0)) goto l5;
if((V6<0)) goto l5;
V25=M-1;
if((V4>=V25)) goto l5;
V27=V6*V25;
V26=V4+V27;
R=V26;
goto l6;
}
