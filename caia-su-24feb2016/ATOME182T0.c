#include "dx.h"
void ATOME182T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V15=0,V17=0,V49=0,V43=0,V54=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=52;
x[jvj+1]=20182;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3556&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=625)) goto l5;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,R,V3)*/
V3=pile[WZ2]; 
if((V3!=1)) goto l5;
pile[v[22]]=160; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,R,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+13,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1300,R,jvj+14)*/
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==63) goto l5;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==596) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,R,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l3;
pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]==41)) goto l5;
l3:pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+7,jvj+9)*/
if((x[jvj+9]!=484)) goto l4;
pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+5,jvj+10)*/
if((x[jvj+10]==41)) goto l5;
l4:x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+15,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l5;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[1290])( );if(v[102]) goto l2;     /*DEPEXP0(jvj+3,jvj+4)*/
x[jvj+52]=0 ;z[jvj+52]=0;
V49=V15-1;
V43=0;
l6:if((V43<=V49)) goto l9;
x[jvj+25]=0 ;z[jvj+25]=0;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+23)*/
x[jvj+24]=d[119];z[jvj+24]=0;
l7:if((x[jvj+52]>0)) goto l8;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=111; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,111,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+29; 
(*f[301])( );     /*TRI11(jvj+28,jvj+26,107,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+29,22,100,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+21)*/
pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[v[22]]=V17; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V17,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3556; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3556,246,jvj+20)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20182; pile[WZ4]=jvj+20; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,1,218,20182,jvj+20,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+22)*/
pile[v[22]]=R; pile[WZ1]=jvj+17; pile[WZ2]=jvj+16; 
(*f[1558])( );     /*RESTAURE0(R,jvj+17,jvj+16)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l8:V54=s[x[jvj+52]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+30)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V54; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V54,jvj+31)*/
pile[WZ3]=V15; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=160; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,160,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+30; pile[WZ2]=111; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+33,jvj+30,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,jvj+31,103,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+35; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+35,jvj+36)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+36; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+24,jvj+36,jvj+25)*/
x[jvj+52]=t[x[jvj+52]];
goto l7;
l9:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+37; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+37)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+37; pile[WZ2]=jvj+5; pile[WZ3]=jvj+38; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+4,jvj+37,jvj+5,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+39)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+39; pile[WZ2]=jvj+7; pile[WZ3]=jvj+40; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+4,jvj+39,jvj+7,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+38,jvj+41)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,V15,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=160; pile[WZ2]=jvj+45; 
(*f[54])( );     /*TRI1(jvj+44,160,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+43; pile[WZ2]=111; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,jvj+43,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+42; pile[WZ2]=103; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,jvj+42,103,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+47; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+47,jvj+48)*/
pile[v[22]]=300; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[1157])( );if(v[102]) goto l10;     /*NORME1(300,jvj+48,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,134,jvj+50)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+49,jvj+50,jvj+51)*/
if((x[jvj+51]==134)) goto l11;
l10:V43++;
goto l6;
l11:pile[v[22]]=jvj+52; pile[WZ1]=V43; 
(*f[207])( );     /*PLUE2(jvj+52,V43)*/
goto l10;
}
