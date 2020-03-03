#include "dx.h"
void ATOME85T11(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V22=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20085;z[jvj+1]=(-100);
x[jvj+2]=11;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3416&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+13,jvj+14)*/
pile[v[22]]=1182; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1182,jvj+14,jvj+15)*/
if((68!=x[jvj+15])) goto l13;
x[jvj+8]=0 ;z[jvj+8]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==255) goto l3;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==255) goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+3)*/
goto l2;
l5:x[jvj+12]=s[x[jvj+32]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+32];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
x[jvj+32]=t[x[jvj+32]];
l4:if((x[jvj+32]>0)) goto l5;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+18; 
(*f[887])( );     /*VARND0(jvj+9,jvj+18)*/
l8:if((x[jvj+11]<=0)) goto l7;
x[jvj+31]=s[x[jvj+11]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+11];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+31]) goto l11;
l9:x[jvj+11]=t[x[jvj+11]];
goto l8;
l7:x[jvj+8]=t[x[jvj+8]];
l6:if((x[jvj+8]<=0)) goto l13;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+9,V6)*/
V6=pile[WZ2]; 
if((V6<=2)) goto l7;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+9,jvj+10)*/
x[jvj+32]=x[jvj+10] ;z[jvj+32]=z[jvj+10];
goto l4;
l11:x[jvj+19]=d[20];z[jvj+19]=0;
l10:if((x[jvj+19]<=0)) goto l9;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=268; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+20,jvj+21)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+21; pile[WZ3]=jvj+22; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+9,jvj+21,V22,jvj+22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=jvj+9; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+20,jvj+9,jvj+23)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,jvj+9,110,(-601),jvj+28)*/
pile[WZ1]=jvj+23; pile[WZ3]=(-596); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,jvj+23,110,(-596),jvj+29)*/
pile[WZ1]=jvj+31; pile[WZ3]=(-637); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(101,jvj+31,110,(-637),jvj+30)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(206,715,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3365; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3365,246,jvj+27)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20085; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,289,218,20085,jvj+27,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+30)*/
(*f[481])( );     /*STOCKER0(jvj+24)*/
l12:x[jvj+19]=t[x[jvj+19]];
goto l10;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
