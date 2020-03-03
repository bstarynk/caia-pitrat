#include "dx.h"
void ATOME195T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V14=0,V13=0,V24=0,V10=0;
int D,R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=28;
x[jvj+1]=20195;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3524&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l3;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,R,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1101,R,V14)*/
V14=pile[WZ2]; 
if((V14<2)) goto l3;
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l3;
pile[v[22]]=280; pile[WZ1]=D; 
(*f[1975])( );if(v[102]) goto l3;     /*FNDCND0(280,D,V13)*/
V13=pile[WZ2]; 
if((V13<0)) goto l3;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+8,V24)*/
V24=pile[WZ2]; 
x[jvj+9]=d[20];z[jvj+9]=0;
l1:if((x[jvj+9]<=0)) goto l3;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[3525])( );     /*INFF0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=268; pile[WZ1]=jvj+10; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+10,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+14,R,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[3526])( );     /*SUPF0(jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[255])( );     /*COPEXP0(jvj+16,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+17; pile[WZ2]=103; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,jvj+17,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+23; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+23,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(jvj+18,jvj+19)*/
for(i=x[jvj+19],V10=0;i>0;i=t[i],V10++)  ;
if((V10>=V11)) goto l2;
if((V10>2)) goto l2;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+27)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+28)*/
pile[v[22]]=V24; pile[WZ1]=858; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(V24,858,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,v[13],642,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=3524; pile[WZ2]=246; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,3524,246,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20195; pile[WZ4]=jvj+26; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(158,1,218,20195,jvj+26,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=159; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+20,159,jvj+27)*/
pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+20,159,jvj+28)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+20)*/
l2:x[jvj+9]=t[x[jvj+9]];
goto l1;
l3:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
