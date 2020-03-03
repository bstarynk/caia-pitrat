#include "dx.h"
void ATOME240T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V5=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=20240;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3586&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=1601; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1601,R,jvj+13)*/
if((x[jvj+13]!=0)) goto l7;
l10:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+31]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+31];
pile[v[22]]=1348; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1348,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l3;
l4:pile[v[22]]=480; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(480,jvj+3,jvj+7)*/
x[jvj+32]=x[jvj+7] ;z[jvj+32]=z[jvj+7];
l5:if((x[jvj+32]<=0)) goto l3;
x[jvj+8]=s[x[jvj+32]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+32];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l6;
pile[v[22]]=489; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(489,jvj+8,jvj+9)*/
if((x[jvj+9]==0)) goto l8;
l6:x[jvj+32]=t[x[jvj+32]];
goto l5;
l3:x[jvj+31]=t[x[jvj+31]];
l1:if((x[jvj+31]>0)) goto l2;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[3588])( );     /*SUBVERIF0(jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l11;
l8:x[jvj+13]=t[x[jvj+13]];
l7:if((x[jvj+13]<=0)) goto l10;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=459; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(459,jvj+14,jvj+15)*/
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(jvj+16,jvj+17)*/
for(i=x[jvj+17],V5=0;i>0;i=t[i],V5++)  ;
if((V5!=1)) goto l8;
if((x[jvj+17]<=0)) goto l8;
x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=202; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,jvj+10,jvj+11)*/
if((x[jvj+11]==68)) goto l8;
l9:pile[v[22]]=jvj+10; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[3587])( );     /*CHERDEFINE0(jvj+10,jvj+18,jvj+19)*/
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(454,jvj+5,jvj+6)*/
x[jvj+31]=x[jvj+6] ;z[jvj+31]=z[jvj+6];
goto l1;
l11:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+27)*/
pile[v[22]]=V13; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V13,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3586; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3586,246,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=20240; pile[WZ2]=218; pile[WZ3]=jvj+26; 
(*f[58])( );     /*TRI3(jvj+25,20240,218,jvj+26)*/
pile[v[22]]=jvj+27; pile[WZ1]=(-20); pile[WZ2]=jvj+26; pile[WZ3]=159; pile[WZ4]=jvj+28; 
(*f[298])( );     /*TRIENS1(jvj+27,(-20),jvj+26,159,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+28,1,158,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=1260; pile[WZ2]=jvj+29; 
(*f[300])( );     /*TRI10(jvj+19,1260,jvj+29)*/
pile[v[22]]=R; pile[WZ1]=(-20); pile[WZ3]=509; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(R,(-20),jvj+29,509,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1350; pile[WZ2]=277; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+30,1350,277,jvj+22)*/
pile[v[22]]=jvj+21; pile[WZ1]=489; pile[WZ2]=jvj+10; 
(*f[1753])( );     /*LIER1(jvj+21,489,jvj+10,jvj+22)*/
goto l8;
}
