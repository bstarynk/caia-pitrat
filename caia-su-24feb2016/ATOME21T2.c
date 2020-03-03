#include "dx.h"
void ATOME21T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20021;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3282&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1081; pile[WZ1]=P; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1081,P,jvj+7)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+19]=x[jvj+7] ;z[jvj+19]=z[jvj+7];
l1:if((x[jvj+19]>0)) goto l2;
pile[v[22]]=971; pile[WZ1]=P; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(971,P,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==1081) goto l5;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+19]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+19];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
x[jvj+20]=x[jvj+4] ;z[jvj+20]=z[jvj+4];
l3:if((x[jvj+20]>0)) goto l4;
x[jvj+19]=t[x[jvj+19]];
goto l1;
l4:x[jvj+6]=s[x[jvj+20]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+20];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
x[jvj+20]=t[x[jvj+20]];
goto l3;
l5:pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; pile[WZ3]=jvj+10; pile[WZ4]=jvj+11; 
(*f[3198])( );     /*TROUVAR0(jvj+5,jvj+7,jvj+9,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l7;
goto l6;
l7:pile[v[22]]=101; pile[WZ1]=P; pile[WZ2]=110; pile[WZ3]=(-624); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,P,110,(-624),jvj+17)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(206,715,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3197; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3197,246,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=20021; pile[WZ2]=218; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,20021,218,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=(-20); pile[WZ2]=jvj+16; pile[WZ3]=159; pile[WZ4]=jvj+18; 
(*f[298])( );     /*TRIENS1(jvj+17,(-20),jvj+16,159,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+18,289,158,jvj+12)*/
pile[v[22]]=jvj+12; 
(*f[481])( );     /*STOCKER0(jvj+12)*/
goto l6;
}
