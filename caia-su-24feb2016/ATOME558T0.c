#include "dx.h"
void ATOME558T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,V9=0,V11=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=20558;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3830&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNI; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNI,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l5;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+4,V30)*/
V30=pile[WZ2]; 
x[jvj+5]=d[20];z[jvj+5]=0;
l1:if((x[jvj+5]<=0)) goto l5;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=NNNI; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+6,NNNI,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=43)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+7,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+7,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=1805)) goto l2;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+6,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=NNNI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,NNNI,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=68)) goto l2;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+9,jvj+16)*/
pile[v[22]]=202; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(202,jvj+16,jvj+17)*/
if((x[jvj+17]!=68)) goto l2;
pile[v[22]]=489; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(489,jvj+16,jvj+18)*/
for(i=x[jvj+18],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=1)) goto l2;
pile[v[22]]=365; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(365,jvj+16,jvj+19)*/
for(i=x[jvj+19],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=2)) goto l2;
x[jvj+29]=x[jvj+19] ;z[jvj+29]=z[jvj+19];
l3:if((x[jvj+29]<=0)) goto l2;
x[jvj+20]=s[x[jvj+29]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+29];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[1029])( );     /*DIFFAPP0(jvj+20,jvj+18,jvj+21)*/
if((x[jvj+21]==135)) goto l6;
l4:x[jvj+29]=t[x[jvj+29]];
goto l3;
l2:x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l6:pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+27)*/
pile[v[22]]=V30; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V30,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3830; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3830,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20558; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20558,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=489; pile[WZ2]=jvj+9; pile[WZ3]=jvj+20; 
(*f[1753])( );     /*LIER1(jvj+22,489,jvj+9,jvj+20)*/
goto l4;
}
