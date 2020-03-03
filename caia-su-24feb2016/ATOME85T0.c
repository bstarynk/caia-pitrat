#include "dx.h"
void ATOME85T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V16=0;
int R,X,DX;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20085;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3107&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; DX=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l4;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,R,V5)*/
V5=pile[WZ2]; 
if((V5<=2)) goto l4;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l4;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[DX]) goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+8,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=DX; pile[WZ1]=X; pile[WZ2]=jvj+9; 
(*f[3108])( );if(v[102]) goto l4;     /*SUPG0(DX,X,jvj+9)*/
x[jvj+10]=d[20];z[jvj+10]=0;
l2:if((x[jvj+10]<=0)) goto l4;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+11,R,jvj+12)*/
if((x[X]!=x[jvj+12])) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+11,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=DX; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[3109])( );if(v[102]) goto l3;     /*INFG0(DX,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+22)*/
pile[WZ1]=DX; pile[WZ3]=(-637); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,DX,110,(-637),jvj+23)*/
pile[v[22]]=V16; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V16,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3107; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3107,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20085; pile[WZ4]=jvj+20; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20085,jvj+20,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,jvj+15,103,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+26; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+26,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+16; 
(*f[1296])( );     /*NOUVCONTR0(jvj+17,jvj+16)*/
l3:x[jvj+10]=t[x[jvj+10]];
goto l2;
}
