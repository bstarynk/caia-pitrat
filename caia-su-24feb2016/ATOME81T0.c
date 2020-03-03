#include "dx.h"
void ATOME81T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V13=0,VV=0,V38=0,TT=0,V39=0,V33=0,V12=0;
int R,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=20081;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3148&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(870,R,V12)*/
V12=pile[WZ2]; 
if((V12!=2)) goto l15;
pile[v[22]]=100; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,R,jvj+26)*/
if((x[jvj+26]!=22)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=25)) goto l15;
pile[v[22]]=X; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(X,jvj+15)*/
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
x[jvj+40]=d[20];z[jvj+40]=0;
l17:if((x[jvj+40]>0)) goto l18;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V=s[x[jvj+3]];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l15;
x[jvj+3]=t[x[jvj+3]];
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+8]=d[20];z[jvj+8]=0;
l3:if((x[jvj+8]<=0)) goto l15;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=jvj+9; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+9,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l4;
x[X]=x[jvj+10] ;z[X]=z[jvj+10];
pile[v[22]]=X; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l13;     /*NDD0(X,jvj+6)*/
pile[v[22]]=498; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l13;     /*FNDCND0(688,jvj+7,V13)*/
V13=pile[WZ2]; 
if((V13==1)) goto l4;
l13:pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(642,jvj+21,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(X,jvj+22)*/
pile[v[22]]=509; pile[WZ2]=jvj+23; 
(*f[1969])( );     /*FNDEND0(509,jvj+22,jvj+23)*/
l11:if((x[jvj+23]<=0)) goto l14;
x[jvj+13]=s[x[jvj+23]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+23];
if((x[jvj+13]==x[R])) goto l12;
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
V38=x[jvj+12];
l5:if((V38>0)) goto l6;
pile[v[22]]=jvj+13; pile[WZ1]=X; pile[WZ2]=jvj+4; pile[WZ3]=jvj+20; pile[WZ4]=jvj+24; 
(*f[3130])( );if(v[102]) goto l12;     /*SUBSTITUVAR1(jvj+13,X,jvj+4,jvj+20,jvj+24)*/
if((x[jvj+24]==135)) goto l10;
l12:x[jvj+23]=t[x[jvj+23]];
goto l11;
l4:x[jvj+8]=t[x[jvj+8]];
goto l3;
l6:VV=s[V38];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==VV) goto l12;
V38=t[V38];
goto l5;
l9:TT=s[V39];
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==TT) goto l16;
V39=t[V39];
l8:if((V39>0)) goto l9;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+33)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V33,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3148; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3148,246,jvj+31)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20081; pile[WZ4]=jvj+31; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,20081,jvj+31,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=159; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+18,159,jvj+33)*/
pile[WZ1]=jvj+13; 
(*f[966])( );     /*ELIMINE0(jvj+18,jvj+13)*/
l16:pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-608),jvj+37)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+38)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+39)*/
pile[v[22]]=V33; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V33,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3148; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3148,246,jvj+36)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20081; pile[WZ4]=jvj+36; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,20081,jvj+36,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+38)*/
pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+25,159,jvj+39)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+25; 
(*f[1296])( );     /*NOUVCONTR0(jvj+20,jvj+25)*/
goto l12;
l10:pile[v[22]]=1070; pile[WZ1]=jvj+13; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1070,jvj+13,jvj+19)*/
pile[v[22]]=jvj+20; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+20,1070,jvj+19)*/
l7:pile[v[22]]=921; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(921,jvj+15,jvj+16)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+17; 
(*f[887])( );     /*VARND0(jvj+13,jvj+17)*/
V39=x[jvj+16];
goto l8;
l14:pile[v[22]]=jvj+2; pile[WZ1]=1071; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+2,1071,jvj+15)*/
goto l15;
l18:x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
pile[v[22]]=jvj+41; pile[WZ1]=R; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+41,R,jvj+42)*/
x[jvj+43]=x[jvj+42] ;z[jvj+43]=z[jvj+42];
if((x[jvj+43]==x[X])) goto l19;
x[jvj+4]=x[jvj+43] ;z[jvj+4]=z[jvj+43];
pile[v[22]]=1071; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1071,jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
goto l1;
l19:x[jvj+40]=t[x[jvj+40]];
goto l17;
}
