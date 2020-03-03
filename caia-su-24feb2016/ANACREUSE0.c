#include "dx.h"
void ANACREUSE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0;
int K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10991;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==952&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=935; pile[WZ1]=K; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(935,K,jvj+3)*/
if(x[jvj+3]!=991&&x[jvj+3]!=316) goto l1;
x[jvj+20]=1055 ;z[jvj+20]=1055;
l6:pile[v[22]]=1078; pile[WZ1]=K; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1078,K,jvj+17)*/
pile[v[22]]=935; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(935,K,jvj+8)*/
pile[v[22]]=913; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(913,K,jvj+9)*/
x[jvj+10]=1055 ;z[jvj+10]=1055;
l4:pile[v[22]]=120; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+10,jvj+11)*/
pile[v[22]]=698; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(698,jvj+11,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=935; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,jvj+13,jvj+14)*/
if((x[jvj+14]!=x[jvj+8])) goto l5;
pile[v[22]]=913; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(913,jvj+13,jvj+15)*/
if((x[jvj+15]!=x[jvj+9])) goto l5;
pile[v[22]]=1078; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1078,jvj+13,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[1143])( );     /*MEMEPB0(jvj+17,jvj+16,jvj+18)*/
if((x[jvj+18]==68)) goto l8;
l5:x[jvj+10]=x[jvj+11] ;z[jvj+10]=z[jvj+11];
goto l4;
l1:pile[v[22]]=913; pile[WZ1]=K; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(913,K,jvj+4)*/
x[jvj+5]=d[14];z[jvj+5]=0;
l2:if((x[jvj+5]<=0)) goto l8;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=1246; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1246,jvj+6,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l3;
x[jvj+5]=t[x[jvj+5]];
goto l2;
l3:x[jvj+20]=x[jvj+6] ;z[jvj+20]=z[jvj+6];
goto l6;
l7:pile[v[22]]=K; pile[WZ1]=1055; 
(*f[762])( );     /*AJNUM0(K,1055)*/
pile[WZ1]=jvj+19; 
(*f[1269])( );     /*VALCREUSE0(K,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1055; 
(*f[1270])( );     /*VALGLO1(jvj+19,1055)*/
pile[v[22]]=jvj+20; pile[WZ1]=1245; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+20,1245,1)*/
pile[v[22]]=jvj+17; pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(jvj+17,1161,1055)*/
l8:V13=vv[21];
if((V13<=0)) goto l9;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
