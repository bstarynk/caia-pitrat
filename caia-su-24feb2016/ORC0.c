#include "dx.h"
void ORC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V101=0,V113=0,X=0,V88=0,V36=0,V34=0,W=0,V11=0,V18=0,V16=0,V=0,V26=0,V47=0,V72=0,Y=0,F=0,V89=0,V64=0,V66=0,V77=0,V265=0,V364=0,V333=0,V343=0,V341=0,V267=0,V354=0,V360=0,V118=0,V260=0,V209=0,V207=0,VV=0,V189=0,V191=0,V199=0,V241=0,V239=0,WW=0,V221=0,V223=0,V231=0,V256=0,V114=0,V392=0,V395=0,V398=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=140;
x[jvj+1]=10696;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2088&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(107,R,jvj+2)*/
x[jvj+119]=x[jvj+2] ;z[jvj+119]=z[jvj+2];
l2:if((x[jvj+119]>0)) goto l3;
l56:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+40]=96 ;z[jvj+40]=96;
l18:pile[v[22]]=245; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(245,jvj+40,jvj+41)*/
Y=x[jvj+34];
F=x[jvj+41];
V89=Y;
x[jvj+125]=x[jvj+2] ;z[jvj+125]=z[jvj+2];
l19:if((x[jvj+125]<=0)) goto l26;
x[jvj+42]=s[x[jvj+125]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+125];
if((x[jvj+3]==x[jvj+42])) goto l20;
if((x[jvj+34]==x[jvj+42])) goto l20;
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=39)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+42,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+44,jvj+45)*/
if((F!=x[jvj+45])) goto l20;
pile[v[22]]=114; pile[WZ1]=jvj+42; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(114,jvj+42,jvj+46)*/
x[jvj+126]=x[jvj+46] ;z[jvj+126]=z[jvj+46];
l21:if((x[jvj+126]<=0)) goto l20;
x[jvj+47]=s[x[jvj+126]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+126];
pile[v[22]]=102; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+47,jvj+48)*/
pile[v[22]]=140; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+48,V64)*/
V64=pile[WZ2]; 
if((V!=V64)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+47; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+47,jvj+49)*/
pile[v[22]]=140; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+49,V66)*/
V66=pile[WZ2]; 
if((V66!=(-596))) goto l22;
x[jvj+127]=x[jvj+46] ;z[jvj+127]=z[jvj+46];
l23:if((x[jvj+127]<=0)) goto l22;
x[jvj+50]=s[x[jvj+127]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+127];
if((x[jvj+47]==x[jvj+50])) goto l24;
pile[v[22]]=103; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+50,jvj+51)*/
pile[v[22]]=140; pile[WZ1]=jvj+51; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(140,jvj+51,V77)*/
V77=pile[WZ2]; 
if((V77!=(-602))) goto l24;
pile[v[22]]=102; pile[WZ1]=jvj+50; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+50,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+52,jvj+53)*/
if((V72!=x[jvj+53])) goto l24;
x[jvj+112]=x[R] ;z[jvj+112]=z[R];
l57:V392=W;
pile[v[22]]=253; pile[WZ1]=jvj+112; pile[WZ2]=V392; 
(*f[134])( );     /*OTA0(253,jvj+112,V392)*/
pile[v[22]]=498; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+112,jvj+113)*/
x[jvj+112]=x[jvj+113] ;z[jvj+112]=z[jvj+113];
goto l57;
l3:x[jvj+3]=s[x[jvj+119]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+119];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]==50)) goto l5;
if((x[jvj+5]!=10064)) goto l4;
pile[v[22]]=113; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(113,jvj+3,jvj+18)*/
pile[v[22]]=114; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(114,jvj+3,jvj+19)*/
X=x[jvj+3];
V88=X;
x[jvj+121]=x[jvj+18] ;z[jvj+121]=z[jvj+18];
l8:if((x[jvj+121]<=0)) goto l4;
x[jvj+20]=s[x[jvj+121]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+121];
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+20,jvj+21)*/
pile[v[22]]=140; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+21,V36)*/
V36=pile[WZ2]; 
if((V36!=(-2065))) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+20,jvj+22)*/
pile[v[22]]=140; pile[WZ1]=jvj+22; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+22,V34)*/
V34=pile[WZ2]; 
W=V34;
pile[v[22]]=R; pile[WZ1]=W; pile[WZ2]=jvj+23; 
(*f[747])( );     /*USK0(R,W,jvj+23)*/
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+23,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l9;
x[jvj+24]=d[20];z[jvj+24]=0;
l10:if((x[jvj+24]<=0)) goto l9;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+25,jvj+26)*/
x[jvj+122]=x[jvj+19] ;z[jvj+122]=z[jvj+19];
l12:if((x[jvj+122]<=0)) goto l11;
x[jvj+27]=s[x[jvj+122]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+122];
pile[v[22]]=103; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,jvj+27,jvj+28)*/
pile[v[22]]=140; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+28,V18)*/
V18=pile[WZ2]; 
if((V18!=(-596))) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+27; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+27,jvj+29)*/
pile[v[22]]=140; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+29,V16)*/
V16=pile[WZ2]; 
V=V16;
x[jvj+123]=x[jvj+19] ;z[jvj+123]=z[jvj+19];
l14:if((x[jvj+123]<=0)) goto l13;
x[jvj+30]=s[x[jvj+123]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+123];
if((x[jvj+27]==x[jvj+30])) goto l15;
pile[v[22]]=103; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(103,jvj+30,jvj+31)*/
pile[v[22]]=140; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+31,V26)*/
V26=pile[WZ2]; 
if((V26!=(-602))) goto l15;
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(102,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=100)) goto l15;
x[jvj+124]=x[jvj+2] ;z[jvj+124]=z[jvj+2];
l16:if((x[jvj+124]<=0)) goto l15;
x[jvj+34]=s[x[jvj+124]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+124];
if((x[jvj+3]==x[jvj+34])) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=25)) goto l17;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+25,jvj+34,jvj+37)*/
pile[v[22]]=140; pile[WZ1]=jvj+37; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+37,V47)*/
V47=pile[WZ2]; 
if((W!=V47)) goto l17;
pile[v[22]]=jvj+26; pile[WZ1]=jvj+34; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+26,jvj+34,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+38,jvj+39)*/
x[jvj+118]=x[jvj+39] ;z[jvj+118]=z[jvj+39];
if(x[jvj+118]!=20&&x[jvj+118]!=41&&x[jvj+118]!=89&&x[jvj+118]!=96&&x[jvj+118]!=21) goto l26;
if((V72=w[x[jvj+118]][3])==incon) goto l26;
x[jvj+40]=incon;
if((x[jvj+118]==21)) goto l1;
x[jvj+40]=x[jvj+118] ;z[jvj+40]=z[jvj+118];
goto l18;
l4:x[jvj+119]=t[x[jvj+119]];
goto l2;
l5:pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+6)*/
for(i=x[jvj+6],V101=0;i>0;i=t[i],V101++)  ;
if((V101!=1)) goto l4;
V113=x[jvj+3];
x[jvj+120]=x[jvj+6] ;z[jvj+120]=z[jvj+6];
l6:if((x[jvj+120]<=0)) goto l4;
x[jvj+7]=s[x[jvj+120]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+120];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+7,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
if(x[jvj+11]!=25&&x[jvj+11]!=26&&x[jvj+11]!=27&&x[jvj+11]!=28&&x[jvj+11]!=29&&x[jvj+11]!=30) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+11,jvj+12)*/
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+7,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+13,jvj+14)*/
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+7,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
x[jvj+111]=x[jvj+14] ;z[jvj+111]=z[jvj+14];
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V113; 
(*f[134])( );     /*OTA0(107,R,V113)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+12; pile[WZ4]=jvj+108; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+12,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=111; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,111,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+109,jvj+16,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+17)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(R,107,jvj+17)*/
(*f[1651])( );     /*USVAR0(R)*/
l7:x[jvj+120]=t[x[jvj+120]];
goto l6;
l9:x[jvj+121]=t[x[jvj+121]];
goto l8;
l11:x[jvj+24]=t[x[jvj+24]];
goto l10;
l13:x[jvj+122]=t[x[jvj+122]];
goto l12;
l15:x[jvj+123]=t[x[jvj+123]];
goto l14;
l17:x[jvj+124]=t[x[jvj+124]];
goto l16;
l20:x[jvj+125]=t[x[jvj+125]];
goto l19;
l22:x[jvj+126]=t[x[jvj+126]];
goto l21;
l25:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V88; 
(*f[134])( );     /*OTA0(107,R,V88)*/
pile[WZ2]=V89; 
(*f[134])( );     /*OTA0(107,R,V89)*/
pile[v[22]]=R; pile[WZ1]=474; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(R,474,jvj+42)*/
l24:x[jvj+127]=t[x[jvj+127]];
goto l23;
l26:if(x[jvj+118]!=114&&x[jvj+118]!=113&&x[jvj+118]!=108) goto l36;
V265=x[jvj+34];
V364=V265;
x[jvj+128]=x[jvj+2] ;z[jvj+128]=z[jvj+2];
l27:if((x[jvj+128]<=0)) goto l36;
x[jvj+54]=s[x[jvj+128]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+128];
if((x[jvj+3]==x[jvj+54])) goto l28;
if((x[jvj+34]==x[jvj+54])) goto l28;
pile[v[22]]=111; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+54,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=10062)) goto l28;
pile[v[22]]=114; pile[WZ1]=jvj+54; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(114,jvj+54,jvj+57)*/
pile[v[22]]=113; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(113,jvj+54,jvj+58)*/
x[jvj+129]=x[jvj+57] ;z[jvj+129]=z[jvj+57];
l29:if((x[jvj+129]<=0)) goto l28;
x[jvj+59]=s[x[jvj+129]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+129];
pile[v[22]]=103; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(103,jvj+59,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+60,V333)*/
V333=pile[WZ2]; 
if((V333!=(-602))) goto l30;
pile[v[22]]=102; pile[WZ1]=jvj+59; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,jvj+59,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+61,jvj+62)*/
if((x[jvj+118]!=x[jvj+62])) goto l30;
x[jvj+130]=x[jvj+58] ;z[jvj+130]=z[jvj+58];
l31:if((x[jvj+130]<=0)) goto l30;
x[jvj+63]=s[x[jvj+130]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+130];
pile[v[22]]=103; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,jvj+63,jvj+64)*/
pile[v[22]]=140; pile[WZ1]=jvj+64; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+64,V343)*/
V343=pile[WZ2]; 
if((V343!=(-2274))) goto l32;
pile[v[22]]=102; pile[WZ1]=jvj+63; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,jvj+63,jvj+65)*/
pile[v[22]]=140; pile[WZ1]=jvj+65; 
(*f[44])( );if(v[102]) goto l32;     /*FNDC1(140,jvj+65,V341)*/
V341=pile[WZ2]; 
V267=V341;
x[jvj+131]=x[jvj+2] ;z[jvj+131]=z[jvj+2];
l33:if((x[jvj+131]<=0)) goto l32;
x[jvj+66]=s[x[jvj+131]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+131];
if((x[jvj+3]==x[jvj+66])) goto l34;
if((x[jvj+34]==x[jvj+66])) goto l34;
if((x[jvj+54]==x[jvj+66])) goto l34;
pile[v[22]]=111; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+66,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]!=180)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+66; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(102,jvj+66,jvj+69)*/
pile[v[22]]=140; pile[WZ1]=jvj+69; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+69,V354)*/
V354=pile[WZ2]; 
if((V267!=V354)) goto l34;
pile[v[22]]=436; pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(436,jvj+66,jvj+70)*/
pile[v[22]]=140; pile[WZ1]=jvj+70; 
(*f[44])( );if(v[102]) goto l34;     /*FNDC1(140,jvj+70,V360)*/
V360=pile[WZ2]; 
if((V!=V360)) goto l34;
x[jvj+114]=x[R] ;z[jvj+114]=z[R];
l58:V395=W;
pile[v[22]]=253; pile[WZ1]=jvj+114; pile[WZ2]=V395; 
(*f[134])( );     /*OTA0(253,jvj+114,V395)*/
pile[v[22]]=498; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(498,jvj+114,jvj+115)*/
x[jvj+114]=x[jvj+115] ;z[jvj+114]=z[jvj+115];
goto l58;
l28:x[jvj+128]=t[x[jvj+128]];
goto l27;
l30:x[jvj+129]=t[x[jvj+129]];
goto l29;
l32:x[jvj+130]=t[x[jvj+130]];
goto l31;
l35:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V88; 
(*f[134])( );     /*OTA0(107,R,V88)*/
pile[WZ2]=V364; 
(*f[134])( );     /*OTA0(107,R,V364)*/
l34:x[jvj+131]=t[x[jvj+131]];
goto l33;
l36:if(x[jvj+118]!=435&&x[jvj+118]!=39&&x[jvj+118]!=22) goto l17;
V118=x[jvj+34];
V260=V118;
x[jvj+132]=x[jvj+2] ;z[jvj+132]=z[jvj+2];
l37:if((x[jvj+132]<=0)) goto l17;
x[jvj+71]=s[x[jvj+132]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+132];
if((x[jvj+3]==x[jvj+71])) goto l38;
if((x[jvj+34]==x[jvj+71])) goto l38;
pile[v[22]]=111; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,jvj+71,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=10064)) goto l38;
pile[v[22]]=113; pile[WZ1]=jvj+71; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(113,jvj+71,jvj+74)*/
pile[v[22]]=114; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(114,jvj+71,jvj+75)*/
x[jvj+106]=x[jvj+71] ;z[jvj+106]=z[jvj+71];
x[jvj+133]=x[jvj+74] ;z[jvj+133]=z[jvj+74];
l39:if((x[jvj+133]<=0)) goto l38;
x[jvj+76]=s[x[jvj+133]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+133];
pile[v[22]]=103; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,jvj+76,jvj+77)*/
pile[v[22]]=140; pile[WZ1]=jvj+77; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+77,V209)*/
V209=pile[WZ2]; 
if((V209!=(-2065))) goto l40;
pile[v[22]]=102; pile[WZ1]=jvj+76; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+76,jvj+78)*/
pile[v[22]]=140; pile[WZ1]=jvj+78; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(140,jvj+78,V207)*/
V207=pile[WZ2]; 
VV=V207;
x[jvj+134]=x[jvj+75] ;z[jvj+134]=z[jvj+75];
l41:if((x[jvj+134]<=0)) goto l40;
x[jvj+79]=s[x[jvj+134]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+134];
pile[v[22]]=102; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+79,jvj+80)*/
pile[v[22]]=140; pile[WZ1]=jvj+80; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+80,V189)*/
V189=pile[WZ2]; 
if((V!=V189)) goto l42;
pile[v[22]]=103; pile[WZ1]=jvj+79; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+79,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+81,V191)*/
V191=pile[WZ2]; 
if((V191!=(-596))) goto l42;
x[jvj+135]=x[jvj+75] ;z[jvj+135]=z[jvj+75];
l43:if((x[jvj+135]<=0)) goto l42;
x[jvj+82]=s[x[jvj+135]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+135];
if((x[jvj+79]==x[jvj+82])) goto l44;
pile[v[22]]=103; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(103,jvj+82,jvj+83)*/
pile[v[22]]=140; pile[WZ1]=jvj+83; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(140,jvj+83,V199)*/
V199=pile[WZ2]; 
if((V199!=(-602))) goto l44;
pile[v[22]]=102; pile[WZ1]=jvj+82; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+82,jvj+84)*/
pile[v[22]]=101; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(101,jvj+84,jvj+85)*/
if((x[jvj+85]!=111)) goto l44;
x[jvj+136]=x[jvj+2] ;z[jvj+136]=z[jvj+2];
l45:if((x[jvj+136]<=0)) goto l44;
x[jvj+86]=s[x[jvj+136]] ;z[jvj+86]=(x[jvj+86]<=sepcte) ? x[jvj+86] : z[jvj+136];
if((x[jvj+3]==x[jvj+86])) goto l46;
if((x[jvj+34]==x[jvj+86])) goto l46;
if((x[jvj+71]==x[jvj+86])) goto l46;
pile[v[22]]=111; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(111,jvj+86,jvj+87)*/
pile[v[22]]=101; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(101,jvj+87,jvj+88)*/
if((x[jvj+88]!=10064)) goto l46;
pile[v[22]]=113; pile[WZ1]=jvj+86; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(113,jvj+86,jvj+89)*/
pile[v[22]]=114; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(114,jvj+86,jvj+90)*/
x[jvj+107]=x[jvj+86] ;z[jvj+107]=z[jvj+86];
x[jvj+137]=x[jvj+89] ;z[jvj+137]=z[jvj+89];
l47:if((x[jvj+137]<=0)) goto l46;
x[jvj+91]=s[x[jvj+137]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+137];
pile[v[22]]=103; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(103,jvj+91,jvj+92)*/
pile[v[22]]=140; pile[WZ1]=jvj+92; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+92,V241)*/
V241=pile[WZ2]; 
if((V241!=(-2065))) goto l48;
pile[v[22]]=102; pile[WZ1]=jvj+91; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+91,jvj+93)*/
pile[v[22]]=140; pile[WZ1]=jvj+93; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+93,V239)*/
V239=pile[WZ2]; 
WW=V239;
x[jvj+138]=x[jvj+90] ;z[jvj+138]=z[jvj+90];
l49:if((x[jvj+138]<=0)) goto l48;
x[jvj+94]=s[x[jvj+138]] ;z[jvj+94]=(x[jvj+94]<=sepcte) ? x[jvj+94] : z[jvj+138];
pile[v[22]]=102; pile[WZ1]=jvj+94; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+94,jvj+95)*/
pile[v[22]]=140; pile[WZ1]=jvj+95; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+95,V221)*/
V221=pile[WZ2]; 
if((VV!=V221)) goto l50;
pile[v[22]]=103; pile[WZ1]=jvj+94; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+94,jvj+96)*/
pile[v[22]]=140; pile[WZ1]=jvj+96; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+96,V223)*/
V223=pile[WZ2]; 
if((V223!=(-596))) goto l50;
x[jvj+139]=x[jvj+90] ;z[jvj+139]=z[jvj+90];
l51:if((x[jvj+139]<=0)) goto l50;
x[jvj+97]=s[x[jvj+139]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+139];
if((x[jvj+94]==x[jvj+97])) goto l52;
pile[v[22]]=103; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(103,jvj+97,jvj+98)*/
pile[v[22]]=140; pile[WZ1]=jvj+98; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(140,jvj+98,V231)*/
V231=pile[WZ2]; 
if((V231!=(-602))) goto l52;
pile[v[22]]=102; pile[WZ1]=jvj+97; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(102,jvj+97,jvj+99)*/
pile[v[22]]=101; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+99,jvj+100)*/
if((x[jvj+100]!=101)) goto l52;
x[jvj+140]=x[jvj+2] ;z[jvj+140]=z[jvj+2];
l53:if((x[jvj+140]<=0)) goto l52;
x[jvj+101]=s[x[jvj+140]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+140];
if((x[jvj+3]==x[jvj+101])) goto l54;
if((x[jvj+34]==x[jvj+101])) goto l54;
if((x[jvj+71]==x[jvj+101])) goto l54;
if((x[jvj+86]==x[jvj+101])) goto l54;
pile[v[22]]=100; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(100,jvj+101,jvj+102)*/
if((x[jvj+102]!=22)) goto l54;
pile[v[22]]=102; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+101,jvj+103)*/
pile[v[22]]=140; pile[WZ1]=jvj+103; 
(*f[44])( );if(v[102]) goto l54;     /*FNDC1(140,jvj+103,V256)*/
V256=pile[WZ2]; 
if((WW!=V256)) goto l54;
pile[v[22]]=111; pile[WZ1]=jvj+101; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+101,jvj+104)*/
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+104,jvj+105)*/
V114=x[jvj+105];
if(V114!=25&&V114!=44) goto l54;
x[jvj+116]=x[R] ;z[jvj+116]=z[R];
l59:V398=W;
pile[v[22]]=253; pile[WZ1]=jvj+116; pile[WZ2]=V398; 
(*f[134])( );     /*OTA0(253,jvj+116,V398)*/
pile[v[22]]=498; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(498,jvj+116,jvj+117)*/
x[jvj+116]=x[jvj+117] ;z[jvj+116]=z[jvj+117];
goto l59;
l38:x[jvj+132]=t[x[jvj+132]];
goto l37;
l40:x[jvj+133]=t[x[jvj+133]];
goto l39;
l42:x[jvj+134]=t[x[jvj+134]];
goto l41;
l44:x[jvj+135]=t[x[jvj+135]];
goto l43;
l46:x[jvj+136]=t[x[jvj+136]];
goto l45;
l48:x[jvj+137]=t[x[jvj+137]];
goto l47;
l50:x[jvj+138]=t[x[jvj+138]];
goto l49;
l52:x[jvj+139]=t[x[jvj+139]];
goto l51;
l55:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=V88; 
(*f[134])( );     /*OTA0(107,R,V88)*/
pile[WZ2]=V260; 
(*f[134])( );     /*OTA0(107,R,V260)*/
pile[v[22]]=R; pile[WZ1]=474; pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(R,474,jvj+106)*/
pile[WZ2]=jvj+107; 
(*f[36])( );     /*PLUSC0(R,474,jvj+107)*/
l54:x[jvj+140]=t[x[jvj+140]];
goto l53;
}
