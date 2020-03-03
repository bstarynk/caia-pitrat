#include "dx.h"
void CHERSAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V5=0;
int X,XP,CT,G;
int P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=11058;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1436&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; XP=pile[v[22]+1]; CT=pile[v[22]+2]; G=pile[v[22]+3]; P=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[P]=incon;
if((x[G]!=68)) goto l10;
pile[v[22]]=X; pile[WZ1]=CT; pile[WZ3]=jvj+2; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(X,CT,V9,jvj+2)*/
V9=pile[WZ2]; 
x[jvj+4]=V9 ;z[jvj+4]=(x[jvj+2]==20&&V9<=sepcte) ? V9 : (x[jvj+2]==41) ? (-1000) : 0;
l1:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+5)*/
for(i=x[jvj+5],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=1)) goto l2;
pile[v[22]]=102; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+3,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=433)) goto l2;
x[jvj+15]=x[jvj+5] ;z[jvj+15]=z[jvj+5];
if((x[jvj+15]<=0)) goto l2;
x[jvj+8]=s[x[jvj+15]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+15];
pile[v[22]]=jvj+8; pile[WZ1]=XP; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+8,XP,jvj+9)*/
if((x[jvj+9]==135)) goto l3;
l2:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+4)*/
goto l1;
l3:x[P]=x[jvj+3] ;z[P]=z[jvj+3];
l5:if(x[P]==incon) goto l10;
l8:if(x[P]!=incon) goto l9;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
l4:pile[v[22]]=CT; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(CT,X,jvj+10)*/
pile[v[22]]=P; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(P,120,jvj+10)*/
l6:pile[v[22]]=X; pile[WZ1]=CT; pile[WZ2]=P; 
(*f[35])( );     /*CHGC1(X,CT,P)*/
goto l8;
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; v[102]=0;return;
l10:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=433; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,433,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7423); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7423),jvj+12)*/
pile[v[22]]=XP; pile[WZ1]=(-20); pile[WZ2]=107; pile[WZ3]=jvj+11; 
(*f[180])( );     /*TRIENS0(XP,(-20),107,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=P; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+14,jvj+13,P)*/
if(x[P]!=incon) goto l4;
goto l6;
}
