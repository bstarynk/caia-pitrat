#include "dx.h"
void ATOME33T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V1=0,L=0,V23=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=20033;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3326&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,R,jvj+6)*/
if((x[jvj+6]!=22)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+7,L)*/
L=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]!=25&&x[jvj+9]!=27&&x[jvj+9]!=28) goto l6;
V1=incon;
if((x[jvj+9]!=27)) goto l1;
V21=L-1;
V1=V21;
l1:if(x[jvj+9]==25||x[jvj+9]==28) goto l2;
if(V1==incon) goto l6;
l4:if((V1==(-99999998))) goto l6;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+10,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+12,jvj+13)*/
if(x[jvj+13]!=96&&x[jvj+13]!=89&&x[jvj+13]!=41&&x[jvj+13]!=20&&x[jvj+13]!=128&&x[jvj+13]!=570&&x[jvj+13]!=1317) goto l6;
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+14,jvj+15)*/
pile[v[22]]=1182; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+15,jvj+16)*/
if((68!=x[jvj+16])) goto l6;
x[jvj+17]=vo[14];z[jvj+17]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+17,V23)*/
V23=pile[WZ2]; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l3:if((x[jvj+3]<=0)) goto l5;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l3;
l2:V1=L;
goto l4;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l5:if((x[jvj+4]<=0)) goto l6;
x[jvj+19]=s[x[jvj+4]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+4];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[WZ1]=jvj+19; pile[WZ3]=(-656); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,jvj+19,110,(-656),jvj+24)*/
pile[v[22]]=V23; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V23,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3326; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3326,246,jvj+22)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20033; pile[WZ4]=jvj+22; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20033,jvj+22,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+24)*/
pile[WZ1]=164; pile[WZ2]=jvj+19; pile[WZ3]=V1; 
(*f[2056])( );     /*VAUT0(jvj+18,164,jvj+19,V1)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
}
