#include "dx.h"
void ANAPAT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0;
int K,Z,V,BL;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11099;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1169&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; Z=pile[v[22]+1]; V=pile[v[22]+2]; BL=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=Z; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,Z,jvj+3)*/
if((x[jvj+3]!=22)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,Z,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
pile[v[22]]=1016; pile[WZ1]=1216; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1016,1216,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l1;
l2:x[jvj+16]=w[x[jvj+3]][8];
l3:if((x[jvj+16]>0)) goto l4;
x[jvj+18]=w[x[jvj+3]][9];
l8:if((x[jvj+18]<=0)) goto l10;
x[jvj+14]=s[x[jvj+18]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+18];
pile[v[22]]=jvj+14; pile[WZ1]=Z; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+14,Z,jvj+15)*/
pile[v[22]]=K; pile[WZ1]=jvj+15; pile[WZ2]=V; pile[WZ3]=BL; 
(*f[1169])( );     /*ANAPAT1(K,jvj+15,V,BL)*/
l9:x[jvj+18]=t[x[jvj+18]];
goto l8;
l1:pile[v[22]]=K; pile[WZ1]=V; pile[WZ2]=44; pile[WZ3]=jvj+5; pile[WZ4]=1216; 
(*f[489])( );     /*AJA0(K,V,44,jvj+5,1216)*/
goto l2;
l4:x[jvj+7]=s[x[jvj+16]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+16];
pile[v[22]]=jvj+7; pile[WZ1]=Z; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,Z,jvj+8)*/
x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
l5:if((x[jvj+17]>0)) goto l6;
x[jvj+16]=t[x[jvj+16]];
goto l3;
l6:x[jvj+9]=s[x[jvj+17]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+17];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+11,jvj+12)*/
V11=x[jvj+12];
if(V11!=295&&V11!=585) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+9,jvj+13)*/
pile[v[22]]=K; pile[WZ1]=jvj+13; pile[WZ2]=BL; 
(*f[487])( );     /*CARCONTR0(K,jvj+13,BL)*/
l7:x[jvj+17]=t[x[jvj+17]];
goto l5;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
