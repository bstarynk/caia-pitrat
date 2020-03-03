#include "dx.h"
void ATOME6T12(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V16=0,V2=0,V3=0,DX=0,V19=0,DY=0,V20=0;
int R,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=21;
x[jvj+1]=20006;z[jvj+1]=(-100);
x[jvj+2]=12;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3341&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l6;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l6;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+8,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(X,jvj+9)*/
(*f[1160])( );if(v[102]) goto l6;     /*SUP0(X,V2)*/
V2=pile[WZ1]; 
x[jvj+10]=d[20];z[jvj+10]=0;
l1:if((x[jvj+10]<=0)) goto l6;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+11,R,jvj+12)*/
if((x[X]!=x[jvj+12])) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+11,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(jvj+14,jvj+15)*/
(*f[1161])( );if(v[102]) goto l2;     /*INF0(jvj+14,V3)*/
V3=pile[WZ1]; 
if((V2>=V3)) goto l2;
V19=x[jvj+9];
l3:if((V19<=0)) goto l2;
DX=s[V19];
V20=x[jvj+15];
l4:if((V20>0)) goto l5;
V19=t[V19];
goto l3;
l2:x[jvj+10]=t[x[jvj+10]];
goto l1;
l5:DY=s[V20];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+21)*/
pile[v[22]]=V16; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V16,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3341; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3341,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20006; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20006,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
(*f[1559])( );     /*CONTRADICTION0(jvj+16)*/
V20=t[V20];
goto l4;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
