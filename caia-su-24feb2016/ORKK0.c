#include "dx.h"
void ORKK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V14=0,V2=0,V17=0,V16=0,V13=0,V12=0,V3=0,V11=0,C=0,H=0,L=0,V30=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V46=0,V47=0,V50=0,V49=0,V43=0,V53=0,V54=0,V51=0;
int XP,X,R,BB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=10711;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2020&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
XP=pile[v[22]]; X=pile[v[22]+1]; R=pile[v[22]+2]; BB=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=238; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(238,X,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+5)*/
V3=incon;
if((V11<=250)) goto l5;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=39)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+7,jvj+2)*/
x[jvj+8]=vo[15];z[jvj+8]=vz[15];
pile[v[22]]=583; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(583,jvj+8,jvj+9)*/
pile[v[22]]=312; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(312,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l4;
pile[v[22]]=311; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(311,jvj+2,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l4;
l5:V3=V11;
l9:pile[v[22]]=jvj+5; pile[WZ1]=R; 
(*f[2108])( );if(v[102]) goto l11;     /*ORW0(jvj+5,R,C,H,L)*/
C=pile[WZ2]; H=pile[WZ3]; L=pile[WZ4]; 
V2=incon;
if((C<=BB)) goto l1;
V15=C/BB;
V14=V15*V3;
V2=V14;
l1:if((V3>BB)) goto l2;
if(V2==incon) goto l3;
l10:V30=x[X];
pile[v[22]]=X; pile[WZ1]=0; pile[WZ2]=V30; pile[WZ3]=238; 
(*f[285])( );     /*ENLY0(X,0,V30,238,V4,V5)*/
V4=pile[WZ4]; V5=pile[WZ5]; 
pile[WZ1]=V5; pile[WZ2]=V4; pile[WZ3]=510; 
(*f[285])( );     /*ENLY0(X,V5,V4,510,V6,V7)*/
V6=pile[WZ4]; V7=pile[WZ5]; 
pile[WZ1]=V7; pile[WZ2]=V6; pile[WZ3]=515; 
(*f[285])( );     /*ENLY0(X,V7,V6,515,V8,V9)*/
V8=pile[WZ4]; V9=pile[WZ5]; 
V35=18;
V36=x[XP];
if((V36>sepcte)) goto l12;
V37=s[x[XP]];
if((V37!=66)) goto l12;
pile[v[22]]=XP; 
(*f[59])( );     /*LECT0(XP)*/
l12:V38=V35;
V39=x[XP];
V40=z[XP];
V41=0;
V46=r[V39];
if((V46!=V38)) goto l14;
V47=s[V39];
V49=incon;
V50=999999999-V2;
if((V47<V50)) goto l18;
V49=999999999;
l13:if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=0;av[v[14]]=s[V39];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V39]=V49;
l14:if((V46>=V38)) goto l15;
V43=t[V39];
if((V43>0)) goto l17;
if((V43!=0)) goto l15;
pile[v[22]]=V38; pile[WZ1]=V2; pile[WZ2]=jvj+13; 
(*f[211])( );     /*TRI6(V38,V2,jvj+13)*/
if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=1;av[v[14]]=t[V39];ty[v[14]]=1;};t[V39]=x[jvj+13];
l15:if((V41>0)) goto l16;
if((V41!=0)) goto l7;
if((V46<=V38)) goto l7;
V53=s[V39];
V54=t[V39];
pile[v[22]]=V54; pile[WZ1]=V53; pile[WZ2]=V46; pile[WZ3]=jvj+14; 
(*f[210])( );     /*TRI5(V54,V53,V46,jvj+14)*/
if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=0;av[v[14]]=s[V39];ty[v[14]]=(s[t[abs(r[ou[v[14]]])]]<=23) ? 1 : 0;};s[V39]=V2;
if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=(-1);av[v[14]]=r[V39];ty[v[14]]=0;};r[V39]=V38;
if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V39;pl[v[14]]=1;av[v[14]]=t[V39];ty[v[14]]=1;};t[V39]=x[jvj+14];
l7:x[jvj+10]=d[108];z[jvj+10]=0;
l6:if((x[jvj+10]<=0)) goto l11;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=X; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+11,X,jvj+12)*/
pile[v[22]]=XP; pile[WZ1]=jvj+12; pile[WZ2]=R; pile[WZ3]=BB; 
(*f[2020])( );     /*ORKK0(XP,jvj+12,R,BB)*/
l8:x[jvj+10]=t[x[jvj+10]];
goto l6;
l2:V17=V3/BB;
V16=C*V17;
V2=V16;
goto l10;
l3:V13=C*V3;
V12=V13/BB;
V2=V12;
goto l10;
l4:V3=250;
goto l9;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l16:if((V46<=V38)) goto l7;
pile[v[22]]=V39; pile[WZ1]=V2; pile[WZ2]=V38; pile[WZ3]=jvj+15; 
(*f[210])( );     /*TRI5(V39,V2,V38,jvj+15)*/
if(V40>0) s[V40]=68;if(V40==(-1)||(V40>0&&v[122]!=0)) {ou[++v[14]]=V41;pl[v[14]]=1;av[v[14]]=t[V41];ty[v[14]]=1;};t[V41]=x[jvj+15];
goto l7;
l17:pile[v[22]]=V38; pile[WZ1]=V43; pile[WZ2]=V2; pile[WZ3]=V39; pile[WZ4]=V40; 
(*f[597])( );     /*BTT0(V38,V43,V2,V39,V40)*/
goto l15;
l18:V51=V47+V2;
V49=V51;
goto l13;
}
