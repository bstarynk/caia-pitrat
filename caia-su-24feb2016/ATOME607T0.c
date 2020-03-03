#include "dx.h"
void ATOME607T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,P=0,V28=0,V16=0,V31=0,V18=0,V17=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20607;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3916&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[1945])( );if(v[102]) goto l9;     /*DEGREE0(R,jvj+2)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+2,V21)*/
V21=pile[WZ2]; 
if((V21<=1)) goto l12;
l9:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=25)) goto l12;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+16,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=1535; pile[WZ1]=770; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1535,770,jvj+21)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=929; pile[WZ1]=jvj+16; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(929,jvj+16,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=V28; 
(*f[207])( );     /*PLUE2(jvj+17,V28)*/
l6:pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1006,R,jvj+18)*/
l7:if((x[jvj+18]>0)) goto l8;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,R,jvj+7)*/
pile[v[22]]=103; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,R,jvj+4)*/
l10:if((x[jvj+21]<=0)) goto l12;
P=s[x[jvj+21]];
pile[v[22]]=P; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[3921])( );     /*COMBDIV0(P,R,jvj+22)*/
x[jvj+34]=x[jvj+22] ;z[jvj+34]=z[jvj+22];
for(i=x[jvj+34],V18=0;i>0;i=t[i],V18++)  ;
if((V18>=20)) goto l11;
x[jvj+12]=0 ;z[jvj+12]=0;
l1:if((x[jvj+34]>0)) goto l2;
for(i=x[jvj+12],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=V18)) goto l11;
x[jvj+15]=0 ;z[jvj+15]=0;
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+27; 
(*f[301])( );     /*TRI11(jvj+26,jvj+15,107,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+27,22,100,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1006; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(jvj+23,1006,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[v[22]]=V31; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V31,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3916; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3916,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=20607; pile[WZ2]=218; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,20607,218,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=159; pile[WZ4]=jvj+33; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,159,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+33,1,158,jvj+24)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[1296])( );     /*NOUVCONTR0(jvj+23,jvj+24)*/
l11:x[jvj+21]=t[x[jvj+21]];
goto l10;
l2:x[jvj+3]=s[x[jvj+34]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+34];
pile[v[22]]=P; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; pile[WZ3]=jvj+5; 
(*f[3919])( );if(v[102]) goto l3;     /*SUBSTFP0(P,jvj+3,jvj+4,jvj+5)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[3918])( );if(v[102]) goto l3;     /*NORMFP0(P,jvj+5,jvj+6)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; pile[WZ3]=jvj+8; 
(*f[3919])( );if(v[102]) goto l3;     /*SUBSTFP0(P,jvj+3,jvj+7,jvj+8)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[3918])( );if(v[102]) goto l3;     /*NORMFP0(P,jvj+8,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[3917])( );     /*SIMPFPTOT0(jvj+6,jvj+9,jvj+10)*/
pile[v[22]]=P; pile[WZ1]=jvj+10; pile[WZ2]=jvj+3; pile[WZ3]=jvj+11; 
(*f[3920])( );if(v[102]) goto l3;     /*TRADFP0(P,jvj+10,jvj+3,jvj+11)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+12,jvj+11)*/
l3:x[jvj+34]=t[x[jvj+34]];
goto l1;
l5:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+14)*/
x[jvj+12]=t[x[jvj+12]];
goto l4;
l8:V16=s[x[jvj+18]];
pile[v[22]]=jvj+17; pile[WZ1]=V16; 
(*f[207])( );     /*PLUE2(jvj+17,V16)*/
x[jvj+18]=t[x[jvj+18]];
goto l7;
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
