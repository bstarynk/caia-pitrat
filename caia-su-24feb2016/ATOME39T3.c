#include "dx.h"
void ATOME39T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V7=0,V9=0,V3=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=20039;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3134&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,R,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l10;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1274,R,V5)*/
V5=pile[WZ2]; 
if((V5!=0)) goto l10;
l6:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(868,R,jvj+3)*/
if((x[jvj+3]==55)) goto l10;
pile[v[22]]=R; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(R,jvj+4)*/
l7:if((x[jvj+4]<=0)) goto l10;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=489; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(489,jvj+5,jvj+6)*/
if((x[jvj+6]!=0)) goto l8;
pile[v[22]]=498; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l8;     /*FNDOND0(498,jvj+5,jvj+7)*/
pile[v[22]]=473; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l8;     /*FNDCND0(473,jvj+7,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l8;
pile[v[22]]=509; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(509,jvj+5,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[R]) goto l9;
l8:x[jvj+4]=t[x[jvj+4]];
goto l7;
l1:x[jvj+11]=602 ;z[jvj+11]=602;
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+15)*/
pile[WZ1]=jvj+5; pile[WZ3]=(-2829); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,jvj+5,110,(-2829),jvj+16)*/
pile[v[22]]=jvj+11; pile[WZ1]=715; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,715,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3076; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3076,246,jvj+14)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20039; pile[WZ4]=jvj+14; pile[WZ5]=jvj+10; 
(*f[269])( );     /*QUADRI6(158,289,218,20039,jvj+14,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+10,159,jvj+16)*/
(*f[481])( );     /*STOCKER0(jvj+10)*/
goto l8;
l2:x[jvj+11]=603 ;z[jvj+11]=603;
goto l11;
l3:x[jvj+11]=206 ;z[jvj+11]=206;
goto l11;
l4:x[jvj+11]=604 ;z[jvj+11]=604;
goto l11;
l5:x[jvj+11]=605 ;z[jvj+11]=605;
goto l11;
l9:pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+9)*/
for(i=x[jvj+9],V3=0;i>0;i=t[i],V3++)  ;
x[jvj+11]=incon;
if((V3<=3)) goto l1;
if((V3<=5)) goto l2;
if((V3<=9)) goto l3;
if((V3<=15)) goto l4;
if((V3<=25)) goto l5;
x[jvj+11]=606 ;z[jvj+11]=606;
goto l11;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
