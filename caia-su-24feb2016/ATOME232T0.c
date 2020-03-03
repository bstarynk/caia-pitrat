#include "dx.h"
void ATOME232T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V12=0,V16=0,V8=0,V22=0,V15=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20232;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3697&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=55)) goto l10;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,RR,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,R,jvj+12)*/
for(i=x[jvj+12],V16=0;i>0;i=t[i],V16++)  ;
pile[v[22]]=1232; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1232,R,jvj+13)*/
for(i=x[jvj+13],V8=0;i>0;i=t[i],V8++)  ;
if((V8<=1)) goto l10;
if((V12>V8)) goto l10;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+14,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=RR; pile[WZ2]=jvj+3; 
(*f[1969])( );     /*FNDEND0(509,RR,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+6]=0 ;z[jvj+6]=0;
l4:if((x[jvj+12]>0)) goto l5;
for(i=x[jvj+6],V15=0;i>0;i=t[i],V15++)  ;
if((V15>=V16)) goto l10;
x[jvj+9]=0 ;z[jvj+9]=0;
l8:if((x[jvj+6]>0)) goto l9;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+22)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V22,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3697; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3697,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20232; pile[WZ4]=jvj+19; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(158,1,218,20232,jvj+19,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+25; 
(*f[301])( );     /*TRI11(jvj+24,jvj+9,107,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+25,22,100,jvj+16)*/
pile[v[22]]=R; pile[WZ1]=jvj+16; pile[WZ2]=jvj+15; 
(*f[1558])( );     /*RESTAURE0(R,jvj+16,jvj+15)*/
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:V=s[x[jvj+3]];
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V) goto l3;
goto l10;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=RR; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[3698])( );if(v[102]) goto l7;     /*EVLM4(RR,jvj+4,jvj+5)*/
if((x[jvj+5]==134)) goto l6;
l7:pile[v[22]]=jvj+6; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+4)*/
l6:x[jvj+12]=t[x[jvj+12]];
goto l4;
l9:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+6]=t[x[jvj+6]];
goto l8;
}
