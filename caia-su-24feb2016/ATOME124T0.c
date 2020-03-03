#include "dx.h"
void ATOME124T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V25=0,V48=0,V28=0,V29=0,V27=0,V31=0,V32=0,V30=0,V26=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=75;
x[jvj+1]=20124;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3619&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,R,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=25)) goto l22;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1358,R,jvj+28)*/
if((x[jvj+28]!=68)) goto l22;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,R,V23)*/
V23=pile[WZ2]; 
if((V23<=1)) goto l22;
if((V23>4)) goto l22;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1101,R,V25)*/
V25=pile[WZ2]; 
if((V25<=1)) goto l22;
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+29,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,R,jvj+30)*/
pile[v[22]]=103; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,R,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+30,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=485)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+66)*/
l18:for(i=x[jvj+66],V28=0;i>0;i=t[i],V28++)  ;
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(111,jvj+31,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]!=485)) goto l24;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+69)*/
l19:for(i=x[jvj+69],V29=0;i>0;i=t[i],V29++)  ;
V27=V28+V29;
pile[v[22]]=R; pile[WZ1]=jvj+32; 
(*f[887])( );     /*VARND0(R,jvj+32)*/
l20:if((x[jvj+32]<=0)) goto l22;
x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[1290])( );if(v[102]) goto l21;     /*DEPEXP0(jvj+33,jvj+34)*/
x[jvj+6]=x[jvj+34] ;z[jvj+6]=z[jvj+34];
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+71]=x[jvj+66] ;z[jvj+71]=z[jvj+66];
l2:if((x[jvj+71]>0)) goto l3;
for(i=x[jvj+10],V31=0;i>0;i=t[i],V31++)  ;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+35; 
(*f[1446])( );     /*NONUL0(jvj+6,jvj+35)*/
if((x[jvj+35]==135)) goto l6;
l21:x[jvj+32]=t[x[jvj+32]];
goto l20;
l3:x[jvj+2]=s[x[jvj+71]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+71];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+6,jvj+9)*/
if((x[jvj+9]==135)) goto l5;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+70]=x[jvj+5] ;z[jvj+70]=z[jvj+5];
l1:if((x[jvj+70]<=0)) goto l4;
x[jvj+7]=s[x[jvj+70]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+70];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l5;
x[jvj+70]=t[x[jvj+70]];
goto l1;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+2)*/
l4:x[jvj+71]=t[x[jvj+71]];
goto l2;
l6:x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+73]=x[jvj+69] ;z[jvj+73]=z[jvj+69];
l8:if((x[jvj+73]>0)) goto l9;
for(i=x[jvj+18],V32=0;i>0;i=t[i],V32++)  ;
V30=V31+V32;
V26=V27-V30;
if((V26<=0)) goto l21;
if((V26>2)) goto l21;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+36; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+36)*/
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+74]=x[jvj+66] ;z[jvj+74]=z[jvj+66];
l12:if((x[jvj+74]>0)) goto l13;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+37; 
(*f[299])( );     /*COPEL0(jvj+19,jvj+37)*/
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+21]=d[118];z[jvj+21]=0;
x[jvj+75]=x[jvj+69] ;z[jvj+75]=z[jvj+69];
l15:if((x[jvj+75]>0)) goto l16;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+38; 
(*f[299])( );     /*COPEL0(jvj+25,jvj+38)*/
x[jvj+53]=x[jvj+36] ;z[jvj+53]=z[jvj+36];
x[jvj+59]=x[jvj+37] ;z[jvj+59]=z[jvj+37];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+47)*/
pile[v[22]]=V48; pile[WZ1]=858; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V48,858,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,v[13],642,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=3619; pile[WZ2]=246; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,3619,246,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=20124; pile[WZ2]=218; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+45,20124,218,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=(-20); pile[WZ2]=jvj+46; pile[WZ3]=159; pile[WZ4]=jvj+48; 
(*f[298])( );     /*TRIENS1(jvj+47,(-20),jvj+46,159,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+48,1,158,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=408; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,408,jvj+49)*/
pile[WZ3]=485; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+54)*/
pile[WZ4]=jvj+57; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+59; pile[WZ2]=107; pile[WZ3]=jvj+60; 
(*f[301])( );     /*TRI11(jvj+58,jvj+59,107,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+60,22,100,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+38; pile[WZ2]=107; pile[WZ3]=jvj+63; 
(*f[301])( );     /*TRI11(jvj+62,jvj+38,107,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+63,22,100,jvj+56)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+54; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+54,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=107; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+55)*/
pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+56)*/
pile[v[22]]=jvj+49; pile[WZ1]=111; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+49,111,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+50,jvj+51,103,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+53; pile[WZ4]=jvj+52; pile[WZ5]=jvj+40; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+53,jvj+52,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+39; 
(*f[1296])( );     /*NOUVCONTR0(jvj+40,jvj+39)*/
goto l21;
l9:x[jvj+11]=s[x[jvj+73]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+73];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+6; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+11,jvj+6,jvj+17)*/
if((x[jvj+17]==135)) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=486)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+11,jvj+14)*/
x[jvj+72]=x[jvj+14] ;z[jvj+72]=z[jvj+14];
l7:if((x[jvj+72]<=0)) goto l10;
x[jvj+15]=s[x[jvj+72]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+72];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l11;
x[jvj+72]=t[x[jvj+72]];
goto l7;
l11:pile[v[22]]=jvj+18; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+18,jvj+11)*/
l10:x[jvj+73]=t[x[jvj+73]];
goto l8;
l13:x[jvj+20]=s[x[jvj+74]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+74];
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+20]) goto l14;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+20)*/
l14:x[jvj+74]=t[x[jvj+74]];
goto l12;
l16:x[jvj+22]=s[x[jvj+75]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+75];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==x[jvj+22]) goto l17;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=111; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,111,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+42; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+42,jvj+24)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[196])( );     /*PLUF0(jvj+21,jvj+24,jvj+25)*/
l17:x[jvj+75]=t[x[jvj+75]];
goto l15;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l23:pile[v[22]]=20; pile[WZ1]=jvj+30; pile[WZ2]=jvj+66; 
(*f[409])( );     /*TRI14(20,jvj+30,jvj+66)*/
goto l18;
l24:pile[v[22]]=20; pile[WZ1]=jvj+31; pile[WZ2]=jvj+69; 
(*f[409])( );     /*TRI14(20,jvj+31,jvj+69)*/
goto l19;
}
