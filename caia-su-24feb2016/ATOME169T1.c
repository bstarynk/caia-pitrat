#include "dx.h"
void ATOME169T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V24=0,V33=0,V15=0,V41=0,V43=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=20169;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3742&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l13;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,R,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+13,V24)*/
V24=pile[WZ2]; 
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+14,jvj+15)*/
pile[v[22]]=1182; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1182,jvj+15,jvj+16)*/
if((68!=x[jvj+16])) goto l13;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+39]=x[jvj+9] ;z[jvj+39]=z[jvj+9];
l2:if((x[jvj+39]>0)) goto l3;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+3]=s[x[jvj+39]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+39];
if((x[jvj+3]==x[R])) goto l4;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==508) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==508) goto l5;
l4:x[jvj+39]=t[x[jvj+39]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l4;
l9:x[jvj+22]=d[20];z[jvj+22]=0;
l8:if((x[jvj+22]<=0)) goto l7;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+23; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+23,R,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+23,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+26,R,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+27,V15)*/
V15=pile[WZ2]; 
x[jvj+28]=d[20];z[jvj+28]=0;
l11:if((x[jvj+28]<=0)) goto l10;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+29; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+17,jvj+29,V41,jvj+30)*/
V41=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+29,jvj+31)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+31; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+17,jvj+31,V43,jvj+32)*/
V43=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[WZ1]=jvj+17; pile[WZ3]=(-631); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-631),jvj+38)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(605,715,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3741; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3741,246,jvj+36)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20169; pile[WZ4]=jvj+36; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(158,289,218,20169,jvj+36,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+33,159,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+33,159,jvj+38)*/
(*f[481])( );     /*STOCKER0(jvj+33)*/
l12:x[jvj+28]=t[x[jvj+28]];
goto l11;
l10:x[jvj+22]=t[x[jvj+22]];
goto l8;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l6:if((x[jvj+10]<=0)) goto l13;
x[jvj+17]=s[x[jvj+10]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=625)) goto l7;
pile[v[22]]=160; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(160,jvj+17,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+20,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1294,jvj+17,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==1483) goto l9;
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
}
