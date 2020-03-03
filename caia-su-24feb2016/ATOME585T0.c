#include "dx.h"
void ATOME585T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V11=0,V22=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=20585;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3898&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=30)) goto l6;
x[jvj+7]=vo[16];z[jvj+7]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(498,jvj+7,jvj+8)*/
pile[v[22]]=1182; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1182,jvj+8,jvj+9)*/
if((68!=x[jvj+9])) goto l6;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+2,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[1361])( );     /*VAROBJ0(R,jvj+10)*/
x[jvj+3]=0 ;z[jvj+3]=0;
pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(929,jvj+2,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+3,V19)*/
l1:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,R,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+12)*/
l4:if((x[jvj+10]<=0)) goto l6;
x[jvj+13]=s[x[jvj+10]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+10];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[3895])( );if(v[102]) goto l5;     /*INFBV0(jvj+14,jvj+11,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[3896])( );if(v[102]) goto l5;     /*SUPBV0(jvj+14,jvj+12,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+18)*/
x[jvj+24]=x[jvj+16] ;z[jvj+24]=z[jvj+16];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+18; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+18,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1006; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(jvj+19,1006,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+29)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V22,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3898; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3898,246,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=20585; pile[WZ2]=218; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,20585,218,jvj+28)*/
pile[v[22]]=jvj+29; pile[WZ1]=(-20); pile[WZ2]=jvj+28; pile[WZ3]=159; pile[WZ4]=jvj+30; 
(*f[298])( );     /*TRIENS1(jvj+29,(-20),jvj+28,159,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+30,1,158,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+19,jvj+20)*/
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l3:V11=s[x[jvj+4]];
pile[v[22]]=jvj+3; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+3,V11)*/
x[jvj+4]=t[x[jvj+4]];
goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
