#include "dx.h"
void CANN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V12=0,V15=0,V23=0,V47=0,V54=0,V55=0,V58=0,V57=0,V68=0,V69=0,V75=0,V72=0,V76=0,W=0,V61=0,V86=0,V87=0,V45=0,V41=0,V=0,V26=0,V83=0;
int BL,TL,E;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=100;
x[jvj+1]=10013;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1660&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; TL=pile[v[22]+1]; E=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(250,158,jvj+3)*/
pile[v[22]]=279; pile[WZ1]=TL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(279,TL,jvj+8)*/
pile[v[22]]=302; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(302,TL,jvj+9)*/
l5:if((x[jvj+9]>0)) goto l6;
pile[v[22]]=252; pile[WZ1]=jvj+3; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(252,jvj+3,jvj+56)*/
pile[v[22]]=TL; pile[WZ1]=279; 
(*f[34])( );     /*CHGC0(TL,279,jvj+56)*/
x[jvj+100]=w[39][8];
l50:if((x[jvj+56]>0)) goto l51;
if(x[BL]==10547||x[BL]==10169) goto l64;
x[jvj+95]=x[jvj+8] ;z[jvj+95]=z[jvj+8];
l62:if((x[jvj+95]<=0)) goto l64;
x[jvj+63]=s[x[jvj+95]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+95];
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+63,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(109,jvj+63,jvj+64)*/
pile[v[22]]=252; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(252,jvj+3,jvj+14)*/
x[jvj+79]=x[jvj+14] ;z[jvj+79]=z[jvj+14];
l11:if((x[jvj+79]>0)) goto l12;
pile[v[22]]=V26; pile[WZ1]=BL; pile[WZ2]=jvj+64; 
(*f[278])( );     /*VK0(V26,BL,jvj+64)*/
l63:x[jvj+95]=t[x[jvj+95]];
goto l62;
l2:x[jvj+77]=t[x[jvj+77]];
l1:if((x[jvj+77]<=0)) goto l3;
x[jvj+5]=s[x[jvj+77]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+77];
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+5,V12)*/
V12=pile[WZ2]; 
if((V12!=V13)) goto l2;
pile[v[22]]=109; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+74])) goto l2;
x[jvj+98]=x[jvj+5] ;z[jvj+98]=z[jvj+5];
l8:x[jvj+78]=x[jvj+98] ;z[jvj+78]=z[jvj+98];
x[jvj+75]=incon;
if((x[jvj+78]!=250)) goto l4;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+74; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+75; 
(*f[192])( );     /*QUADRI4(109,jvj+74,130,V15,jvj+75)*/
l9:x[jvj+7]=x[jvj+75] ;z[jvj+7]=z[jvj+75];
if((x[jvj+78]!=250)) goto l10;
pile[v[22]]=jvj+3; pile[WZ1]=252; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,252,jvj+7)*/
l10:pile[v[22]]=jvj+7; pile[WZ1]=159; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+2)*/
l7:x[jvj+9]=t[x[jvj+9]];
goto l5;
l3:x[jvj+98]=250 ;z[jvj+98]=250;
goto l8;
l4:x[jvj+75]=x[jvj+78] ;z[jvj+75]=z[jvj+78];
goto l9;
l6:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=102; pile[WZ1]=jvj+10; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+10,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+2,jvj+11)*/
if((x[jvj+11]!=39)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+2,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
x[jvj+74]=x[jvj+13] ;z[jvj+74]=z[jvj+13];
x[jvj+98]=incon;
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+2,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=252; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(252,jvj+3,jvj+4)*/
x[jvj+77]=x[jvj+4] ;z[jvj+77]=z[jvj+4];
goto l1;
l12:x[jvj+15]=s[x[jvj+79]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+79];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+15,V23)*/
V23=pile[WZ2]; 
if((V23!=V26)) goto l13;
pile[v[22]]=109; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(109,jvj+15,jvj+16)*/
if((x[jvj+16]==x[jvj+64])) goto l63;
l13:x[jvj+79]=t[x[jvj+79]];
goto l11;
l15:x[jvj+19]=s[x[jvj+80]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+80];
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+19,V47)*/
V47=pile[WZ2]; 
if((V47!=V)) goto l16;
x[jvj+94]=x[jvj+19] ;z[jvj+94]=z[jvj+19];
l61:x[jvj+54]=x[jvj+93] ;z[jvj+54]=z[jvj+93];
x[jvj+30]=x[jvj+94] ;z[jvj+30]=z[jvj+94];
pile[v[22]]=158; pile[WZ1]=jvj+30; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(158,jvj+30,jvj+52)*/
if((x[jvj+52]==x[jvj+54])) goto l28;
pile[v[22]]=140; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,jvj+30,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=10013; pile[WZ1]=V61; pile[WZ2]=(-4383); pile[WZ3]=jvj+53; pile[WZ4]=jvj+17; pile[WZ5]=jvj+54; 
(*f[1854])( );     /*FAUTE9(10013,V61,(-4383),jvj+53,jvj+17,jvj+54)*/
l28:x[jvj+76]=incon;
if((x[jvj+30]==250)) goto l77;
pile[v[22]]=158; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(158,jvj+30,jvj+31)*/
x[jvj+76]=(-99999998);
l58:x[jvj+91]=t[x[jvj+91]];
l57:if((x[jvj+91]<=0)) goto l56;
x[jvj+23]=s[x[jvj+91]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+91];
pile[v[22]]=103; pile[WZ1]=jvj+23; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+23,jvj+62)*/
pile[v[22]]=140; pile[WZ1]=jvj+62; 
(*f[44])( );if(v[102]) goto l58;     /*FNDC1(140,jvj+62,V41)*/
V41=pile[WZ2]; 
x[jvj+92]=incon;
pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+23,jvj+27)*/
pile[v[22]]=140; pile[WZ1]=jvj+27; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+27,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(283,TL,jvj+28)*/
x[jvj+82]=x[jvj+28] ;z[jvj+82]=z[jvj+28];
l25:if((x[jvj+82]<=0)) goto l27;
x[jvj+29]=s[x[jvj+82]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+82];
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+29,V57)*/
V57=pile[WZ2]; 
if((V57!=V58)) goto l26;
x[jvj+92]=x[jvj+29] ;z[jvj+92]=z[jvj+29];
l59:V=V41;
x[jvj+21]=x[jvj+92] ;z[jvj+21]=z[jvj+92];
x[jvj+93]=incon;
pile[v[22]]=158; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(158,jvj+21,jvj+22)*/
x[jvj+99]=x[jvj+22] ;z[jvj+99]=z[jvj+22];
x[jvj+93]=x[jvj+99] ;z[jvj+93]=z[jvj+99];
l18:pile[v[22]]=102; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+23,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+24,jvj+25)*/
if(x[jvj+25]!=20&&x[jvj+25]!=41&&x[jvj+25]!=89&&x[jvj+25]!=96&&x[jvj+25]!=1317) goto l19;
x[jvj+93]=x[jvj+25] ;z[jvj+93]=z[jvj+25];
l19:if(x[jvj+61]!=10016&&x[jvj+61]!=10144&&x[jvj+61]!=10102&&x[jvj+61]!=10672&&x[jvj+61]!=10462&&x[jvj+61]!=10546&&x[jvj+61]!=10221&&x[jvj+61]!=10064&&x[jvj+61]!=10062&&x[jvj+61]!=10545&&x[jvj+61]!=10023&&x[jvj+61]!=10156&&x[jvj+61]!=10212) goto l23;
pile[v[22]]=256; pile[WZ1]=100; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(256,100,jvj+26)*/
x[jvj+81]=x[jvj+26] ;z[jvj+81]=z[jvj+26];
l20:if((x[jvj+81]<=0)) goto l23;
x[jvj+20]=s[x[jvj+81]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+81];
pile[v[22]]=140; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+20,V54)*/
V54=pile[WZ2]; 
if((V==V54)) goto l22;
l17:pile[v[22]]=110; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(110,jvj+20,V55)*/
V55=pile[WZ2]; 
if((V==V55)) goto l22;
l21:x[jvj+81]=t[x[jvj+81]];
goto l20;
l16:x[jvj+80]=t[x[jvj+80]];
l14:if((x[jvj+80]>0)) goto l15;
x[jvj+94]=250 ;z[jvj+94]=250;
goto l61;
l22:x[jvj+93]=x[jvj+20] ;z[jvj+93]=z[jvj+20];
l60:if((x[jvj+93]==(-99999998))) goto l58;
x[jvj+94]=incon;
pile[v[22]]=283; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(283,jvj+17,jvj+18)*/
x[jvj+80]=x[jvj+18] ;z[jvj+80]=z[jvj+18];
goto l14;
l23:if(x[jvj+93]==incon) goto l24;
goto l60;
l24:x[jvj+93]=(-99999998);
goto l58;
l26:x[jvj+82]=t[x[jvj+82]];
goto l25;
l27:x[jvj+92]=250 ;z[jvj+92]=250;
goto l59;
l29:x[jvj+76]=x[jvj+30] ;z[jvj+76]=z[jvj+30];
l49:if((x[jvj+76]==(-99999998))) goto l58;
x[jvj+40]=x[jvj+76] ;z[jvj+40]=z[jvj+76];
if((x[jvj+30]!=250)) goto l36;
pile[v[22]]=jvj+17; pile[WZ1]=283; pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+17,283,jvj+40)*/
l36:pile[v[22]]=176; pile[WZ1]=jvj+21; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(176,jvj+21,jvj+41)*/
pile[v[22]]=327; pile[WZ1]=317; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(327,317,jvj+32)*/
x[jvj+83]=x[jvj+32] ;z[jvj+83]=z[jvj+32];
l30:if((x[jvj+83]>0)) goto l31;
pile[v[22]]=jvj+40; pile[WZ1]=176; pile[WZ2]=jvj+41; 
(*f[35])( );     /*CHGC1(jvj+40,176,jvj+41)*/
l37:pile[v[22]]=313; pile[WZ1]=jvj+17; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(313,jvj+17,jvj+42)*/
x[jvj+85]=x[jvj+42] ;z[jvj+85]=z[jvj+42];
l38:if((x[jvj+85]>0)) goto l39;
x[jvj+87]=x[jvj+59] ;z[jvj+87]=z[jvj+59];
l44:if((x[jvj+87]>0)) goto l45;
pile[v[22]]=jvj+17; pile[WZ1]=10013; 
(*f[273])( );     /*PLUK1(jvj+17,10013)*/
pile[v[22]]=jvj+40; pile[WZ1]=158; pile[WZ2]=jvj+54; 
(*f[35])( );     /*CHGC1(jvj+40,158,jvj+54)*/
goto l58;
l31:x[jvj+33]=s[x[jvj+83]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+83];
pile[v[22]]=109; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(109,jvj+33,jvj+34)*/
if((x[jvj+34]!=x[jvj+61])) goto l32;
pile[v[22]]=273; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(273,jvj+33,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==V) goto l37;
l32:x[jvj+83]=t[x[jvj+83]];
goto l30;
l34:x[jvj+38]=s[x[jvj+84]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+84];
pile[v[22]]=140; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l35;     /*FNDC1(140,jvj+38,V75)*/
V75=pile[WZ2]; 
if((V75!=W)) goto l35;
pile[v[22]]=158; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(158,jvj+38,jvj+39)*/
l48:x[jvj+88]=t[x[jvj+88]];
l46:if((x[jvj+88]>0)) goto l47;
x[jvj+87]=t[x[jvj+87]];
goto l44;
l35:x[jvj+84]=t[x[jvj+84]];
l33:if((x[jvj+84]>0)) goto l34;
pile[v[22]]=TL; pile[WZ1]=159; 
(*f[273])( );     /*PLUK1(TL,159)*/
goto l48;
l39:x[jvj+43]=s[x[jvj+85]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+85];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[354])( );     /*ORIPOS0(jvj+43,jvj+44)*/
pile[v[22]]=365; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(365,jvj+44,jvj+45)*/
x[jvj+86]=x[jvj+45] ;z[jvj+86]=z[jvj+45];
l40:if((x[jvj+86]>0)) goto l41;
x[jvj+85]=t[x[jvj+85]];
goto l38;
l41:x[jvj+36]=s[x[jvj+86]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+86];
if((x[jvj+43]!=x[BL])) goto l43;
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+36,V68)*/
V68=pile[WZ2]; 
pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,TL,V69)*/
V69=pile[WZ2]; 
if((V68==V69)) goto l42;
l43:pile[v[22]]=jvj+36; pile[WZ1]=313; 
(*f[273])( );     /*PLUK1(jvj+36,313)*/
l42:x[jvj+86]=t[x[jvj+86]];
goto l40;
l45:x[jvj+47]=s[x[jvj+87]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+87];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(jvj+46,jvj+47,jvj+48)*/
x[jvj+88]=x[jvj+48] ;z[jvj+88]=z[jvj+48];
goto l46;
l47:x[jvj+49]=s[x[jvj+88]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+88];
pile[v[22]]=103; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+49,jvj+50)*/
pile[v[22]]=140; pile[WZ1]=jvj+50; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+50,V72)*/
V72=pile[WZ2]; 
if((V72!=V)) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+49; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+49,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+51,V76)*/
V76=pile[WZ2]; 
W=V76;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(283,TL,jvj+37)*/
x[jvj+84]=x[jvj+37] ;z[jvj+84]=z[jvj+37];
goto l33;
l51:x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=109; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(109,jvj+57,jvj+58)*/
pile[v[22]]=159; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(159,jvj+57,jvj+59)*/
x[jvj+61]=x[jvj+58] ;z[jvj+61]=z[jvj+58];
x[jvj+89]=x[jvj+100] ;z[jvj+89]=z[jvj+100];
l53:if((x[jvj+89]<=0)) goto l52;
x[jvj+46]=s[x[jvj+89]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+89];
x[jvj+90]=x[jvj+59] ;z[jvj+90]=z[jvj+59];
l54:if((x[jvj+90]>0)) goto l55;
x[jvj+89]=t[x[jvj+89]];
goto l53;
l52:x[jvj+56]=t[x[jvj+56]];
goto l50;
l55:x[jvj+53]=s[x[jvj+90]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+90];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+53; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(jvj+46,jvj+53,jvj+60)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+53,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=jvj+61; pile[WZ1]=V45; pile[WZ2]=jvj+17; 
(*f[133])( );if(v[102]) goto l56;     /*TLDEBL1(jvj+61,V45,jvj+17)*/
x[jvj+91]=x[jvj+60] ;z[jvj+91]=z[jvj+60];
goto l57;
l56:x[jvj+90]=t[x[jvj+90]];
goto l54;
l64:pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(283,TL,jvj+65)*/
pile[v[22]]=313; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(313,TL,jvj+66)*/
l65:if((x[jvj+65]>0)) goto l66;
pile[v[22]]=279; pile[WZ1]=TL; pile[WZ2]=jvj+72; 
(*f[33])( );     /*FNDE0(279,TL,jvj+72)*/
l74:if((x[jvj+72]>0)) goto l75;
l76:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l66:x[jvj+67]=s[x[jvj+65]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+65];
pile[v[22]]=140; pile[WZ1]=jvj+67; 
(*f[44])( );if(v[102]) goto l67;     /*FNDC1(140,jvj+67,V83)*/
V83=pile[WZ2]; 
for(a=x[E];a>0;a=t[a]) if(s[a]==V83) goto l68;
l67:x[jvj+65]=t[x[jvj+65]];
goto l65;
l68:pile[v[22]]=158; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(158,jvj+67,jvj+68)*/
x[jvj+96]=x[jvj+66] ;z[jvj+96]=z[jvj+66];
l69:if((x[jvj+96]<=0)) goto l67;
x[jvj+69]=s[x[jvj+96]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+96];
pile[v[22]]=jvj+69; pile[WZ1]=jvj+70; 
(*f[354])( );     /*ORIPOS0(jvj+69,jvj+70)*/
pile[v[22]]=365; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(365,jvj+70,jvj+71)*/
x[jvj+97]=x[jvj+71] ;z[jvj+97]=z[jvj+71];
l70:if((x[jvj+97]>0)) goto l71;
x[jvj+96]=t[x[jvj+96]];
goto l69;
l71:x[jvj+55]=s[x[jvj+97]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+97];
if((x[jvj+69]!=x[BL])) goto l73;
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,jvj+55,V86)*/
V86=pile[WZ2]; 
pile[WZ1]=TL; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(130,TL,V87)*/
V87=pile[WZ2]; 
if((V86==V87)) goto l72;
l73:pile[v[22]]=jvj+55; pile[WZ1]=283; 
(*f[273])( );     /*PLUK1(jvj+55,283)*/
l72:x[jvj+97]=t[x[jvj+97]];
goto l70;
l75:x[jvj+73]=s[x[jvj+72]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+72];
pile[v[22]]=159; pile[WZ1]=jvj+73; 
(*f[71])( );     /*ENLV0(159,jvj+73)*/
x[jvj+72]=t[x[jvj+72]];
goto l74;
l77:pile[v[22]]=V; pile[WZ1]=140; pile[WZ2]=jvj+76; 
(*f[329])( );     /*TRI13(V,140,jvj+76)*/
goto l49;
}
