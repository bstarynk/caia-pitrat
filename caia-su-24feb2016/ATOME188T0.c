#include "dx.h"
void ATOME188T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V9=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20188;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3420&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+2,jvj+3)*/
pile[v[22]]=1182; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+3,jvj+4)*/
if((68!=x[jvj+4])) goto l7;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+5,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+6)*/
l1:if((x[jvj+6]<=0)) goto l7;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l2;
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(870,jvj+7,V9)*/
V9=pile[WZ2]; 
if((V9<=2)) goto l2;
if((V9>=8)) goto l2;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+7,jvj+10)*/
x[jvj+29]=x[jvj+10] ;z[jvj+29]=z[jvj+10];
l3:if((x[jvj+29]<=0)) goto l2;
x[jvj+14]=s[x[jvj+29]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+29];
if((x[jvj+14]==x[D])) goto l4;
x[jvj+11]=d[20];z[jvj+11]=0;
l5:if((x[jvj+11]<=0)) goto l4;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+12,jvj+7,jvj+13)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[3108])( );if(v[102]) goto l6;     /*SUPG0(jvj+14,jvj+13,jvj+15)*/
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+7; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+16,jvj+7,jvj+17)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[3109])( );if(v[102]) goto l6;     /*INFG0(jvj+14,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-601),jvj+24)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+25)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V17,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3420; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3420,246,jvj+23)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20188; pile[WZ4]=jvj+23; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(158,1,218,20188,jvj+23,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=28; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,28,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+18,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+28; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+28,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+19; 
(*f[1296])( );     /*NOUVCONTR0(jvj+20,jvj+19)*/
l6:x[jvj+11]=t[x[jvj+11]];
goto l5;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+29]=t[x[jvj+29]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
