#include "dx.h"
void ATOME215T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V28=0,V53=0,V29=0,V31=0,V32=0,V30=0,V35=0,V36=0,V34=0,V33=0,V38=0,V37=0,L=0,V94=0,V95=0,V108=0,V99=0,V132=0,V133=0,V146=0,V137=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=109;
x[jvj+1]=20215;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3674&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,R,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=25)) goto l35;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(1358,R,jvj+28)*/
if((x[jvj+28]!=68)) goto l35;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(1101,R,V28)*/
V28=pile[WZ2]; 
if((V28<=1)) goto l35;
x[jvj+29]=vo[14];z[jvj+29]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(642,jvj+29,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,R,jvj+30)*/
pile[v[22]]=103; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,R,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+30,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=485)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+30; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(107,jvj+30,jvj+58)*/
l37:pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+31,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=485)) goto l38;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+61)*/
l1:x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+94]=x[jvj+58] ;z[jvj+94]=z[jvj+58];
l2:if((x[jvj+94]>0)) goto l3;
x[jvj+95]=x[jvj+61] ;z[jvj+95]=z[jvj+61];
l4:if((x[jvj+95]>0)) goto l5;
x[jvj+6]=0 ;z[jvj+6]=0;
l6:if((x[jvj+2]>0)) goto l7;
for(i=x[jvj+6],V29=0;i>0;i=t[i],V29++)  ;
if((V29!=1)) goto l35;
if((x[jvj+6]<=0)) goto l35;
x[jvj+32]=s[x[jvj+6]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=486)) goto l35;
x[jvj+99]=incon;
for(a=x[jvj+58];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l9;
x[jvj+99]=x[jvj+61] ;z[jvj+99]=z[jvj+61];
l30:for(i=x[jvj+99],V31=0;i>0;i=t[i],V31++)  ;
x[jvj+98]=incon;
for(a=x[jvj+61];a>0;a=t[a]) if(s[a]==x[jvj+32]) goto l10;
x[jvj+98]=x[jvj+61] ;z[jvj+98]=z[jvj+61];
l31:for(i=x[jvj+98],V32=0;i>0;i=t[i],V32++)  ;
V30=V31+V32;
x[jvj+9]=0 ;z[jvj+9]=0;
x[jvj+96]=x[jvj+99] ;z[jvj+96]=z[jvj+99];
l11:if((x[jvj+96]>0)) goto l12;
x[jvj+97]=x[jvj+98] ;z[jvj+97]=z[jvj+98];
l15:if((x[jvj+97]>0)) goto l16;
for(i=x[jvj+9],V35=0;i>0;i=t[i],V35++)  ;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+35; 
(*f[887])( );     /*VARND0(jvj+32,jvj+35)*/
pile[WZ1]=jvj+36; 
(*f[1352])( );     /*POSITIF0(jvj+32,jvj+36)*/
if((x[jvj+36]==135)) goto l19;
l35:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+3]=s[x[jvj+94]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+94];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+3)*/
x[jvj+94]=t[x[jvj+94]];
goto l2;
l5:x[jvj+4]=s[x[jvj+95]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+95];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+4)*/
x[jvj+95]=t[x[jvj+95]];
goto l4;
l7:x[jvj+5]=s[x[jvj+2]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+2];
pile[v[22]]=jvj+5; 
(*f[897])( );if(v[102]) goto l8;     /*DGR0(jvj+5,V10)*/
V10=pile[WZ1]; 
if((V10!=V28)) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
l8:x[jvj+2]=t[x[jvj+2]];
goto l6;
l9:x[jvj+99]=x[jvj+58] ;z[jvj+99]=z[jvj+58];
goto l30;
l10:x[jvj+98]=x[jvj+58] ;z[jvj+98]=z[jvj+58];
goto l31;
l12:x[jvj+7]=s[x[jvj+96]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+96];
if((x[jvj+7]==x[jvj+32])) goto l13;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[1353])( );     /*POSOUNUL0(jvj+7,jvj+8)*/
if((x[jvj+8]==135)) goto l39;
l13:x[jvj+96]=t[x[jvj+96]];
goto l11;
l16:x[jvj+11]=s[x[jvj+97]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+97];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[1586])( );     /*NEGOUNUL0(jvj+11,jvj+12)*/
if((x[jvj+12]==135)) goto l18;
l17:x[jvj+97]=t[x[jvj+97]];
goto l15;
l18:pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+11)*/
goto l17;
l19:x[jvj+15]=0 ;z[jvj+15]=0;
l20:if((x[jvj+98]>0)) goto l21;
if((x[jvj+13]==x[jvj+32])) goto l32;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+16; 
(*f[1586])( );     /*NEGOUNUL0(jvj+13,jvj+16)*/
if((x[jvj+16]==135)) goto l52;
l32:for(i=x[jvj+15],V36=0;i>0;i=t[i],V36++)  ;
V34=V35+V36;
V33=V34+1;
if((V30!=V33)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+37)*/
for(i=x[jvj+35],V38=0;i>0;i=t[i],V38++)  ;
V37=V38-1;
pile[v[22]]=jvj+32; pile[WZ1]=V37; pile[WZ2]=jvj+38; 
(*f[3675])( );if(v[102]) goto l35;     /*DECSOUSFAC0(jvj+32,V37,jvj+38)*/
l33:if((x[jvj+38]<=0)) goto l35;
x[jvj+18]=s[x[jvj+38]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+38];
x[jvj+22]=0 ;z[jvj+22]=0;
pile[v[22]]=763; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(763,jvj+18,jvj+19)*/
x[jvj+100]=x[jvj+19] ;z[jvj+100]=z[jvj+19];
l25:if((x[jvj+100]>0)) goto l26;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+22; pile[WZ2]=jvj+39; 
(*f[3179])( );if(v[102]) goto l34;     /*MOINSBAG0(jvj+37,jvj+22,jvj+39)*/
pile[v[22]]=jvj+15; 
(*f[3676])( );if(v[102]) goto l34;     /*MXDIV0(jvj+15,jvj+22,L)*/
L=pile[WZ2]; 
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+101]=x[jvj+39] ;z[jvj+101]=z[jvj+39];
l28:if((x[jvj+101]>0)) goto l29;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+46)*/
pile[v[22]]=V53; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V53,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3674; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3674,246,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=20215; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,20215,218,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ2]=jvj+45; pile[WZ3]=159; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,159,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+40; 
(*f[58])( );     /*TRI3(jvj+47,1,158,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=30; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,30,jvj+48)*/
pile[WZ3]=486; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=111; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,111,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+25; pile[WZ2]=107; pile[WZ3]=jvj+55; 
(*f[301])( );     /*TRI11(jvj+54,jvj+25,107,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+55,22,100,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+50)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=103; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+49,jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+52,jvj+51,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+40; 
(*f[1296])( );     /*NOUVCONTR0(jvj+41,jvj+40)*/
l34:x[jvj+38]=t[x[jvj+38]];
goto l33;
l21:x[jvj+13]=s[x[jvj+98]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+98];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1353])( );     /*POSOUNUL0(jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l23;
l22:x[jvj+98]=t[x[jvj+98]];
goto l20;
l23:pile[v[22]]=jvj+15; pile[WZ1]=jvj+13; 
(*f[522])( );     /*PLUB2(jvj+15,jvj+13)*/
goto l22;
l26:x[jvj+20]=s[x[jvj+100]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+100];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[1290])( );if(v[102]) goto l27;     /*DEPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=jvj+22; 
(*f[522])( );     /*PLUB2(jvj+22,jvj+21)*/
l27:x[jvj+100]=t[x[jvj+100]];
goto l25;
l29:x[jvj+23]=s[x[jvj+101]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+101];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+24)*/
x[jvj+101]=t[x[jvj+101]];
goto l28;
l36:pile[v[22]]=20; pile[WZ1]=jvj+30; pile[WZ2]=jvj+58; 
(*f[409])( );     /*TRI14(20,jvj+30,jvj+58)*/
goto l37;
l38:pile[v[22]]=20; pile[WZ1]=jvj+31; pile[WZ2]=jvj+61; 
(*f[409])( );     /*TRI14(20,jvj+31,jvj+61)*/
goto l1;
l39:pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(130,jvj+7,V94)*/
V94=pile[WZ2]; 
V95=(-V94);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V95; pile[WZ4]=jvj+10; 
(*f[192])( );     /*QUADRI4(100,41,130,V95,jvj+10)*/
l14:pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+10)*/
goto l13;
l43:x[jvj+69]=s[x[jvj+103]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+103];
if((x[jvj+69]==x[jvj+70])) goto l44;
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[68])( );     /*PLUE0(jvj+68,jvj+69)*/
l44:x[jvj+103]=t[x[jvj+103]];
l42:if((x[jvj+103]>0)) goto l43;
x[jvj+102]=x[jvj+68] ;z[jvj+102]=z[jvj+68];
l41:if((x[jvj+102]<=0)) goto l40;
x[jvj+67]=s[x[jvj+102]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+102];
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+66,jvj+67)*/
x[jvj+102]=t[x[jvj+102]];
goto l41;
l45:x[jvj+68]=0 ;z[jvj+68]=0;
x[jvj+103]=x[jvj+77] ;z[jvj+103]=z[jvj+77];
goto l42;
l47:x[jvj+70]=s[x[jvj+104]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+104];
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[760])( );     /*MEMEX0(jvj+70,jvj+71,jvj+72)*/
if((x[jvj+72]==135)) goto l45;
x[jvj+104]=t[x[jvj+104]];
l46:if((x[jvj+104]>0)) goto l47;
l40:pile[v[22]]=jvj+66; pile[WZ1]=jvj+64; 
(*f[299])( );     /*COPEL0(jvj+66,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=107; pile[WZ3]=jvj+62; 
(*f[301])( );     /*TRI11(jvj+63,jvj+64,107,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+62,22,100,jvj+10)*/
goto l14;
l48:x[jvj+105]=t[x[jvj+105]];
l49:if((x[jvj+105]<=0)) goto l13;
x[jvj+71]=s[x[jvj+105]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+105];
pile[v[22]]=130; pile[WZ1]=jvj+71; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+71,V99)*/
V99=pile[WZ2]; 
x[jvj+66]=0 ;z[jvj+66]=0;
V108=(-V99);
x[jvj+73]=d[29];z[jvj+73]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V108; pile[WZ4]=jvj+74; 
(*f[192])( );     /*QUADRI4(100,41,130,V108,jvj+74)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=jvj+66; 
(*f[196])( );     /*PLUF0(jvj+73,jvj+74,jvj+66)*/
x[jvj+104]=x[jvj+77] ;z[jvj+104]=z[jvj+77];
goto l46;
l50:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+7,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]==52)) goto l51;
if((x[jvj+76]!=486)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+77)*/
x[jvj+105]=x[jvj+77] ;z[jvj+105]=z[jvj+77];
goto l49;
l51:pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+7,jvj+10)*/
goto l14;
l52:pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+13,V132)*/
V132=pile[WZ2]; 
V133=(-V132);
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V133; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,V133,jvj+17)*/
l24:if((x[jvj+99]<=0)) goto l32;
x[jvj+13]=s[x[jvj+99]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+99];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+17; 
(*f[522])( );     /*PLUB2(jvj+15,jvj+17)*/
x[jvj+99]=t[x[jvj+99]];
goto l24;
l56:x[jvj+85]=s[x[jvj+107]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+107];
if((x[jvj+85]==x[jvj+86])) goto l57;
pile[v[22]]=jvj+84; pile[WZ1]=jvj+85; 
(*f[68])( );     /*PLUE0(jvj+84,jvj+85)*/
l57:x[jvj+107]=t[x[jvj+107]];
l55:if((x[jvj+107]>0)) goto l56;
x[jvj+106]=x[jvj+84] ;z[jvj+106]=z[jvj+84];
l54:if((x[jvj+106]<=0)) goto l53;
x[jvj+83]=s[x[jvj+106]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+106];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; 
(*f[68])( );     /*PLUE0(jvj+82,jvj+83)*/
x[jvj+106]=t[x[jvj+106]];
goto l54;
l58:x[jvj+84]=0 ;z[jvj+84]=0;
x[jvj+107]=x[jvj+93] ;z[jvj+107]=z[jvj+93];
goto l55;
l60:x[jvj+86]=s[x[jvj+108]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+108];
pile[v[22]]=jvj+86; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[760])( );     /*MEMEX0(jvj+86,jvj+87,jvj+88)*/
if((x[jvj+88]==135)) goto l58;
x[jvj+108]=t[x[jvj+108]];
l59:if((x[jvj+108]>0)) goto l60;
l53:pile[v[22]]=jvj+82; pile[WZ1]=jvj+80; 
(*f[299])( );     /*COPEL0(jvj+82,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+79; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; pile[WZ2]=107; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+79,jvj+80,107,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+78,22,100,jvj+17)*/
goto l24;
l61:x[jvj+109]=t[x[jvj+109]];
l62:if((x[jvj+109]<=0)) goto l32;
x[jvj+87]=s[x[jvj+109]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+109];
pile[v[22]]=130; pile[WZ1]=jvj+87; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(130,jvj+87,V137)*/
V137=pile[WZ2]; 
x[jvj+82]=0 ;z[jvj+82]=0;
V146=(-V137);
x[jvj+89]=d[29];z[jvj+89]=0;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V146; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,V146,jvj+90)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+90; pile[WZ2]=jvj+82; 
(*f[196])( );     /*PLUF0(jvj+89,jvj+90,jvj+82)*/
x[jvj+108]=x[jvj+93] ;z[jvj+108]=z[jvj+93];
goto l59;
l63:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,jvj+13,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+91,jvj+92)*/
if((x[jvj+92]==52)) goto l64;
if((x[jvj+92]!=486)) goto l32;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+93; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+93)*/
x[jvj+109]=x[jvj+93] ;z[jvj+109]=z[jvj+93];
goto l62;
l64:pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+13,jvj+17)*/
goto l24;
}
