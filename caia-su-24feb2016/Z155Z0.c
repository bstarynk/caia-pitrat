#include "dx.h"
void Z155Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int ND=0;
int NNNY;
int NNNX,NNNT;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=15656;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1861&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNY=pile[v[22]]; NNNX=pile[v[22]+1]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1174; pile[WZ1]=NNNY; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1174,NNNY,jvj+2)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=1171)) goto l4;
pile[v[22]]=NNNY; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(NNNY,jvj+5)*/
pile[v[22]]=489; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(489,jvj+5,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(jvj+2,jvj+7)*/
l1:if((x[jvj+6]<=0)) goto l4;
ND=s[x[jvj+6]];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==ND) goto l2;
NNNT=71;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=NNNX; 
(*f[2021])( );     /*REMPLACE0(jvj+2,jvj+8,NNNX)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=NNNT; v[102]=0;return;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[NNNX]=NNNT=incon;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
