#include "dx.h"
void EXECRULE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V17=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
x[jvj+1]=11713;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==572&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V15=sepnouv+1;
l1:if((V15<=sepfacts)) goto l3;
l14:x[jvj+1]=incon; v[0]=jvj; return;
l2:V15++;
goto l1;
l3:V17=r[V15];
if((V17!=1)) goto l2;
x[jvj+4]=V15 ;z[jvj+4]=(V15<=sepcte) ? V15 : 0;
pile[v[22]]=1689; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1689,jvj+4,jvj+5)*/
x[jvj+45]=x[jvj+5] ;z[jvj+45]=z[jvj+5];
l4:if((x[jvj+45]<=0)) goto l2;
x[jvj+6]=s[x[jvj+45]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+45];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=1736)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+6,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==25)) goto l6;
if((x[jvj+9]==1634)) goto l8;
if((x[jvj+9]!=1686)) goto l5;
pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+27)*/
pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+27,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+27,jvj+30)*/
if((x[jvj+30]==22)) goto l13;
if((x[jvj+30]==1617)) goto l13;
l5:x[jvj+45]=t[x[jvj+45]];
goto l4;
l6:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+10)*/
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+10,jvj+13)*/
if((x[jvj+13]==22)) goto l7;
if((x[jvj+13]==1617)) goto l7;
goto l5;
l7:x[jvj+14]=x[jvj+12] ;z[jvj+14]=z[jvj+12];
pile[v[22]]=jvj+14; pile[WZ1]=1763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+14,1763,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1770; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,1770,jvj+35)*/
pile[WZ3]=jvj+14; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+14,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1678; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,1678,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=1718; pile[WZ2]=111; pile[WZ3]=jvj+35; pile[WZ4]=jvj+34; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,1718,111,jvj+35,jvj+34,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=1762; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+4,1762,jvj+15)*/
goto l5;
l8:pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+6,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+17,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+16,jvj+19)*/
if((x[jvj+19]==22)) goto l9;
if((x[jvj+19]==1617)) goto l9;
l10:pile[v[22]]=103; pile[WZ1]=jvj+6; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+6,jvj+22)*/
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+2]=x[jvj+24] ;z[jvj+2]=z[jvj+24];
pile[v[22]]=1773; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1773,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l5;
l11:pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+22,jvj+25)*/
if((x[jvj+25]==22)) goto l12;
if((x[jvj+25]==1617)) goto l12;
goto l5;
l9:x[jvj+20]=x[jvj+18] ;z[jvj+20]=z[jvj+18];
pile[v[22]]=jvj+20; pile[WZ1]=1763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+20,1763,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1761; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,1761,jvj+38)*/
pile[WZ3]=jvj+20; pile[WZ4]=jvj+36; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+20,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=1678; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+36,1678,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=1718; pile[WZ2]=111; pile[WZ3]=jvj+38; pile[WZ4]=jvj+37; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(100,1718,111,jvj+38,jvj+37,jvj+21)*/
pile[v[22]]=jvj+4; pile[WZ1]=1762; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+4,1762,jvj+21)*/
goto l10;
l12:pile[v[22]]=jvj+2; pile[WZ1]=1763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+2,1763,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1619; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,1619,jvj+41)*/
pile[WZ3]=jvj+2; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=1678; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,1678,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=1718; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+40; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,1718,111,jvj+41,jvj+40,jvj+26)*/
pile[v[22]]=jvj+4; pile[WZ1]=1762; pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+4,1762,jvj+26)*/
goto l5;
l13:x[jvj+31]=x[jvj+29] ;z[jvj+31]=z[jvj+29];
pile[v[22]]=jvj+31; pile[WZ1]=1763; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+31,1763,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1761; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,1761,jvj+44)*/
pile[WZ3]=jvj+31; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+31,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=1678; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,1678,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=1718; pile[WZ2]=111; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,1718,111,jvj+44,jvj+43,jvj+32)*/
pile[v[22]]=jvj+4; pile[WZ1]=1762; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+4,1762,jvj+32)*/
goto l5;
}
