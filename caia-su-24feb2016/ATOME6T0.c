#include "dx.h"
void ATOME6T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V2=0,V3=0;
int R,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20006;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3115&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l8;
x[jvj+4]=vo[16];z[jvj+4]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+4,jvj+5)*/
pile[v[22]]=1182; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+5,jvj+6)*/
if((68!=x[jvj+6])) goto l8;
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+7,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(X,jvj+8)*/
(*f[1160])( );if(v[102]) goto l8;     /*SUP0(X,V2)*/
V2=pile[WZ1]; 
x[jvj+9]=d[20];z[jvj+9]=0;
l1:if((x[jvj+9]<=0)) goto l8;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+10,R,jvj+11)*/
if((x[X]!=x[jvj+11])) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+10,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
(*f[1161])( );if(v[102]) goto l2;     /*INF0(jvj+13,V3)*/
V3=pile[WZ1]; 
if((V2>=V3)) goto l2;
x[jvj+25]=x[jvj+8] ;z[jvj+25]=z[jvj+8];
l3:if((x[jvj+25]<=0)) goto l2;
x[jvj+15]=s[x[jvj+25]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+25];
pile[v[22]]=509; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(509,jvj+15,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[R]) goto l6;
l4:x[jvj+25]=t[x[jvj+25]];
goto l3;
l2:x[jvj+9]=t[x[jvj+9]];
goto l1;
l6:x[jvj+26]=x[jvj+14] ;z[jvj+26]=z[jvj+14];
l5:if((x[jvj+26]<=0)) goto l4;
x[jvj+17]=s[x[jvj+26]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+26];
pile[v[22]]=509; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(509,jvj+17,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[R]) goto l9;
l7:x[jvj+26]=t[x[jvj+26]];
goto l5;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l9:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+24)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V18,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3115; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3115,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20006; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,20006,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+24)*/
(*f[1559])( );     /*CONTRADICTION0(jvj+19)*/
goto l7;
}
