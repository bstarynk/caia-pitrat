#include "dx.h"
void ATOME56T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V11=0,V16=0,V1=0,V27=0,V24=0,V25=0,V29=0;
int R,DD;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=20056;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3312&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; DD=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(870,R,V24)*/
V24=pile[WZ2]; 
if((V24!=3)) goto l16;
pile[v[22]]=489; pile[WZ1]=DD; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+18)*/
if((x[jvj+18]!=0)) goto l16;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1274,R,V27)*/
V27=pile[WZ2]; 
if((V27!=0)) goto l16;
l9:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(868,R,jvj+19)*/
if((x[jvj+19]==55)) goto l16;
pile[v[22]]=498; pile[WZ1]=DD; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l16;     /*FNDOND0(498,DD,jvj+8)*/
pile[v[22]]=473; pile[WZ1]=jvj+8; 
(*f[1975])( );if(v[102]) goto l16;     /*FNDCND0(473,jvj+8,V25)*/
V25=pile[WZ2]; 
if((V25!=1)) goto l16;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+20,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+21; 
(*f[887])( );     /*VARND0(R,jvj+21)*/
x[jvj+32]=x[jvj+21] ;z[jvj+32]=z[jvj+21];
l10:if((x[jvj+32]<=0)) goto l16;
x[jvj+5]=s[x[jvj+32]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+32];
if((x[jvj+5]==x[DD])) goto l11;
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+22; 
(*f[1969])( );     /*FNDEND0(365,jvj+5,jvj+22)*/
x[jvj+33]=x[jvj+21] ;z[jvj+33]=z[jvj+21];
l12:if((x[jvj+33]<=0)) goto l11;
x[jvj+3]=s[x[jvj+33]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+33];
if((x[jvj+5]==x[jvj+3])) goto l13;
if((x[DD]==x[jvj+3])) goto l13;
pile[v[22]]=489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+23; 
(*f[1969])( );     /*FNDEND0(489,jvj+3,jvj+23)*/
if((x[jvj+23]!=0)) goto l13;
x[jvj+34]=x[jvj+22] ;z[jvj+34]=z[jvj+22];
l14:if((x[jvj+34]<=0)) goto l13;
x[jvj+13]=s[x[jvj+34]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+34];
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+16)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+17; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+17)*/
x[jvj+30]=x[jvj+16] ;z[jvj+30]=z[jvj+16];
l3:if((x[jvj+30]>0)) goto l4;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+28)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+29; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+29)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(V29,858,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,v[13],642,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=3312; pile[WZ2]=246; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,3312,246,jvj+27)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20056; pile[WZ4]=jvj+27; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(158,1,218,20056,jvj+27,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+28)*/
pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+24,159,jvj+29)*/
pile[v[22]]=365; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; pile[WZ3]=jvj+24; 
(*f[1569])( );     /*DELIER0(365,jvj+5,jvj+13,jvj+24)*/
l15:x[jvj+34]=t[x[jvj+34]];
goto l14;
l4:x[jvj+14]=s[x[jvj+30]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+30];
if((x[jvj+13]!=x[jvj+14])) goto l7;
pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[DD]) goto l5;
pile[v[22]]=688; pile[WZ1]=jvj+8; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(688,jvj+8,V16)*/
V16=pile[WZ2]; 
if((V16!=1)) goto l7;
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+5,jvj+11)*/
if((x[jvj+8]==x[jvj+11])) goto l5;
l7:x[jvj+31]=x[jvj+17] ;z[jvj+31]=z[jvj+17];
l6:if((x[jvj+31]<=0)) goto l5;
x[jvj+15]=s[x[jvj+31]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+31];
if((x[jvj+14]!=x[jvj+15])) goto l1;
pile[v[22]]=921; pile[WZ1]=DD; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(921,DD,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l8;
pile[v[22]]=688; pile[WZ1]=jvj+8; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+8,V11)*/
V11=pile[WZ2]; 
if((V11!=1)) goto l1;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+3,jvj+9)*/
if((x[jvj+9]==x[jvj+8])) goto l8;
l1:if((x[jvj+13]!=x[jvj+15])) goto l2;
pile[v[22]]=921; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(921,jvj+5,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l8;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l2;     /*FNDOND0(498,jvj+5,jvj+6)*/
if((x[jvj+4]!=x[jvj+6])) goto l2;
pile[v[22]]=688; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l2;     /*FNDCND0(688,jvj+6,V6)*/
V6=pile[WZ2]; 
if((V6==1)) goto l8;
l2:pile[v[22]]=R; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; pile[WZ3]=DD; pile[WZ4]=jvj+14; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+15; 
(*f[3081])( );if(v[102]) goto l15;     /*EVLM2(R,jvj+5,jvj+13,DD,jvj+14,jvj+3,jvj+15,V1)*/
V1=pile[v[22]+7]; 
if((V1!=135)) goto l8;
goto l15;
l5:x[jvj+30]=t[x[jvj+30]];
goto l3;
l8:x[jvj+31]=t[x[jvj+31]];
goto l6;
l11:x[jvj+32]=t[x[jvj+32]];
goto l10;
l13:x[jvj+33]=t[x[jvj+33]];
goto l12;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
