#include "dx.h"
void ATOME39T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V1=0,V15=0,V12=0,V13=0,V20=0;
int R,DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20039;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3076&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; DD=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,R,V12)*/
V12=pile[WZ2]; 
if((V12!=2)) goto l15;
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+11; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+11)*/
if((x[jvj+11]!=0)) goto l15;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1274,R,V15)*/
V15=pile[WZ2]; 
if((V15!=0)) goto l15;
l7:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(868,R,jvj+12)*/
if((x[jvj+12]==55)) goto l15;
pile[v[22]]=498; pile[WZ1]=DD; pile[WZ2]=jvj+2; 
(*f[1948])( );if(v[102]) goto l15;     /*FNDOND0(498,DD,jvj+2)*/
pile[v[22]]=473; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l15;     /*FNDCND0(473,jvj+2,V13)*/
V13=pile[WZ2]; 
if((V13!=1)) goto l15;
pile[v[22]]=509; pile[WZ1]=DD; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(509,DD,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[R]) goto l8;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l3:x[jvj+6]=s[x[jvj+24]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+24];
if((x[jvj+5]!=x[jvj+6])) goto l1;
pile[v[22]]=921; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(921,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[DD]) goto l4;
pile[v[22]]=688; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V6==1)) goto l4;
l1:pile[v[22]]=R; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; pile[WZ3]=DD; pile[WZ4]=jvj+6; 
(*f[3077])( );if(v[102]) goto l14;     /*EVLM1(R,jvj+3,jvj+5,DD,jvj+6,V1)*/
V1=pile[WZ5]; 
if((V1==134)) goto l4;
l14:x[jvj+25]=t[x[jvj+25]];
l13:if((x[jvj+25]<=0)) goto l11;
x[jvj+5]=s[x[jvj+25]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+25];
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+7; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+7)*/
x[jvj+24]=x[jvj+7] ;z[jvj+24]=z[jvj+7];
l2:if((x[jvj+24]>0)) goto l3;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+23)*/
pile[v[22]]=V20; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V20,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3076; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3076,246,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20039; pile[WZ4]=jvj+21; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20039,jvj+21,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+23)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; pile[WZ3]=jvj+18; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+5,jvj+18)*/
goto l14;
l4:x[jvj+24]=t[x[jvj+24]];
goto l2;
l8:pile[v[22]]=R; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(R,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==x[DD]) goto l9;
goto l15;
l9:x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(642,jvj+15,V20)*/
V20=pile[WZ2]; 
x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
l5:if((x[jvj+8]<=0)) goto l10;
x[jvj+10]=s[x[jvj+8]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+8];
if((x[jvj+10]==x[DD])) goto l6;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+10)*/
l6:x[jvj+8]=t[x[jvj+8]];
goto l5;
l12:pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+17)*/
x[jvj+25]=x[jvj+17] ;z[jvj+25]=z[jvj+17];
goto l13;
l10:if((x[jvj+9]<=0)) goto l15;
x[jvj+3]=s[x[jvj+9]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+9];
pile[v[22]]=509; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(509,jvj+3,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[R]) goto l12;
l11:x[jvj+9]=t[x[jvj+9]];
goto l10;
}
