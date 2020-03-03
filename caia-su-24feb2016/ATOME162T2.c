#include "dx.h"
void ATOME162T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V7=0,V5=0,M=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20162;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3646&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,R,V7)*/
V7=pile[WZ2]; 
if((V7!=1)) goto l6;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1353,jvj+6,jvj+7)*/
if((x[jvj+7]!=68)) goto l6;
pile[v[22]]=498; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+6,jvj+8)*/
pile[v[22]]=1182; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+8,jvj+9)*/
if((68!=x[jvj+9])) goto l6;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1294,R,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==1483) goto l4;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=280; pile[WZ1]=jvj+4; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(280,jvj+4,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+4)*/
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:if((x[jvj+5]<=0)) goto l6;
x[jvj+11]=s[x[jvj+5]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+5];
pile[v[22]]=280; pile[WZ1]=jvj+11; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(280,jvj+11,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+11,jvj+12)*/
M=V5;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=R; pile[WZ3]=jvj+14; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+12,jvj+13,R,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[WZ1]=jvj+11; pile[WZ3]=(-656); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,jvj+11,110,(-656),jvj+20)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(206,715,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3520; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3520,246,jvj+18)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20162; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(158,289,218,20162,jvj+18,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+20)*/
(*f[481])( );     /*STOCKER0(jvj+15)*/
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
}
