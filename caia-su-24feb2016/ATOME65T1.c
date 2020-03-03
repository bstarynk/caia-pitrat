#include "dx.h"
void ATOME65T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V49=0,V10=0,V21=0,V32=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=20065;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3086&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+12)*/
for(i=x[jvj+12],V10=0;i>0;i=t[i],V10++)  ;
if((V10!=2)) goto l13;
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+13,jvj+14)*/
pile[v[22]]=1182; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1182,jvj+14,jvj+15)*/
if((68!=x[jvj+15])) goto l13;
pile[v[22]]=242; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(242,jvj+13,jvj+16)*/
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=498; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,D,jvj+3)*/
pile[v[22]]=480; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(480,jvj+3,jvj+4)*/
l1:if((x[jvj+4]<=0)) goto l5;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=509; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(509,jvj+5,jvj+6)*/
x[jvj+42]=x[jvj+6] ;z[jvj+42]=z[jvj+6];
l2:if((x[jvj+42]>0)) goto l3;
x[jvj+4]=t[x[jvj+4]];
goto l1;
l3:x[jvj+7]=s[x[jvj+42]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+42];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l4;
pile[v[22]]=870; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(870,jvj+7,V49)*/
V49=pile[WZ2]; 
if((V49!=2)) goto l4;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+10; 
(*f[887])( );     /*VARND0(jvj+7,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[D]) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+7)*/
l4:x[jvj+42]=t[x[jvj+42]];
goto l2;
l6:x[jvj+11]=t[x[jvj+11]];
l5:if((x[jvj+11]<=0)) goto l13;
x[jvj+17]=s[x[jvj+11]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+11];
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=25)) goto l6;
x[jvj+20]=d[20];z[jvj+20]=0;
l7:if((x[jvj+20]<=0)) goto l6;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=268; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+21,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+22,jvj+17,jvj+23)*/
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
for(i=x[jvj+26],V21=0;i>0;i=t[i],V21++)  ;
if((V21!=2)) goto l8;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+17; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+21,jvj+17,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+29,jvj+30)*/
if(x[jvj+30]!=96&&x[jvj+30]!=89&&x[jvj+30]!=41&&x[jvj+30]!=20&&x[jvj+30]!=128&&x[jvj+30]!=570&&x[jvj+30]!=1317) goto l8;
x[jvj+43]=x[jvj+26] ;z[jvj+43]=z[jvj+26];
l9:if((x[jvj+43]<=0)) goto l8;
x[jvj+31]=s[x[jvj+43]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+43];
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+31,jvj+32)*/
if((x[jvj+32]!=484)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+31,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+33,jvj+34)*/
if(x[jvj+34]!=96&&x[jvj+34]!=89&&x[jvj+34]!=41&&x[jvj+34]!=20&&x[jvj+34]!=128&&x[jvj+34]!=570&&x[jvj+34]!=1317) goto l10;
x[jvj+44]=x[jvj+26] ;z[jvj+44]=z[jvj+26];
l11:if((x[jvj+44]<=0)) goto l10;
x[jvj+35]=s[x[jvj+44]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+44];
if((x[jvj+31]==x[jvj+35])) goto l12;
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+35,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(101,jvj+17,110,(-601),jvj+40)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+41)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(206,715,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+38; 
(*f[189])( );     /*TRI4(jvj+37,v[13],642,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=3085; pile[WZ2]=246; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,3085,246,jvj+39)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20065; pile[WZ4]=jvj+39; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(158,289,218,20065,jvj+39,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=159; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+40)*/
pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+36,159,jvj+41)*/
(*f[481])( );     /*STOCKER0(jvj+36)*/
l12:x[jvj+44]=t[x[jvj+44]];
goto l11;
l8:x[jvj+20]=t[x[jvj+20]];
goto l7;
l10:x[jvj+43]=t[x[jvj+43]];
goto l9;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
