#include "dx.h"
void ATOME95T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V22=0,V3=0,V26=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20095;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3337&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=55)) goto l7;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,R,jvj+5)*/
for(i=x[jvj+5],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=2)) goto l7;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+6,V22)*/
V22=pile[WZ2]; 
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l7;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+8,jvj+9)*/
x[jvj+26]=x[jvj+5] ;z[jvj+26]=z[jvj+5];
l3:if((x[jvj+26]<=0)) goto l2;
x[jvj+10]=s[x[jvj+26]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+26];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=26)) goto l4;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+8,jvj+10,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l4;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,jvj+10,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+15,jvj+16)*/
if(x[jvj+16]!=96&&x[jvj+16]!=89&&x[jvj+16]!=41&&x[jvj+16]!=20&&x[jvj+16]!=128&&x[jvj+16]!=570&&x[jvj+16]!=1317) goto l4;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+13,jvj+17)*/
x[jvj+19]=x[jvj+17] ;z[jvj+19]=z[jvj+17];
V26=x[jvj+5];
l5:if((V26<=0)) goto l4;
V3=s[V26];
if((x[jvj+10]==V3)) goto l6;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+24)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V22,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3337; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3337,246,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=20095; pile[WZ2]=218; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,20095,218,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=(-20); pile[WZ2]=jvj+23; pile[WZ3]=159; pile[WZ4]=jvj+25; 
(*f[298])( );     /*TRIENS1(jvj+24,(-20),jvj+23,159,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+25,1,158,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=1289; pile[WZ2]=jvj+19; 
(*f[1047])( );     /*EVENEMENT0(jvj+18,1289,jvj+19)*/
l6:V26=t[V26];
goto l5;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l4:x[jvj+26]=t[x[jvj+26]];
goto l3;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
