#include "dx.h"
void ATOME125T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,V30=0,V6=0,V18=0,V31=0,J=0,V3=0,I=0,V7=0,T=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20125;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3622&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+3)*/
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=486)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+6)*/
for(i=x[jvj+6],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l7;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+7,jvj+8)*/
if(x[jvj+8]!=29&&x[jvj+8]!=30&&x[jvj+8]!=25) goto l7;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l7;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+12,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[1160])( );if(v[102]) goto l7;     /*SUP0(jvj+13,J)*/
J=pile[WZ1]; 
x[jvj+27]=x[jvj+6] ;z[jvj+27]=z[jvj+6];
l2:if((x[jvj+27]<=0)) goto l7;
x[jvj+14]=s[x[jvj+27]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+27];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=484)) goto l3;
x[jvj+16]=x[jvj+14] ;z[jvj+16]=z[jvj+14];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+16,jvj+17)*/
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
x[jvj+28]=x[jvj+6] ;z[jvj+28]=z[jvj+6];
l4:if((x[jvj+28]<=0)) goto l3;
x[jvj+18]=s[x[jvj+28]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+28];
if((x[jvj+14]==x[jvj+18])) goto l5;
pile[v[22]]=jvj+18; 
(*f[1161])( );if(v[102]) goto l5;     /*INF0(jvj+18,V3)*/
V3=pile[WZ1]; 
I=V3;
if((I<=0)) goto l5;
V7=J/I;
V6=incon;
if((x[jvj+8]!=29)) goto l1;
V29=J%I;
if((V29!=0)) goto l1;
V30=V7-1;
V6=V30;
l6:T=V6;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+25)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+21; 
(*f[46])( );     /*TRI0(V31,858,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,v[13],642,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=3622; pile[WZ2]=246; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,3622,246,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=20125; pile[WZ2]=218; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,20125,218,jvj+24)*/
pile[v[22]]=jvj+25; pile[WZ1]=(-20); pile[WZ2]=jvj+24; pile[WZ3]=159; pile[WZ4]=jvj+26; 
(*f[298])( );     /*TRIENS1(jvj+25,(-20),jvj+24,159,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+26,1,158,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=164; pile[WZ2]=jvj+20; pile[WZ3]=T; 
(*f[2056])( );     /*VAUT0(jvj+19,164,jvj+20,T)*/
l5:x[jvj+28]=t[x[jvj+28]];
goto l4;
l1:V6=V7;
goto l6;
l3:x[jvj+27]=t[x[jvj+27]];
goto l2;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
