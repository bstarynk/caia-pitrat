#include "dx.h"
void ATOME566T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,K=0,V31=0,P=0,V26=0,V13=0,V29=0,V17=0,V15=0,V14=0,X=0,V35=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=27;
x[jvj+1]=20566;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3892&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=770)) goto l12;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+9,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=1535; pile[WZ1]=770; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1535,770,jvj+14)*/
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=929; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(929,jvj+9,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V26; 
(*f[207])( );     /*PLUE2(jvj+10,V26)*/
l6:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1006,R,jvj+11)*/
l7:if((x[jvj+11]>0)) goto l8;
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[891])( );     /*VAREXP0(R,jvj+15)*/
for(i=x[jvj+15],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=1)) goto l12;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,R,jvj+3)*/
l9:if((x[jvj+14]<=0)) goto l12;
P=s[x[jvj+14]];
V23=P-1;
pile[v[22]]=V23; pile[WZ1]=0; pile[WZ2]=jvj+16; 
(*f[3801])( );     /*ENSINTERV0(V23,0,jvj+16)*/
for(i=x[jvj+16],V15=0;i>0;i=t[i],V15++)  ;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[WZ2]=jvj+2; 
(*f[3801])( );     /*ENSINTERV0(V23,0,jvj+2)*/
V31=x[jvj+2];
l1:if((V31>0)) goto l2;
for(i=x[jvj+5],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=V15)) goto l10;
x[jvj+8]=0 ;z[jvj+8]=0;
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+8,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+17)*/
V35=x[jvj+15];
l11:if((V35<=0)) goto l10;
X=s[V35];
pile[v[22]]=jvj+17; pile[WZ1]=1006; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+17,1006,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(V29,858,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,v[13],642,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=3892; pile[WZ2]=246; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,3892,246,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=20566; pile[WZ2]=218; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,20566,218,jvj+25)*/
pile[v[22]]=jvj+26; pile[WZ1]=(-20); pile[WZ2]=jvj+25; pile[WZ3]=159; pile[WZ4]=jvj+27; 
(*f[298])( );     /*TRIENS1(jvj+26,(-20),jvj+25,159,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+27,1,158,jvj+18)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[1296])( );     /*NOUVCONTR0(jvj+17,jvj+18)*/
V35=t[V35];
goto l11;
l2:K=s[V31];
pile[v[22]]=P; pile[WZ1]=K; pile[WZ2]=jvj+3; pile[WZ3]=jvj+4; 
(*f[1970])( );if(v[102]) goto l3;     /*ISPRIME0(P,K,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+4)*/
l3:V31=t[V31];
goto l1;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l4;
l8:V13=s[x[jvj+11]];
pile[v[22]]=jvj+10; pile[WZ1]=V13; 
(*f[207])( );     /*PLUE2(jvj+10,V13)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l10:x[jvj+14]=t[x[jvj+14]];
goto l9;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
