#include "dx.h"
void ATOME141T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20141;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3736&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l10;
pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1188,R,jvj+3)*/
if((x[jvj+3]==68)) goto l10;
l7:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+14)*/
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+15)*/
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
l1:if((x[jvj+8]>0)) goto l2;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1294,R,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==1327) goto l8;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=509; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(509,jvj+9,jvj+10)*/
x[jvj+28]=x[jvj+10] ;z[jvj+28]=z[jvj+10];
l3:if((x[jvj+28]>0)) goto l4;
x[jvj+8]=t[x[jvj+8]];
goto l1;
l4:x[jvj+4]=s[x[jvj+28]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+28];
if((x[jvj+4]==x[R])) goto l5;
pile[v[22]]=1417; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1417,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==424) goto l6;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1545,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==424) goto l6;
l5:x[jvj+28]=t[x[jvj+28]];
goto l3;
l6:pile[v[22]]=jvj+11; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+4)*/
goto l5;
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[WZ1]=jvj+17; pile[WZ3]=(-631); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-631),jvj+27)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(605,715,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3730; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3730,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20141; pile[WZ4]=jvj+25; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(158,289,218,20141,jvj+25,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=159; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+22,159,jvj+27)*/
(*f[481])( );     /*STOCKER0(jvj+22)*/
l9:x[jvj+11]=t[x[jvj+11]];
l8:if((x[jvj+11]<=0)) goto l10;
x[jvj+17]=s[x[jvj+11]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+11];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=55)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+20)*/
pile[v[22]]=1294; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1294,jvj+17,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==1311) goto l11;
goto l9;
}
