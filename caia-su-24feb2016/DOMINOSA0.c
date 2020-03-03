#include "dx.h"
void DOMINOSA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V2=0,V9=0,V8=0,V7=0,V5=0,V4=0,V3=0,V16=0,V15=0,V22=0,V21=0,V24=0,V23=0,X=0,D=0,Y=0,V18=0,V17=0,V25=0,V26=0,V28=0,V29=0,V32=0,V34=0,V33=0,V30=0;
int I,M,N;
int NNNE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=26254;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2985&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; M=pile[v[22]+1]; N=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V16=M-1;
V15=V16*N;
if((I<V15)) goto l6;
V22=I-1;
V21=V22%M;
V24=I-V15;
V23=V24/M;
X=V21;
D=1;
Y=V23;
l2:V8=Y*M;
V7=X+V8;
V2=incon;
if((D==0)) goto l1;
V9=V7+M;
V2=V9;
l3:pile[v[22]]=V7; pile[WZ1]=(-598); 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(V7,(-598),V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V2; 
(*f[201])( );if(v[102]) goto l4;     /*FCOEFF0(V2,(-598),V4)*/
V4=pile[WZ2]; 
if((V5>V4)) goto l10;
V25=V5;
V26=V4;
l7:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
V28=V25-1;
V29=0;
l8:if((V29<=V28)) goto l9;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+3,V32)*/
V32=pile[WZ2]; 
V34=V26-V25;
V33=V34+V32;
V3=V33;
pile[v[22]]=jvj+2; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+2,V3)*/
l4:x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l1:V10=V7+1;
V2=V10;
goto l3;
l6:V17=I%V16;
V18=I/V16;
X=V17;
D=0;
Y=V18;
goto l2;
l9:V30=N-V29;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V30; 
(*f[186])( );     /*BTC0(jvj+3,117,V30)*/
V29++;
goto l8;
l10:V25=V4;
V26=V5;
goto l7;
}
