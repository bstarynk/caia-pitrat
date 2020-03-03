#include "dx.h"
void CALDIFF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,K=0,V3=0,V5=0,V6=0,V8=0,V1=0;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=90; 
(*f[1487])( );     /*SORES1(90)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(0,117,jvj+4)*/
x[jvj+1]=vo[14];z[jvj+1]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+1,V10)*/
V10=pile[WZ2]; 
K=0;
l1:if((K>V10)) goto l3;
V3=tu[K];
if((V3<=0)) goto l2;
V5=tt[K];
if(V5!=289&&V5!=44) goto l2;
V6=tm[K];
if((V6<=0)) goto l2;
V8=vbl[V6];
x[jvj+2]=V8 ;z[jvj+2]=(V8<=sepcte) ? V8 : 0;
pile[v[22]]=963; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(963,jvj+2,jvj+3)*/
if((x[jvj+3]!=68)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+4,117,1)*/
l2:K++;
goto l1;
l3:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+4,V1)*/
V1=pile[WZ2]; 
R=V1;
v[0]=jvj; v[22]-=1; pile[v[22]]=R; v[102]=0;return;
l4:v[0]=jvj; v[22]-=1; v[102]=1;return;
}
