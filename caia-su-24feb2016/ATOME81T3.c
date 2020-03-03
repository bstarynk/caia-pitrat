#include "dx.h"
void ATOME81T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,VV=0,V25=0,TT=0,V26=0,V21=0,V10=0;
int R,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=20081;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3361&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; X=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l12;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V10)*/
V10=pile[WZ2]; 
if((V10!=2)) goto l12;
pile[v[22]]=X; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(X,jvj+10)*/
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
x[jvj+34]=d[20];z[jvj+34]=0;
l14:if((x[jvj+34]>0)) goto l15;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:V=s[x[jvj+4]];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V) goto l12;
x[jvj+4]=t[x[jvj+4]];
l1:if((x[jvj+4]>0)) goto l2;
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+16,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=jvj+17; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(X,jvj+17)*/
pile[v[22]]=509; pile[WZ2]=jvj+18; 
(*f[1969])( );     /*FNDEND0(509,jvj+17,jvj+18)*/
l9:if((x[jvj+18]<=0)) goto l11;
x[jvj+8]=s[x[jvj+18]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+18];
if((x[jvj+8]==x[R])) goto l10;
pile[v[22]]=1071; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1071,jvj+3,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(jvj+8,jvj+9)*/
V25=x[jvj+7];
l3:if((V25>0)) goto l4;
pile[v[22]]=jvj+8; pile[WZ1]=X; pile[WZ2]=jvj+5; pile[WZ3]=jvj+15; pile[WZ4]=jvj+19; 
(*f[3130])( );if(v[102]) goto l10;     /*SUBSTITUVAR1(jvj+8,X,jvj+5,jvj+15,jvj+19)*/
if((x[jvj+19]==135)) goto l8;
l10:x[jvj+18]=t[x[jvj+18]];
goto l9;
l4:VV=s[V25];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==VV) goto l10;
V25=t[V25];
goto l3;
l7:TT=s[V26];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==TT) goto l13;
V26=t[V26];
l6:if((V26>0)) goto l7;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+26; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+26)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+27; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+27)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(V21,858,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,v[13],642,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=3361; pile[WZ2]=246; pile[WZ3]=jvj+25; 
(*f[189])( );     /*TRI4(jvj+24,3361,246,jvj+25)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20081; pile[WZ4]=jvj+25; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,1,218,20081,jvj+25,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+26)*/
pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+27)*/
pile[WZ1]=jvj+8; 
(*f[966])( );     /*ELIMINE0(jvj+13,jvj+8)*/
l13:pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(101,jvj+8,110,(-608),jvj+31)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+32)*/
pile[WZ1]=X; pile[WZ3]=(-596); pile[WZ4]=jvj+33; 
(*f[270])( );     /*QUADRI7(101,X,110,(-596),jvj+33)*/
pile[v[22]]=V21; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V21,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3361; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3361,246,jvj+30)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20081; pile[WZ4]=jvj+30; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(158,1,218,20081,jvj+30,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=159; pile[WZ2]=jvj+31; 
(*f[36])( );     /*PLUSC0(jvj+20,159,jvj+31)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+20,159,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+20,159,jvj+33)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+15,jvj+20)*/
goto l10;
l8:pile[v[22]]=1070; pile[WZ1]=jvj+8; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1070,jvj+8,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+15,1070,jvj+14)*/
l5:pile[v[22]]=921; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(921,jvj+10,jvj+11)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(jvj+8,jvj+12)*/
V26=x[jvj+11];
goto l6;
l11:pile[v[22]]=jvj+3; pile[WZ1]=1071; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(jvj+3,1071,jvj+10)*/
goto l12;
l15:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=jvj+35; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+35,R,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
if((x[jvj+37]==x[X])) goto l16;
x[jvj+5]=x[jvj+37] ;z[jvj+5]=z[jvj+37];
pile[v[22]]=1071; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1071,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
goto l1;
l16:x[jvj+34]=t[x[jvj+34]];
goto l14;
}
