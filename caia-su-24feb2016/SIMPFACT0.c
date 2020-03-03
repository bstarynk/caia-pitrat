#include "dx.h"
void SIMPFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11642;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1153&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RES=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+4)*/
if(x[jvj+4]!=25&&x[jvj+4]!=26&&x[jvj+4]!=29&&x[jvj+4]!=30&&x[jvj+4]!=27&&x[jvj+4]!=28&&x[jvj+4]!=408) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+6)*/
x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1457])( );     /*FACT0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; 
(*f[1457])( );     /*FACT0(jvj+6,jvj+9)*/
x[jvj+24]=x[jvj+8] ;z[jvj+24]=z[jvj+8];
l2:if((x[jvj+24]<=0)) goto l6;
x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l4;
l3:x[jvj+24]=t[x[jvj+24]];
goto l2;
l4:pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+13,jvj+14)*/
x[jvj+10]=x[jvj+14] ;z[jvj+10]=z[jvj+14];
if(x[jvj+23]!=25&&x[jvj+23]!=26&&x[jvj+23]!=408) goto l1;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1446])( );     /*NONUL0(jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l5;
l1:if(x[jvj+23]!=29&&x[jvj+23]!=30&&x[jvj+23]!=27&&x[jvj+23]!=28) goto l3;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; 
(*f[1352])( );     /*POSITIF0(jvj+10,jvj+12)*/
if((x[jvj+12]==135)) goto l5;
goto l3;
l5:pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[1458])( );if(v[102]) goto l3;     /*ENLVFACT0(jvj+7,jvj+10,jvj+15)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+16; 
(*f[1458])( );if(v[102]) goto l3;     /*ENLVFACT0(jvj+6,jvj+10,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+23; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+23,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+18,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+22; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+22,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=RES; 
(*f[799])( );if(v[102]) goto l6;     /*NORME0(jvj+19,RES)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l6:x[RES]=x[R] ;z[RES]=z[R];
goto l7;
}
