#include "dx.h"
void ATOME5T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V51=0,V3=0,V53=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=20005;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3132&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,R,V3)*/
V3=pile[WZ2]; 
if((V3>1)) goto l10;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1274,R,V51)*/
V51=pile[WZ2]; 
if((V51!=0)) goto l10;
l7:x[jvj+33]=vo[14];z[jvj+33]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+33,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+34; 
(*f[887])( );     /*VARND0(R,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,R,jvj+35)*/
if((x[jvj+35]!=22)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,R,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l4;
pile[v[22]]=102; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+5,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+7,jvj+8)*/
if(x[jvj+8]==96||x[jvj+8]==89||x[jvj+8]==41||x[jvj+8]==20||x[jvj+8]==128||x[jvj+8]==570||x[jvj+8]==1317) goto l8;
l4:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,R,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l5;
pile[v[22]]=102; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+11,jvj+12)*/
if(x[jvj+12]==96||x[jvj+12]==89||x[jvj+12]==41||x[jvj+12]==20||x[jvj+12]==128||x[jvj+12]==570||x[jvj+12]==1317) goto l8;
l5:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==25)) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]!=531)) goto l6;
pile[v[22]]=111; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+15,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=21)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+15; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+15,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l6;
pile[v[22]]=102; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+19,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+21,jvj+22)*/
if(x[jvj+22]==96||x[jvj+22]==89||x[jvj+22]==41||x[jvj+22]==20||x[jvj+22]==128||x[jvj+22]==570||x[jvj+22]==1317) goto l8;
l6:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]==25)) goto l10;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,R,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=531)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+25,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=21)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+25,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l10;
pile[v[22]]=102; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+29,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+31,jvj+32)*/
if(x[jvj+32]==96||x[jvj+32]==89||x[jvj+32]==41||x[jvj+32]==20||x[jvj+32]==128||x[jvj+32]==570||x[jvj+32]==1317) goto l8;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[1969])( );     /*FNDEND0(365,jvj+2,jvj+4)*/
x[jvj+43]=x[jvj+4] ;z[jvj+43]=z[jvj+4];
l2:if((x[jvj+43]>0)) goto l3;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+41; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+41)*/
pile[WZ1]=jvj+2; pile[WZ3]=(-656); pile[WZ4]=jvj+42; 
(*f[270])( );     /*QUADRI7(101,jvj+2,110,(-656),jvj+42)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(V53,858,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,v[13],642,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=3132; pile[WZ2]=246; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,3132,246,jvj+40)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20005; pile[WZ4]=jvj+40; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(158,1,218,20005,jvj+40,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=159; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+37,159,jvj+41)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+37,159,jvj+42)*/
pile[WZ1]=R; 
(*f[966])( );     /*ELIMINE0(jvj+37,R)*/
l9:x[jvj+34]=t[x[jvj+34]];
l8:if((x[jvj+34]<=0)) goto l10;
x[jvj+2]=s[x[jvj+34]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+34];
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[1969])( );     /*FNDEND0(509,jvj+2,jvj+36)*/
for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==x[R]) goto l1;
goto l9;
l3:x[jvj+3]=s[x[jvj+43]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+43];
pile[v[22]]=R; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1738])( );if(v[102]) goto l9;     /*EVLM0(R,jvj+2,jvj+3,V1)*/
V1=pile[WZ3]; 
if((V1!=135)) goto l9;
x[jvj+43]=t[x[jvj+43]];
goto l2;
}
