#include "dx.h"
void ATOME86T11(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20086;z[jvj+1]=(-100);
x[jvj+2]=11;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3418&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+13,jvj+14)*/
pile[v[22]]=1182; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+14,jvj+15)*/
if((68!=x[jvj+15])) goto l8;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l5;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==258) goto l3;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==258) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l6:x[jvj+8]=t[x[jvj+8]];
l5:if((x[jvj+8]<=0)) goto l8;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=30)) goto l6;
pile[v[22]]=869; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(869,jvj+9,jvj+18)*/
if((x[jvj+18]!=769)) goto l6;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,jvj+9,V4)*/
V4=pile[WZ2]; 
if((V4<4)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+9,jvj+19)*/
pile[v[22]]=103; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+9,jvj+20)*/
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+9,jvj+10)*/
x[jvj+28]=x[jvj+10] ;z[jvj+28]=z[jvj+10];
l4:if((x[jvj+28]<=0)) goto l7;
x[jvj+12]=s[x[jvj+28]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+28];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
x[jvj+28]=t[x[jvj+28]];
goto l4;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l7:if((x[jvj+11]<=0)) goto l6;
x[jvj+27]=s[x[jvj+11]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+11];
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,jvj+9,110,(-601),jvj+25)*/
pile[WZ1]=jvj+27; pile[WZ3]=(-637); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,jvj+27,110,(-637),jvj+26)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(206,715,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3367; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3367,246,jvj+24)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20086; pile[WZ4]=jvj+24; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,289,218,20086,jvj+24,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=159; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+21,159,jvj+26)*/
(*f[481])( );     /*STOCKER0(jvj+21)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
}
