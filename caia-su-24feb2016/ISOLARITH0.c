#include "dx.h"
void ISOLARITH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R,D;
int A,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11306;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3720&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; D=pile[v[22]+1]; A=pile[v[22]+2]; B=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l5;
x[jvj+4]=d[20];z[jvj+4]=0;
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+5,R,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[D]) goto l3;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:pile[v[22]]=268; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+5,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
x[jvj+10]=x[jvj+6] ;z[jvj+10]=z[jvj+6];
x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,1,jvj+12)*/
pile[v[22]]=D; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; pile[WZ4]=jvj+13; pile[WZ5]=jvj+14; 
(*f[4025])( );if(v[102]) goto l5;     /*ISOLARITHA0(D,jvj+10,jvj+11,jvj+12,jvj+13,jvj+14)*/
pile[v[22]]=129; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[1157])( );if(v[102]) goto l5;     /*NORME1(129,jvj+13,jvj+15)*/
pile[WZ1]=jvj+14; pile[WZ2]=B; 
(*f[1157])( );if(v[102]) goto l5;     /*NORME1(129,jvj+14,B)*/
x[A]=x[jvj+15] ;z[A]=z[jvj+15];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l5:x[A]=x[B]=incon;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
