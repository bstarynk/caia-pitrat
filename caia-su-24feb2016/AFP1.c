#include "dx.h"
void AFP1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V9=0,V6=0,V3=0,YY=0,V49=0,V13=0,V14=0,V20=0,V42=0,V46=0,V40=0,V41=0,V43=0,V45=0,V47=0,V19=0,I=0,V32=0,J=0,V54=0,V33=0,V35=0,V36=0,V38=0,V28=0,V79=0,V78=0,V81=0,V15=0,V80=0,V86=0,V91=0,V87=0,V89=0,V84=0,V85=0,V88=0,V90=0,V96=0,V101=0,V97=0,V99=0,V94=0,V95=0,V98=0,V100=0;
int HIST,A,B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
x[jvj+1]=11311;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3501&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; B=pile[v[22]+2]; C=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[jvj+6]=incon;
for(a=x[C];a>0;a=t[a]) if(s[a]==999) goto l5;
for(a=x[C];a>0;a=t[a]) if(s[a]==0) goto l1;
l2:pile[v[22]]=A; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(A,jvj+3)*/
pile[v[22]]=1310; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1310,jvj+3,jvj+4)*/
l3:if((x[jvj+4]<=0)) goto l5;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(117,jvj+5,V9)*/
V9=pile[WZ2]; 
if((V9!=B)) goto l4;
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
pile[v[22]]=1344; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1344,jvj+6,jvj+7)*/
l6:x[jvj+10]=0 ;z[jvj+10]=0;
V49=x[C];
l9:if((V49>0)) goto l10;
x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
if(x[jvj+6]==incon) goto l32;
pile[v[22]]=195; pile[WZ1]=jvj+6; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(195,jvj+6,jvj+13)*/
x[jvj+50]=0 ;z[jvj+50]=0;
x[jvj+47]=x[jvj+50] ;z[jvj+47]=z[jvj+50];
V86=0;
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V86) goto l48;
l37:V91=x[jvj+27];
l38:if((V91>0)) goto l39;
x[jvj+51]=0 ;z[jvj+51]=0;
x[jvj+48]=x[jvj+51] ;z[jvj+48]=z[jvj+51];
V96=0;
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V96) goto l60;
l49:V101=x[jvj+13];
l50:if((V101>0)) goto l51;
x[jvj+12]=0 ;z[jvj+12]=0;
l13:if((x[jvj+47]<=0)) goto l14;
V13=s[x[jvj+47]];
pile[v[22]]=jvj+12; pile[WZ1]=V13; 
(*f[207])( );     /*PLUE2(jvj+12,V13)*/
x[jvj+47]=t[x[jvj+47]];
goto l13;
l1:for(a=x[C];a>0;a=t[a]) if(s[a]==(-1)) goto l5;
goto l2;
l4:x[jvj+4]=t[x[jvj+4]];
goto l3;
l5:x[jvj+49]=0 ;z[jvj+49]=0;
x[jvj+7]=x[jvj+49] ;z[jvj+7]=z[jvj+49];
if(x[jvj+3]!=incon) goto l6;
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l8:V3=YY;
l12:pile[v[22]]=jvj+10; pile[WZ1]=V3; 
(*f[207])( );     /*PLUE2(jvj+10,V3)*/
l11:V49=t[V49];
goto l9;
l10:YY=s[V49];
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==YY) goto l11;
V6=abs(YY);
if((V6<=1)) goto l7;
pile[v[22]]=131; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(131,jvj+3,jvj+8)*/
if((x[jvj+8]==68)) goto l11;
l7:V3=incon;
if((YY!=(-1))) goto l8;
pile[v[22]]=131; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(131,jvj+3,jvj+9)*/
if((x[jvj+9]!=68)) goto l8;
V3=1;
goto l12;
l15:V14=s[x[jvj+48]];
pile[v[22]]=jvj+12; pile[WZ1]=V14; 
(*f[207])( );     /*PLUE2(jvj+12,V14)*/
x[jvj+48]=t[x[jvj+48]];
l14:if((x[jvj+48]>0)) goto l15;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[2058])( );     /*CMFFLISR0(jvj+12,jvj+14)*/
for(i=x[jvj+13],V79=0;i>0;i=t[i],V79++)  ;
for(i=x[jvj+14],V78=0;i>0;i=t[i],V78++)  ;
if((V79!=V78)) goto l34;
V81=x[jvj+13];
l33:if((V81>0)) goto l36;
V15=135;
l16:if((V15==134)) goto l17;
goto l31;
l17:x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=jvj+6; pile[WZ1]=195; pile[WZ2]=jvj+14; 
(*f[34])( );     /*CHGC0(jvj+6,195,jvj+14)*/
l27:if((x[jvj+15]!=0)) goto l28;
pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
l28:if((v[111]!=0)) goto l29;
pile[v[22]]=1318; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=jvj+15; 
(*f[2059])( );     /*ARCHIVE5(1318,A,B,jvj+15)*/
l29:pile[v[22]]=1345; pile[WZ1]=jvj+3; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1345,jvj+3,HIST)*/
pile[v[22]]=509; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(509,jvj+3,jvj+17)*/
l22:if((x[jvj+17]>0)) goto l23;
V19=g[584];
if((V19<=0)) goto l30;
V20=vg[584];
if((V20!=0)) goto l18;
if((V19<3)) goto l20;
l18:pile[v[22]]=584; pile[WZ1]=11311; pile[WZ2]=1; pile[WZ3]=(-598); pile[WZ4]=A; pile[WZ5]=(-591); pile[v[22]+6]=B; pile[v[22]+7]=(-3753); pile[v[22]+8]=jvj+15; pile[v[22]+9]=(-6231); pile[v[22]+10]=HIST; pile[v[22]+11]=jvj+16; 
(*f[2060])( );     /*INTERP24(584,11311,1,(-598),A,(-591),B,(-3753),jvj+15,(-6231),HIST,jvj+16)*/
if((x[jvj+16]==135)) goto l19;
l30:for(i=x[jvj+15],V35=0;i>0;i=t[i],V35++)  ;
if((V35>1)) goto l24;
if((V35!=1)) goto l31;
if((x[jvj+15]<=0)) goto l31;
I=s[x[jvj+15]];
x[jvj+23]=vo[14];z[jvj+23]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(642,jvj+23,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(A,jvj+24)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+38; 
(*f[46])( );     /*TRI0(V28,858,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+39; 
(*f[189])( );     /*TRI4(jvj+38,v[13],642,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=3501; pile[WZ2]=246; pile[WZ3]=jvj+40; 
(*f[189])( );     /*TRI4(jvj+39,3501,246,jvj+40)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11311; pile[WZ4]=jvj+40; pile[WZ5]=jvj+25; 
(*f[269])( );     /*QUADRI6(158,1,218,11311,jvj+40,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+45)*/
pile[WZ3]=I; pile[WZ4]=jvj+41; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=160; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(jvj+41,160,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ2]=111; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+42,jvj+43,111,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=jvj+45; pile[WZ2]=103; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+44,jvj+45,103,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+46; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+46,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+25; 
(*f[1296])( );     /*NOUVCONTR0(jvj+26,jvj+25)*/
goto l31;
l19:if((V19<4)) goto l20;
goto l30;
l20:V42=x[A];
V46=x[jvj+15];
pile[v[22]]=20; pile[WZ1]=1318; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,1318,0,V40)*/
V40=pile[WZ3]; 
pile[WZ1]=V42; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(20,V42,V40,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=B; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,B,V41,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V46; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(23,V46,V43,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; pile[WZ1]=HIST; 
(*f[907])( );if(v[102]) goto l21;     /*SORHIST1(V45,HIST,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
l21:if((V19!=2)) goto l30;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l30;
l23:x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=1593; pile[WZ1]=jvj+18; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1593,jvj+18,HIST)*/
x[jvj+17]=t[x[jvj+17]];
goto l22;
l24:V32=999999;
V54=x[jvj+15];
l25:if((V54>0)) goto l26;
if((V32<=0)) goto l31;
if((V32==999999)) goto l31;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(642,jvj+19,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=A; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(A,jvj+20)*/
V38=(-V32);
pile[v[22]]=V36; pile[WZ1]=858; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(V36,858,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,v[13],642,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=3501; pile[WZ2]=246; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,3501,246,jvj+31)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=11311; pile[WZ4]=jvj+31; pile[WZ5]=jvj+21; 
(*f[269])( );     /*QUADRI6(158,1,218,11311,jvj+31,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1280; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,1280,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+36)*/
pile[WZ3]=V38; pile[WZ4]=jvj+32; 
(*f[192])( );     /*QUADRI4(100,41,130,V38,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=160; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,160,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=111; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+33,jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+20; pile[WZ4]=jvj+37; pile[WZ5]=jvj+22; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+20,jvj+37,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+21; 
(*f[1296])( );     /*NOUVCONTR0(jvj+22,jvj+21)*/
goto l31;
l26:J=s[V54];
V33=abs(J);
if(V33<V32) V32=V33;
V54=t[V54];
goto l25;
l32:pile[v[22]]=jvj+27; pile[WZ1]=195; pile[WZ2]=jvj+28; 
(*f[300])( );     /*TRI10(jvj+27,195,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=B; pile[WZ2]=117; pile[WZ3]=jvj+11; 
(*f[189])( );     /*TRI4(jvj+28,B,117,jvj+11)*/
x[jvj+15]=x[jvj+27] ;z[jvj+15]=z[jvj+27];
pile[v[22]]=jvj+3; pile[WZ1]=1310; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+3,1310,jvj+11)*/
goto l27;
l35:V81=t[V81];
goto l33;
l36:V80=s[V81];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==V80) goto l35;
l34:V15=134;
goto l16;
l39:V87=s[V91];
if((V87<0)) goto l46;
if((V87<=0)) goto l43;
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V87) goto l42;
V89=x[jvj+13];
l40:if((V89<=0)) goto l43;
V84=s[V89];
if((V84>=0)) goto l41;
V85=abs(V84);
if((V87>=V85)) goto l42;
l41:V89=t[V89];
goto l40;
l42:pile[v[22]]=jvj+47; pile[WZ1]=V87; 
(*f[207])( );     /*PLUE2(jvj+47,V87)*/
l43:V91=t[V91];
goto l38;
l46:V90=x[jvj+13];
l44:if((V90<=0)) goto l43;
V88=s[V90];
if((V88>=0)) goto l45;
if((V87<=V88)) goto l42;
l45:V90=t[V90];
goto l44;
l47:pile[v[22]]=jvj+47; pile[WZ1]=V86; 
(*f[207])( );     /*PLUE2(jvj+47,V86)*/
goto l37;
l48:for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==V86) goto l47;
goto l37;
l51:V97=s[V101];
if((V97<0)) goto l58;
if((V97<=0)) goto l55;
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V97) goto l54;
V99=x[jvj+27];
l52:if((V99<=0)) goto l55;
V94=s[V99];
if((V94>=0)) goto l53;
V95=abs(V94);
if((V97>=V95)) goto l54;
l53:V99=t[V99];
goto l52;
l54:pile[v[22]]=jvj+48; pile[WZ1]=V97; 
(*f[207])( );     /*PLUE2(jvj+48,V97)*/
l55:V101=t[V101];
goto l50;
l58:V100=x[jvj+27];
l56:if((V100<=0)) goto l55;
V98=s[V100];
if((V98>=0)) goto l57;
if((V97<=V98)) goto l54;
l57:V100=t[V100];
goto l56;
l59:pile[v[22]]=jvj+48; pile[WZ1]=V96; 
(*f[207])( );     /*PLUE2(jvj+48,V96)*/
goto l49;
l60:for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V96) goto l59;
goto l49;
}
