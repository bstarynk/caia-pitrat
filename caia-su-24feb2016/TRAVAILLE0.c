#include "dx.h"
void TRAVAILLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,R=0,V8=0,V9=0,V10=0,N=0,V5=0,V7=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=11231;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1264&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(905,994,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=301; pile[WZ1]=V1; pile[WZ2]=jvj+2; 
(*f[553])( );if(v[102]) goto l7;     /*EXPPB3(301,V1,jvj+2)*/
pile[v[22]]=645; pile[WZ1]=597; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(645,597,jvj+7)*/
l3:if((x[jvj+7]<=0)) goto l7;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=905; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(905,jvj+8,V5)*/
V5=pile[WZ2]; 
if((V5!=V1)) goto l4;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(683,jvj+8,V7)*/
V7=pile[WZ2]; 
N=V7;
x[jvj+9]=x[jvj+2] ;z[jvj+9]=z[jvj+2];
l5:if((x[jvj+9]<=0)) goto l4;
x[jvj+5]=s[x[jvj+9]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8>=500)) goto l6;
x[jvj+6]=incon;
if((N==3)) goto l1;
x[jvj+6]=67 ;z[jvj+6]=67;
l2:pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1268,936,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=1038; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1038,1058,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[378])( );     /*CPI0(jvj+5,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=493; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+4,493,100)*/
pile[WZ1]=936; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+4,936,V9)*/
pile[WZ1]=683; pile[WZ2]=N; 
(*f[43])( );     /*CHGC2(jvj+4,683,N)*/
pile[WZ1]=978; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+4,978,jvj+6)*/
pile[WZ1]=948; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+4,948,67)*/
pile[WZ1]=860; pile[WZ2]=530; 
(*f[35])( );     /*CHGC1(jvj+4,860,530)*/
pile[WZ1]=1058; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(jvj+4,1058,V10)*/
(*f[1262])( );if(v[102]) goto l6;     /*AJEXP2(jvj+4,R)*/
R=pile[WZ1]; 
if((R<0)) goto l6;
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+3,117,1)*/
l6:x[jvj+9]=t[x[jvj+9]];
goto l5;
l1:x[jvj+6]=68 ;z[jvj+6]=68;
goto l2;
l4:x[jvj+7]=t[x[jvj+7]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; return;
}
