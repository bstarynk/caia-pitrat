#include "dx.h"
void ATOME602T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V48=0,V34=0,V10=0,V49=0,V11=0,V50=0,V38=0,V44=0,V46=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=60;
x[jvj+1]=20602;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3910&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=625)) goto l17;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(160,R,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=41)) goto l17;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+6,V38)*/
V38=pile[WZ2]; 
x[jvj+14]=d[20];z[jvj+14]=0;
l10:if((x[jvj+14]<=0)) goto l17;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+15,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+16,R,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=41)) goto l11;
pile[v[22]]=R; pile[WZ1]=jvj+15; pile[WZ3]=jvj+19; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(R,jvj+15,V44,jvj+19)*/
V44=pile[WZ2]; 
x[jvj+35]=V44 ;z[jvj+35]=(x[jvj+19]==20&&V44<=sepcte) ? V44 : (x[jvj+19]==41) ? (-1000) : 0;
x[jvj+20]=x[jvj+35] ;z[jvj+20]=z[jvj+35];
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=484)) goto l11;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+20,jvj+22)*/
pile[v[22]]=509; pile[WZ2]=jvj+23; 
(*f[1969])( );     /*FNDEND0(509,jvj+22,jvj+23)*/
x[jvj+60]=x[jvj+23] ;z[jvj+60]=z[jvj+23];
l12:if((x[jvj+60]<=0)) goto l11;
x[jvj+2]=s[x[jvj+60]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+60];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+2,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=625)) goto l13;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(160,jvj+2,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=41)) goto l13;
x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+3)*/
pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1006,R,jvj+4)*/
V48=x[jvj+3];
l1:if((V48>0)) goto l2;
if((x[jvj+5]!=0)) goto l13;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=929; pile[WZ1]=jvj+6; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+6,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=V34; 
(*f[207])( );     /*PLUE2(jvj+7,V34)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,jvj+2,jvj+8)*/
V49=x[jvj+8];
l6:if((V49>0)) goto l7;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1006,R,jvj+9)*/
V50=x[jvj+9];
l8:if((V50>0)) goto l9;
pile[v[22]]=jvj+2; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[1032])( );if(v[102]) goto l13;     /*MERGEQM0(jvj+2,R,jvj+28)*/
x[jvj+38]=x[jvj+28] ;z[jvj+38]=z[jvj+28];
x[jvj+29]=d[20];z[jvj+29]=0;
l14:if((x[jvj+29]<=0)) goto l13;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=268; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+30,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+2; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(jvj+31,jvj+2,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+32,jvj+33)*/
if((x[jvj+33]!=41)) goto l15;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+30; pile[WZ3]=jvj+34; 
(*f[45])( );if(v[102]) goto l15;     /*FNDZ0(jvj+2,jvj+30,V46,jvj+34)*/
V46=pile[WZ2]; 
x[jvj+36]=V46 ;z[jvj+36]=(x[jvj+34]==20&&V46<=sepcte) ? V46 : (x[jvj+34]==41) ? (-1000) : 0;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+36,jvj+37)*/
if((x[jvj+37]==135)) goto l16;
l15:x[jvj+29]=t[x[jvj+29]];
goto l14;
l2:V7=s[V48];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==V7) goto l4;
l3:V48=t[V48];
goto l1;
l4:pile[v[22]]=jvj+5; pile[WZ1]=V7; 
(*f[207])( );     /*PLUE2(jvj+5,V7)*/
goto l3;
l7:V10=s[V49];
pile[v[22]]=jvj+7; pile[WZ1]=V10; 
(*f[207])( );     /*PLUE2(jvj+7,V10)*/
V49=t[V49];
goto l6;
l9:V11=s[V50];
pile[v[22]]=jvj+7; pile[WZ1]=V11; 
(*f[207])( );     /*PLUE2(jvj+7,V11)*/
V50=t[V50];
goto l8;
l11:x[jvj+14]=t[x[jvj+14]];
goto l10;
l13:x[jvj+60]=t[x[jvj+60]];
goto l12;
l16:pile[v[22]]=jvj+38; pile[WZ1]=1006; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+38,1006,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+46)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V38,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3910; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3910,246,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=20602; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,20602,218,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ2]=jvj+45; pile[WZ3]=159; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,159,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+47,1,158,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[1296])( );     /*NOUVCONTR0(jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+52)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+48; 
(*f[46])( );     /*TRI0(V38,858,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,v[13],642,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=3910; pile[WZ2]=246; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,3910,246,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=20602; pile[WZ2]=218; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,20602,218,jvj+51)*/
pile[v[22]]=jvj+52; pile[WZ1]=(-20); pile[WZ2]=jvj+51; pile[WZ3]=159; pile[WZ4]=jvj+53; 
(*f[298])( );     /*TRIENS1(jvj+52,(-20),jvj+51,159,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+53,1,158,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+40,R)*/
pile[v[22]]=101; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+58)*/
pile[v[22]]=V38; pile[WZ1]=858; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V38,858,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,v[13],642,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=3910; pile[WZ2]=246; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,3910,246,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=20602; pile[WZ2]=218; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,20602,218,jvj+57)*/
pile[v[22]]=jvj+58; pile[WZ1]=(-20); pile[WZ2]=jvj+57; pile[WZ3]=159; pile[WZ4]=jvj+59; 
(*f[298])( );     /*TRIENS1(jvj+58,(-20),jvj+57,159,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+59,1,158,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+2; 
(*f[966])( );     /*ELIMINE0(jvj+41,jvj+2)*/
goto l15;
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
