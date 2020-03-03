#include "dx.h"
void CRT5Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V20=0,V63=0,V85=0,V263=0,V270=0,V112=0,V231=0,V323=0,V183=0,V143=0,V191=0,V315=0,V317=0,V55=0,V42=0,V77=0,V319=0,V321=0,V261=0,V268=0,V39=0,V331=0,V330=0,V333=0,V2=0,V332=0;
int RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=104;
x[jvj+1]=11555;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1743&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+104]=0 ;z[jvj+104]=0;
x[jvj+3]=x[jvj+104] ;z[jvj+3]=z[jvj+104];
pile[v[22]]=jvj+3; pile[WZ1]=RRRT; 
(*f[1938])( );     /*Z45Z0(jvj+3,RRRT)*/
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+4)*/
if((x[jvj+4]!=134)) goto l5;
pile[v[22]]=jvj+3; pile[WZ1]=192; 
(*f[207])( );     /*PLUE2(jvj+3,192)*/
l5:pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(870,jvj+2,V112)*/
V112=pile[WZ2]; 
if((V112!=2)) goto l12;
pile[v[22]]=jvj+3; pile[WZ1]=219; 
(*f[207])( );     /*PLUE2(jvj+3,219)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==25)) goto l6;
if((x[jvj+6]!=30)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+2,jvj+24)*/
pile[v[22]]=102; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+25)*/
pile[v[22]]=jvj+3; pile[WZ1]=291; 
(*f[207])( );     /*PLUE2(jvj+3,291)*/
l3:pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1274,jvj+2,V63)*/
V63=pile[WZ2]; 
if((V63!=0)) goto l12;
l11:pile[v[22]]=868; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(868,jvj+2,jvj+26)*/
if((x[jvj+26]==55)) goto l12;
pile[v[22]]=jvj+3; pile[WZ1]=117; 
(*f[207])( );     /*PLUE2(jvj+3,117)*/
l12:pile[v[22]]=1142; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1142,jvj+2,jvj+27)*/
if((x[jvj+27]!=68)) goto l15;
pile[v[22]]=jvj+3; pile[WZ1]=279; 
(*f[207])( );     /*PLUE2(jvj+3,279)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+2,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l15;
x[jvj+30]=d[20];z[jvj+30]=0;
l13:if((x[jvj+30]<=0)) goto l15;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+2; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+31,jvj+2,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=485)) goto l14;
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+31,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+35,jvj+2,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+36,V183)*/
V183=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+37)*/
pile[v[22]]=jvj+3; pile[WZ1]=273; 
(*f[207])( );     /*PLUE2(jvj+3,273)*/
l14:x[jvj+30]=t[x[jvj+30]];
goto l13;
l1:pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(1274,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=0)) goto l29;
l28:pile[v[22]]=jvj+3; pile[WZ1]=15; 
(*f[207])( );     /*PLUE2(jvj+3,15)*/
l29:if((V112!=3)) goto l31;
pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1274,jvj+2,V85)*/
V85=pile[WZ2]; 
if((V85!=0)) goto l31;
l30:pile[v[22]]=868; pile[WZ1]=jvj+2; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(868,jvj+2,jvj+58)*/
if((x[jvj+58]==55)) goto l31;
pile[v[22]]=jvj+3; pile[WZ1]=168; 
(*f[207])( );     /*PLUE2(jvj+3,168)*/
l31:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(111,jvj+2,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]==25)) goto l32;
if((x[jvj+60]==1171)) goto l47;
if((x[jvj+60]==48)) goto l48;
if((x[jvj+60]==55)) goto l49;
if((x[jvj+60]!=625)) goto l51;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(160,jvj+2,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(130,jvj+97,V39)*/
V39=pile[WZ2]; 
x[jvj+98]=vo[16];z[jvj+98]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(498,jvj+98,jvj+99)*/
pile[v[22]]=1182; pile[WZ1]=jvj+99; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(1182,jvj+99,jvj+100)*/
if((68!=x[jvj+100])) goto l51;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(102,jvj+2,jvj+101)*/
pile[v[22]]=103; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(103,jvj+2,jvj+102)*/
pile[v[22]]=jvj+3; pile[WZ1]=102; 
(*f[207])( );     /*PLUE2(jvj+3,102)*/
l51:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+103)*/
for(i=x[jvj+3],V331=0;i>0;i=t[i],V331++)  ;
for(i=x[jvj+103],V330=0;i>0;i=t[i],V330++)  ;
if((V331!=V330)) goto l56;
V333=x[jvj+3];
l55:if((V333>0)) goto l58;
V2=135;
l52:if((V2==134)) goto l53;
l54:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l6:pile[v[22]]=jvj+3; pile[WZ1]=220; 
(*f[207])( );     /*PLUE2(jvj+3,220)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+2,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l8;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+2,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l8;
pile[v[22]]=jvj+3; pile[WZ1]=249; 
(*f[207])( );     /*PLUE2(jvj+3,249)*/
l8:x[jvj+11]=d[20];z[jvj+11]=0;
l7:if((x[jvj+11]<=0)) goto l3;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+12,jvj+2,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1273)) goto l10;
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+12,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+16,jvj+2,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+17,V231)*/
V231=pile[WZ2]; 
if((V231!=1)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+13,jvj+18)*/
pile[v[22]]=107; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+19)*/
pile[v[22]]=jvj+3; pile[WZ1]=288; 
(*f[207])( );     /*PLUE2(jvj+3,288)*/
l10:pile[v[22]]=1070; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1070,jvj+2,jvj+20)*/
if((x[jvj+20]!=68)) goto l9;
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+13,jvj+21)*/
if((x[jvj+21]!=484)) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+12,jvj+22)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+22; pile[WZ3]=jvj+23; 
(*f[45])( );if(v[102]) goto l9;     /*FNDZ0(jvj+2,jvj+22,V323,jvj+23)*/
V323=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=582; 
(*f[207])( );     /*PLUE2(jvj+3,582)*/
l9:x[jvj+11]=t[x[jvj+11]];
goto l7;
l15:if((V112!=1)) goto l17;
pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1274,jvj+2,V143)*/
V143=pile[WZ2]; 
if((V143!=1)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=261; 
(*f[207])( );     /*PLUE2(jvj+3,261)*/
l2:pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(1274,jvj+2,V20)*/
V20=pile[WZ2]; 
if((V20!=0)) goto l17;
l16:pile[v[22]]=jvj+3; pile[WZ1]=33; 
(*f[207])( );     /*PLUE2(jvj+3,33)*/
l17:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+2,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]==55)) goto l18;
if((x[jvj+39]==30)) goto l24;
if((x[jvj+39]!=25)) goto l27;
if((V112<2)) goto l1;
if((V112>=8)) goto l31;
x[jvj+50]=vo[16];z[jvj+50]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(498,jvj+50,jvj+51)*/
pile[v[22]]=1182; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(1182,jvj+51,jvj+52)*/
if((68!=x[jvj+52])) goto l27;
x[jvj+53]=d[20];z[jvj+53]=0;
l25:if((x[jvj+53]<=0)) goto l27;
x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+54; pile[WZ3]=jvj+55; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+2,jvj+54,V315,jvj+55)*/
V315=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(268,jvj+54,jvj+56)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+56; pile[WZ3]=jvj+57; 
(*f[45])( );if(v[102]) goto l26;     /*FNDZ0(jvj+2,jvj+56,V317,jvj+57)*/
V317=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=561; 
(*f[207])( );     /*PLUE2(jvj+3,561)*/
l26:x[jvj+53]=t[x[jvj+53]];
goto l25;
l18:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+40)*/
l19:if((x[jvj+40]>0)) goto l20;
x[jvj+41]=vo[16];z[jvj+41]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(498,jvj+41,jvj+42)*/
pile[v[22]]=1216; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(1216,jvj+42,jvj+43)*/
for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==1291) goto l21;
l27:if((V112<=1)) goto l1;
goto l29;
l20:V191=s[x[jvj+40]];
pile[v[22]]=jvj+3; pile[WZ1]=274; 
(*f[207])( );     /*PLUE2(jvj+3,274)*/
pile[WZ1]=277; 
(*f[207])( );     /*PLUE2(jvj+3,277)*/
pile[WZ1]=280; 
(*f[207])( );     /*PLUE2(jvj+3,280)*/
x[jvj+40]=t[x[jvj+40]];
goto l19;
l21:for(a=x[jvj+43];a>0;a=t[a]) if(s[a]==1301) goto l22;
goto l27;
l22:pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+44)*/
for(a=x[jvj+44];a>0;a=t[a]) if(s[a]==1301) goto l23;
goto l27;
l23:pile[v[22]]=jvj+3; pile[WZ1]=27; 
(*f[207])( );     /*PLUE2(jvj+3,27)*/
goto l27;
l24:if((V112<4)) goto l27;
x[jvj+45]=vo[16];z[jvj+45]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+45,jvj+46)*/
pile[v[22]]=1182; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1182,jvj+46,jvj+47)*/
if((68!=x[jvj+47])) goto l31;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(102,jvj+2,jvj+48)*/
pile[v[22]]=103; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(103,jvj+2,jvj+49)*/
pile[v[22]]=jvj+3; pile[WZ1]=576; 
(*f[207])( );     /*PLUE2(jvj+3,576)*/
goto l31;
l32:pile[v[22]]=52; pile[WZ1]=jvj+2; pile[WZ2]=jvj+61; 
(*f[492])( );     /*FIGURE0(52,jvj+2,jvj+61)*/
if((x[jvj+61]==134)) goto l33;
l34:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,jvj+2,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+62,jvj+63)*/
if((x[jvj+63]!=484)) goto l38;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,jvj+2,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+64,jvj+65)*/
if((x[jvj+65]!=484)) goto l38;
pile[v[22]]=971; pile[WZ1]=jvj+2; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(971,jvj+2,jvj+66)*/
for(a=x[jvj+66];a>0;a=t[a]) if(s[a]==25) goto l35;
l38:x[jvj+67]=d[20];z[jvj+67]=0;
l36:if((x[jvj+67]>0)) goto l37;
pile[v[22]]=869; pile[WZ1]=jvj+2; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(869,jvj+2,jvj+93)*/
if((x[jvj+93]!=769)) goto l51;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(1274,jvj+2,V263)*/
V263=pile[WZ2]; 
if((V263!=0)) goto l4;
l45:pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(929,jvj+2,V261)*/
V261=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=567; 
(*f[207])( );     /*PLUE2(jvj+3,567)*/
l4:pile[v[22]]=1274; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(1274,jvj+2,V270)*/
V270=pile[WZ2]; 
if((V270!=0)) goto l51;
l46:pile[v[22]]=929; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(929,jvj+2,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=568; 
(*f[207])( );     /*PLUE2(jvj+3,568)*/
goto l51;
l33:pile[v[22]]=jvj+3; pile[WZ1]=54; 
(*f[207])( );     /*PLUE2(jvj+3,54)*/
goto l34;
l35:pile[v[22]]=jvj+3; pile[WZ1]=252; 
(*f[207])( );     /*PLUE2(jvj+3,252)*/
goto l38;
l37:x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=jvj+68; pile[WZ1]=jvj+2; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+68,jvj+2,jvj+69)*/
pile[v[22]]=111; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+69,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+70,jvj+71)*/
if((x[jvj+71]!=486)) goto l42;
pile[v[22]]=268; pile[WZ1]=jvj+68; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+68,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+2; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(jvj+72,jvj+2,jvj+73)*/
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+73,V55)*/
V55=pile[WZ2]; 
V42=V55;
if((V42>0)) goto l40;
if((V42!=0)) goto l41;
l42:pile[v[22]]=100; pile[WZ1]=jvj+69; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+69,jvj+76)*/
if((x[jvj+76]!=484)) goto l44;
pile[v[22]]=268; pile[WZ1]=jvj+68; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(268,jvj+68,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+2; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(jvj+77,jvj+2,jvj+78)*/
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+78,jvj+79)*/
pile[v[22]]=101; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+79,jvj+80)*/
if((x[jvj+80]!=1214)) goto l43;
x[jvj+81]=vo[16];z[jvj+81]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(498,jvj+81,jvj+82)*/
pile[v[22]]=1182; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1182,jvj+82,jvj+83)*/
if((68!=x[jvj+83])) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+78; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+78,jvj+84)*/
pile[v[22]]=jvj+3; pile[WZ1]=267; 
(*f[207])( );     /*PLUE2(jvj+3,267)*/
l43:pile[v[22]]=130; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(130,jvj+78,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+69; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(102,jvj+69,jvj+85)*/
pile[v[22]]=100; pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+85,jvj+86)*/
if(x[jvj+86]!=96&&x[jvj+86]!=89&&x[jvj+86]!=41&&x[jvj+86]!=20&&x[jvj+86]!=128&&x[jvj+86]!=570&&x[jvj+86]!=1317) goto l44;
pile[v[22]]=jvj+3; pile[WZ1]=162; 
(*f[207])( );     /*PLUE2(jvj+3,162)*/
l44:x[jvj+87]=vo[16];z[jvj+87]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(498,jvj+87,jvj+88)*/
pile[v[22]]=1182; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(1182,jvj+88,jvj+89)*/
if((68!=x[jvj+89])) goto l39;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+68; pile[WZ3]=jvj+90; 
(*f[45])( );if(v[102]) goto l39;     /*FNDZ0(jvj+2,jvj+68,V319,jvj+90)*/
V319=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(268,jvj+68,jvj+91)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+91; pile[WZ3]=jvj+92; 
(*f[45])( );if(v[102]) goto l39;     /*FNDZ0(jvj+2,jvj+91,V321,jvj+92)*/
V321=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=570; 
(*f[207])( );     /*PLUE2(jvj+3,570)*/
l39:x[jvj+67]=t[x[jvj+67]];
goto l36;
l40:pile[v[22]]=107; pile[WZ1]=jvj+69; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(107,jvj+69,jvj+74)*/
pile[v[22]]=jvj+3; pile[WZ1]=114; 
(*f[207])( );     /*PLUE2(jvj+3,114)*/
l41:pile[v[22]]=107; pile[WZ1]=jvj+69; pile[WZ2]=jvj+75; 
(*f[33])( );     /*FNDE0(107,jvj+69,jvj+75)*/
pile[v[22]]=jvj+3; pile[WZ1]=177; 
(*f[207])( );     /*PLUE2(jvj+3,177)*/
goto l42;
l47:pile[v[22]]=jvj+3; pile[WZ1]=66; 
(*f[207])( );     /*PLUE2(jvj+3,66)*/
goto l51;
l48:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+94; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+94)*/
pile[v[22]]=jvj+3; pile[WZ1]=234; 
(*f[207])( );     /*PLUE2(jvj+3,234)*/
goto l51;
l49:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+95)*/
pile[v[22]]=1294; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+96)*/
for(a=x[jvj+96];a>0;a=t[a]) if(s[a]==1291) goto l50;
goto l51;
l50:pile[v[22]]=jvj+3; pile[WZ1]=627; 
(*f[207])( );     /*PLUE2(jvj+3,627)*/
goto l51;
l53:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+3; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+3)*/
goto l54;
l57:V333=t[V333];
goto l55;
l58:V332=s[V333];
for(a=x[jvj+103];a>0;a=t[a]) if(s[a]==V332) goto l57;
l56:V2=134;
goto l52;
}
