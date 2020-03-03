#include "dx.h"
void DECFACTPREM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V5=0,X=0,V7=0;
int N;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[E]=incon;
if((N==0)) goto l1;
x[jvj+5]=0 ;z[jvj+5]=0;
x[E]=x[jvj+5] ;z[E]=z[jvj+5];
l1:V2=abs(N);
pile[v[22]]=V2; pile[WZ1]=jvj+1; 
(*f[992])( );if(v[102]) goto l9;     /*FACTPREM0(V2,jvj+1)*/
if(x[E]!=incon) goto l6;
l8:v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(510,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5!=X)) goto l4;
x[jvj+4]=x[jvj+2] ;z[jvj+4]=z[jvj+2];
l7:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
pile[v[22]]=jvj+3; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,515,1)*/
pile[v[22]]=E; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(E,jvj+3)*/
V7=t[V7];
l5:if((V7<=0)) goto l10;
X=s[V7];
x[jvj+4]=incon;
x[jvj+6]=x[E] ;z[jvj+6]=z[E];
l2:if((x[jvj+6]>0)) goto l3;
pile[v[22]]=510; pile[WZ1]=X; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+4; 
(*f[391])( );     /*QUADRI10(510,X,515,0,jvj+4)*/
goto l7;
l4:x[jvj+6]=t[x[jvj+6]];
goto l2;
l6:V7=x[jvj+1];
goto l5;
l9:if(x[E]!=incon) goto l10;
goto l8;
l10:v[0]=jvj; v[22]-=2; v[102]=0;return;
}
