#include "dx.h"
void ATOME214T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V21=0,V5=0,V25=0,NN=0,V13=0,V27=0,P=0,V14=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=20214;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3669&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=25)) goto l12;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1358,R,jvj+20)*/
if((x[jvj+20]!=68)) goto l12;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V13)*/
V13=pile[WZ2]; 
if((V13>5)) goto l12;
pile[v[22]]=1569; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1569,R,jvj+3)*/
if((x[jvj+3]==67)) goto l12;
l9:x[jvj+21]=vo[14];z[jvj+21]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+21,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(R,jvj+22)*/
x[jvj+23]=d[124];z[jvj+23]=0;
l10:if((x[jvj+23]<=0)) goto l12;
P=s[x[jvj+23]];
pile[v[22]]=jvj+22; pile[WZ1]=P; pile[WZ2]=R; pile[WZ3]=jvj+24; 
(*f[3670])( );     /*DECFACREG0(jvj+22,P,R,jvj+24)*/
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(1,117,jvj+6)*/
x[jvj+48]=x[jvj+24] ;z[jvj+48]=z[jvj+24];
l1:if((x[jvj+48]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(117,jvj+6,V21)*/
V21=pile[WZ2]; 
V5=V21;
if((V5>=20)) goto l11;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[3671])( );if(v[102]) goto l11;     /*PRDPOS0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=R; pile[WZ2]=P; pile[WZ3]=jvj+26; 
(*f[3672])( );if(v[102]) goto l11;     /*CMFFLIV0(jvj+25,R,P,jvj+26)*/
for(i=x[jvj+26],V14=0;i>0;i=t[i],V14++)  ;
if((V14>8)) goto l11;
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+50]=x[jvj+26] ;z[jvj+50]=z[jvj+26];
l7:if((x[jvj+50]>0)) goto l8;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+27; 
(*f[299])( );     /*COPEL0(jvj+16,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+43)*/
pile[v[22]]=V27; pile[WZ1]=858; pile[WZ2]=jvj+39; 
(*f[46])( );     /*TRI0(V27,858,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,v[13],642,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=3669; pile[WZ2]=246; pile[WZ3]=jvj+41; 
(*f[189])( );     /*TRI4(jvj+40,3669,246,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=20214; pile[WZ2]=218; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,20214,218,jvj+42)*/
pile[v[22]]=jvj+43; pile[WZ1]=(-20); pile[WZ2]=jvj+42; pile[WZ3]=159; pile[WZ4]=jvj+44; 
(*f[298])( );     /*TRIENS1(jvj+43,(-20),jvj+42,159,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+44,1,158,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+27; pile[WZ2]=107; pile[WZ3]=jvj+47; 
(*f[301])( );     /*TRI11(jvj+46,jvj+27,107,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+47,22,100,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+28; 
(*f[1296])( );     /*NOUVCONTR0(jvj+29,jvj+28)*/
l11:x[jvj+23]=t[x[jvj+23]];
goto l10;
l2:x[jvj+4]=s[x[jvj+48]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+48];
pile[v[22]]=195; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(195,jvj+4,jvj+5)*/
for(i=x[jvj+5],V19=0;i>0;i=t[i],V19++)  ;
if((V19<=1)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V19; 
(*f[818])( );     /*MTC0(jvj+6,117,V19)*/
l3:x[jvj+48]=t[x[jvj+48]];
goto l1;
l5:x[jvj+10]=s[x[jvj+49]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+49];
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+10,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
NN=V25;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+34; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+34)*/
pile[WZ3]=NN; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,NN,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=160; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,160,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=111; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+31,jvj+32,111,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+35; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+35,jvj+13)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[196])( );     /*PLUF0(jvj+9,jvj+13,jvj+14)*/
l6:x[jvj+49]=t[x[jvj+49]];
l4:if((x[jvj+49]>0)) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[299])( );     /*COPEL0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=111; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,111,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+15; pile[WZ2]=107; pile[WZ3]=jvj+38; 
(*f[301])( );     /*TRI11(jvj+37,jvj+15,107,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+38,22,100,jvj+17)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
x[jvj+50]=t[x[jvj+50]];
goto l7;
l8:x[jvj+7]=s[x[jvj+50]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+50];
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=763; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(763,jvj+7,jvj+8)*/
x[jvj+9]=d[119];z[jvj+9]=0;
x[jvj+49]=x[jvj+8] ;z[jvj+49]=z[jvj+8];
goto l4;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
