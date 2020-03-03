#include "dx.h"
void ATOME581T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V20=0,V3=0,V23=0,V4=0,V5=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20581;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3835&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,NNNI,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=25)) goto l7;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+2,V23)*/
V23=pile[WZ2]; 
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V20; 
(*f[207])( );     /*PLUE2(jvj+3,V20)*/
l1:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
x[jvj+7]=d[20];z[jvj+7]=0;
l4:if((x[jvj+7]<=0)) goto l7;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=NNNI; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+8,NNNI,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=1215)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V4=0;i>0;i=t[i],V4++)  ;
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(268,jvj+8,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+14,V5)*/
V5=pile[WZ2]; 
if((V4!=V5)) goto l5;
x[jvj+23]=x[jvj+12] ;z[jvj+23]=z[jvj+12];
l6:if((x[jvj+23]<=0)) goto l5;
x[jvj+15]=s[x[jvj+23]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+23];
pile[v[22]]=jvj+15; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+15,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+21)*/
pile[v[22]]=V23; pile[WZ1]=858; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(V23,858,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3835; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3835,246,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=20581; pile[WZ2]=218; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+19,20581,218,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=jvj+20; pile[WZ3]=159; pile[WZ4]=jvj+22; 
(*f[298])( );     /*TRIENS1(jvj+21,(-20),jvj+20,159,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+22,1,158,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[1296])( );     /*NOUVCONTR0(jvj+15,jvj+16)*/
x[jvj+23]=t[x[jvj+23]];
goto l6;
l3:V3=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+3,V3)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+7]=t[x[jvj+7]];
goto l4;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
