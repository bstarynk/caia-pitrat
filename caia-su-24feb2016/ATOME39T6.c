#include "dx.h"
void ATOME39T6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V1=0,V14=0,V11=0,V12=0,V17=0;
int R,DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20039;z[jvj+1]=(-100);
x[jvj+2]=6;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3310&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; DD=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l12;
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+12)*/
if((x[jvj+12]!=0)) goto l12;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1274,R,V14)*/
V14=pile[WZ2]; 
if((V14!=0)) goto l12;
l7:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(868,R,jvj+13)*/
if((x[jvj+13]==55)) goto l12;
pile[v[22]]=498; pile[WZ1]=DD; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,DD,jvj+3)*/
pile[v[22]]=473; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(473,jvj+3,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l12;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+14,V17)*/
V17=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
l5:if((x[jvj+9]<=0)) goto l8;
x[jvj+11]=s[x[jvj+9]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+9];
if((x[jvj+11]==x[DD])) goto l6;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+11)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l3:x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
if((x[jvj+6]!=x[jvj+7])) goto l1;
pile[v[22]]=921; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(921,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[DD]) goto l4;
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+3,V5)*/
V5=pile[WZ2]; 
if((V5==1)) goto l4;
l1:pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; pile[WZ3]=DD; pile[WZ4]=jvj+7; 
(*f[3077])( );if(v[102]) goto l11;     /*EVLM1(R,jvj+4,jvj+6,DD,jvj+7,V1)*/
V1=pile[WZ5]; 
if((V1==134)) goto l4;
l11:x[jvj+23]=t[x[jvj+23]];
l9:if((x[jvj+23]>0)) goto l10;
x[jvj+10]=t[x[jvj+10]];
l8:if((x[jvj+10]<=0)) goto l12;
x[jvj+4]=s[x[jvj+10]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+10];
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(365,jvj+4,jvj+15)*/
x[jvj+23]=x[jvj+15] ;z[jvj+23]=z[jvj+15];
goto l9;
l4:x[jvj+22]=t[x[jvj+22]];
l2:if((x[jvj+22]>0)) goto l3;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+21)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V17,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3310; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3310,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20039; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20039,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
pile[v[22]]=365; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; pile[WZ3]=jvj+16; 
(*f[1569])( );     /*DELIER0(365,jvj+4,jvj+6,jvj+16)*/
goto l11;
l10:x[jvj+6]=s[x[jvj+23]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+23];
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+8)*/
x[jvj+22]=x[jvj+8] ;z[jvj+22]=z[jvj+8];
goto l2;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
