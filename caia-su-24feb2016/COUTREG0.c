#include "dx.h"
void COUTREG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,V36=0,V32=0,V12=0,V56=0,V6=0,V16=0,V21=0,N=0,V35=0,V23=0;
int R;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=31;
x[jvj+1]=11160;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1553&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(R,274,Z)*/
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1142,R,jvj+17)*/
if((x[jvj+17]!=68)) goto l35;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,4,36)*/
l35:pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(869,R,jvj+18)*/
if((x[jvj+18]!=769)) goto l37;
pile[v[22]]=607; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,603,Z,5,36)*/
pile[v[22]]=R; 
(*f[1741])( );if(v[102]) goto l37;     /*Z277Z0(R,V12)*/
V12=pile[WZ1]; 
x[jvj+19]=incon;
if((V12==2)) goto l13;
if((V12<3)) goto l37;
if((V12<=4)) goto l14;
if((V12<=6)) goto l15;
if((V12<=9)) goto l16;
if((V12<=12)) goto l17;
x[jvj+19]=607 ;z[jvj+19]=607;
l36:pile[v[22]]=jvj+19; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+19,602,Z,7,52)*/
l37:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(868,R,jvj+20)*/
if(x[jvj+20]!=55&&x[jvj+20]!=1029) goto l39;
x[jvj+21]=incon;
if((x[jvj+18]==484)) goto l10;
if((x[jvj+18]!=25)) goto l11;
x[jvj+21]=603 ;z[jvj+21]=603;
l11:if(x[jvj+18]==27||x[jvj+18]==28||x[jvj+18]==29||x[jvj+18]==30) goto l12;
if(x[jvj+21]==incon) goto l39;
if((x[jvj+21]!=(-99999998))) goto l38;
l39:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(868,R,jvj+22)*/
if((x[jvj+22]!=48)) goto l6;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=14; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,14,36)*/
l6:x[jvj+23]=incon;
if((x[jvj+22]==25)) goto l7;
if((x[jvj+22]==26)) goto l8;
if((x[jvj+22]==55)) goto l9;
if((x[jvj+22]==625)) goto l9;
x[jvj+23]=206 ;z[jvj+23]=206;
l40:pile[v[22]]=jvj+23; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+23,607,Z,2,36)*/
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(1101,R,V56)*/
V56=pile[WZ2]; 
if((V56!=1)) goto l42;
x[jvj+24]=incon;
if((x[jvj+22]!=25)) goto l33;
x[jvj+24]=607 ;z[jvj+24]=607;
l33:if(x[jvj+22]==29||x[jvj+22]==30||x[jvj+22]==27||x[jvj+22]==28||x[jvj+22]==408) goto l34;
if(x[jvj+24]==incon) goto l42;
if((x[jvj+24]!=(-99999998))) goto l41;
l42:if((x[jvj+22]==625)) goto l43;
if((x[jvj+22]!=408)) goto l47;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,R,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=408)) goto l32;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,R,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==484)) goto l47;
l32:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,R,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=408)) goto l46;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(102,R,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]==41)) goto l47;
l46:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=13; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,13,52)*/
l47:pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(1188,R,jvj+26)*/
if((x[jvj+26]!=68)) goto l48;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=15; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,15,52)*/
l48:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(870,R,V21)*/
V21=pile[WZ2]; 
x[jvj+27]=incon;
if((V21==4)) goto l20;
if((V21<5)) goto l24;
if((V21<=6)) goto l21;
if((V21<=8)) goto l22;
x[jvj+27]=607 ;z[jvj+27]=607;
l49:pile[v[22]]=jvj+27; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=9; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+27,607,Z,9,52)*/
l24:x[jvj+28]=incon;
if((V21<10)) goto l1;
if((V21<=11)) goto l25;
if((V21<=13)) goto l26;
if((V21<=15)) goto l27;
x[jvj+28]=607 ;z[jvj+28]=607;
l50:pile[v[22]]=jvj+28; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=11; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+28,607,Z,11,52)*/
l1:x[jvj+29]=incon;
if((V21<=2)) goto l2;
if((V21<=4)) goto l3;
if((V21<=6)) goto l4;
if((V21<=8)) goto l5;
x[jvj+29]=606 ;z[jvj+29]=606;
l51:pile[v[22]]=jvj+29; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+29,607,Z,1,36)*/
l28:V32=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=55)) goto l29;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(107,R,jvj+8)*/
for(i=x[jvj+8],V36=0;i>0;i=t[i],V36++)  ;
if((V36<=0)) goto l29;
V32=V36;
l52:pile[v[22]]=R; 
(*f[1742])( );if(v[102]) goto l54;     /*Z278Z0(R,N)*/
N=pile[WZ1]; 
if((N<=0)) goto l54;
V35=N/V32;
x[jvj+30]=incon;
if((V35==1)) goto l30;
if((V35<2)) goto l54;
if((V35<=3)) goto l31;
x[jvj+30]=607 ;z[jvj+30]=607;
l53:pile[v[22]]=jvj+30; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=12; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+30,607,Z,12,52)*/
l54:pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(678,R,jvj+31)*/
for(i=x[jvj+31],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=1)) goto l56;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
l23:if((x[jvj+3]<=0)) goto l56;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=480; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(480,jvj+4,jvj+5)*/
for(i=x[jvj+5],V27=0;i>0;i=t[i],V27++)  ;
if((V27>1)) goto l55;
x[jvj+3]=t[x[jvj+3]];
goto l23;
l2:x[jvj+29]=607 ;z[jvj+29]=607;
goto l51;
l3:x[jvj+29]=603 ;z[jvj+29]=603;
goto l51;
l4:x[jvj+29]=604 ;z[jvj+29]=604;
goto l51;
l5:x[jvj+29]=605 ;z[jvj+29]=605;
goto l51;
l7:x[jvj+23]=607 ;z[jvj+23]=607;
goto l40;
l8:x[jvj+23]=605 ;z[jvj+23]=605;
goto l40;
l9:x[jvj+23]=602 ;z[jvj+23]=602;
goto l40;
l10:x[jvj+21]=607 ;z[jvj+21]=607;
goto l11;
l12:x[jvj+21]=604 ;z[jvj+21]=604;
l38:pile[v[22]]=jvj+21; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+21,602,Z,6,36)*/
goto l39;
l13:x[jvj+19]=606 ;z[jvj+19]=606;
goto l36;
l14:x[jvj+19]=604 ;z[jvj+19]=604;
goto l36;
l15:x[jvj+19]=206 ;z[jvj+19]=206;
goto l36;
l16:x[jvj+19]=603 ;z[jvj+19]=603;
goto l36;
l17:x[jvj+19]=602 ;z[jvj+19]=602;
goto l36;
l18:x[jvj+25]=606 ;z[jvj+25]=606;
l45:pile[v[22]]=jvj+25; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+25,603,Z,8,36)*/
goto l47;
l19:x[jvj+25]=603 ;z[jvj+25]=603;
goto l45;
l20:x[jvj+27]=606 ;z[jvj+27]=606;
goto l49;
l21:x[jvj+27]=604 ;z[jvj+27]=604;
goto l49;
l22:x[jvj+27]=603 ;z[jvj+27]=603;
goto l49;
l25:x[jvj+28]=605 ;z[jvj+28]=605;
goto l50;
l26:x[jvj+28]=206 ;z[jvj+28]=206;
goto l50;
l27:x[jvj+28]=602 ;z[jvj+28]=602;
goto l50;
l29:V32=1;
goto l52;
l30:x[jvj+30]=606 ;z[jvj+30]=606;
goto l53;
l31:x[jvj+30]=603 ;z[jvj+30]=603;
goto l53;
l34:x[jvj+24]=206 ;z[jvj+24]=206;
l41:pile[v[22]]=jvj+24; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=16; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+24,607,Z,16,36)*/
goto l42;
l43:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6>3)) goto l44;
pile[v[22]]=R; 
(*f[1741])( );if(v[102]) goto l47;     /*Z277Z0(R,V16)*/
V16=pile[WZ1]; 
x[jvj+25]=incon;
if((V16<=1)) goto l18;
if((V16<=3)) goto l19;
x[jvj+25]=607 ;z[jvj+25]=607;
goto l45;
l44:pile[v[22]]=616; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(616,607,Z,3,52)*/
goto l47;
l55:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=10; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,10,36)*/
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
