#include "dx.h"
void EXPATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V6=0,V7=0,V3=0,V12=0;
int LL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11675;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==875&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1202; pile[WZ1]=LL; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1202,LL,jvj+2)*/
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,LL,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=69; pile[WZ1]=V3; 
(*f[1180])( );     /*GEREDQ1(69,V3)*/
pile[v[22]]=1576; pile[WZ1]=1567; pile[WZ2]=LL; 
(*f[36])( );     /*PLUSC0(1576,1567,LL)*/
V4=(time(tzt)-inccc);
x[jvj+3]=incon;
if((x[jvj+2]==1453)) goto l1;
if((x[jvj+2]!=1454)) goto l5;
x[jvj+3]=104 ;z[jvj+3]=104;
l2:x[jvj+5]=incon;
if((V3<1000)) goto l3;
x[jvj+5]=67 ;z[jvj+5]=67;
l4:pile[v[22]]=683; pile[WZ1]=LL; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,LL,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,LL,V7)*/
V7=pile[WZ2]; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=V6; pile[WZ1]=V7; pile[WZ2]=jvj+3; pile[WZ3]=jvj+2; pile[WZ4]=V3; pile[WZ5]=jvj+4; pile[v[22]+6]=jvj+5; 
(*f[870])( );     /*GLOBEX0(V6,V7,jvj+3,jvj+2,V3,jvj+4,jvj+5)*/
pile[v[22]]=V4; pile[WZ1]=LL; 
(*f[871])( );     /*ANARED0(V4,LL)*/
if((V3>=1000)) goto l5;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l5:pile[v[22]]=642; pile[WZ1]=LL; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,LL,V12)*/
V12=pile[WZ2]; 
if((V12<1000)) goto l6;
pile[v[22]]=999; pile[WZ1]=V12; pile[WZ2]=jvj+6; 
(*f[1181])( );     /*GERED0(999,V12,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=250; 
(*f[1182])( );     /*SORGERED0(jvj+6,250)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+3]=301 ;z[jvj+3]=301;
goto l2;
l3:x[jvj+5]=68 ;z[jvj+5]=68;
goto l4;
}
