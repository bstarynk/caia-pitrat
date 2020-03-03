#include "dx.h"
void ANACREUSE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int P,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10991;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1528&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; T=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=P; pile[WZ1]=1055; 
(*f[525])( );     /*SOREXP0(P,1055)*/
pile[WZ1]=1078; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(P,1078,jvj+22)*/
pile[v[22]]=913; pile[WZ1]=T; pile[WZ2]=935; pile[WZ3]=940; pile[WZ4]=jvj+22; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(913,T,935,940,jvj+22,jvj+3)*/
pile[v[22]]=935; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,jvj+3,jvj+4)*/
if(x[jvj+4]!=991&&x[jvj+4]!=316) goto l1;
x[jvj+21]=1055 ;z[jvj+21]=1055;
l6:pile[v[22]]=1078; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1078,jvj+3,jvj+18)*/
pile[v[22]]=935; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,jvj+3,jvj+9)*/
pile[v[22]]=913; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(913,jvj+3,jvj+10)*/
x[jvj+11]=1055 ;z[jvj+11]=1055;
l4:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+11,jvj+12)*/
pile[v[22]]=698; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(698,jvj+12,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
pile[v[22]]=935; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+14,jvj+15)*/
if((x[jvj+15]!=x[jvj+9])) goto l5;
pile[v[22]]=913; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(913,jvj+14,jvj+16)*/
if((x[jvj+16]!=x[jvj+10])) goto l5;
pile[v[22]]=1078; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1078,jvj+14,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[1143])( );     /*MEMEPB0(jvj+18,jvj+17,jvj+19)*/
if((x[jvj+19]==68)) goto l8;
l5:x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
goto l4;
l1:pile[v[22]]=913; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(913,jvj+3,jvj+5)*/
x[jvj+6]=d[14];z[jvj+6]=0;
l2:if((x[jvj+6]<=0)) goto l8;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=1246; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1246,jvj+7,jvj+8)*/
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==x[jvj+5]) goto l3;
x[jvj+6]=t[x[jvj+6]];
goto l2;
l3:x[jvj+21]=x[jvj+7] ;z[jvj+21]=z[jvj+7];
goto l6;
l7:pile[v[22]]=jvj+3; pile[WZ1]=1055; 
(*f[762])( );     /*AJNUM0(jvj+3,1055)*/
pile[WZ1]=jvj+20; 
(*f[1269])( );     /*VALCREUSE0(jvj+3,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=1055; 
(*f[1270])( );     /*VALGLO1(jvj+20,1055)*/
pile[v[22]]=jvj+21; pile[WZ1]=1245; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+21,1245,1)*/
pile[v[22]]=jvj+18; pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(jvj+18,1161,1055)*/
l8:V13=vv[21];
if((V13<=0)) goto l9;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
