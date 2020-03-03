#include "dx.h"
void IMPER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V18=0,V17=0,V21=0,V20=0,GG=0,V26=0,V23=0,HH=0,V27=0,V25=0,V24=0,V30=0,V29=0,V28=0,V13=0,XX=0,YY=0,K=0,V10=0,V9=0,V12=0,V11=0,V16=0,V15=0,V14=0;
int I,N;
int NNNE;
int WZ1;
int jvj;
jvj=v[0];
v[0]+=2;
x[jvj+1]=26014;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2251&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
V19=I-1;
V18=V19/N;
V17=V18+1;
V21=V19%N;
V20=V21+1;
GG=(-2);
l3:V26=abs(GG);
V23=V20+GG;
if((V23<=0)) goto l2;
if((V23>N)) goto l2;
HH=(-2);
l5:V27=abs(HH);
V25=V26+V27;
if((V25!=3)) goto l4;
V24=V17+HH;
if((V24<=0)) goto l4;
if((V24>N)) goto l4;
V30=V24-1;
V29=N*V30;
V28=V23+V29;
pile[v[22]]=jvj+2; pile[WZ1]=V28; 
(*f[207])( );     /*PLUE2(jvj+2,V28)*/
l4:HH++;
if((HH<=2)) goto l5;
l2:GG++;
if((GG<=2)) goto l3;
V13=N-1;
XX=(-1);
l6:YY=(-1);
l1:if((XX!=0)) goto l9;
if((YY==0)) goto l7;
l9:K=1;
l8:if((K>V13)) goto l7;
V10=K*XX;
V9=V20+V10;
if((V9<=0)) goto l10;
if((V9>N)) goto l10;
V12=K*YY;
V11=V17+V12;
if((V11<=0)) goto l10;
if((V11>N)) goto l10;
V16=V11-1;
V15=N*V16;
V14=V9+V15;
pile[v[22]]=jvj+2; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+2,V14)*/
l10:K++;
goto l8;
l7:YY++;
if((YY<=1)) goto l1;
XX++;
if((XX<=1)) goto l6;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
}
