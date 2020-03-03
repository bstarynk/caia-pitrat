#include "dx.h"
void COPA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V29=0,V34=0,F=0,V45=0,V113=0,V134=0,V155=0,V122=0,V158=0,V97=0,V223=0,V222=0,V227=0,V226=0,V230=0,V229=0,V233=0,V232=0,V236=0,V235=0;
int N,X,BT,R,E,P,RM,SM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=142;
x[jvj+1]=10606;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1632&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; X=pile[v[22]+1]; BT=pile[v[22]+2]; R=pile[v[22]+3]; E=pile[v[22]+4]; P=pile[v[22]+5]; RM=pile[v[22]+6]; SM=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[N]==68)) goto l2;
if((x[N]==278)) goto l34;
if((x[N]!=228)) goto l42;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,X,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=647)) goto l41;
pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(102,X,jvj+77)*/
pile[v[22]]=N; pile[WZ1]=jvj+77; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(N,jvj+77,102,jvj+77,E,P,RM,SM)*/
l41:if(x[jvj+76]!=295&&x[jvj+76]!=585&&x[jvj+76]!=137&&x[jvj+76]!=149&&x[jvj+76]!=139&&x[jvj+76]!=432&&x[jvj+76]!=138&&x[jvj+76]!=141&&x[jvj+76]!=847&&x[jvj+76]!=1382&&x[jvj+76]!=1660) goto l42;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,X,jvj+78)*/
if((x[jvj+78]!=22)) goto l42;
pile[v[22]]=102; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+79)*/
pile[v[22]]=68; pile[WZ1]=jvj+79; pile[WZ2]=102; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(68,jvj+79,102,X,E,P,RM,SM)*/
l42:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,X,jvj+80)*/
x[jvj+138]=w[x[jvj+80]][8];
V45=incon;
if((x[N]!=68)) goto l17;
if((x[jvj+80]!=39)) goto l17;
V45=68;
l43:if((x[jvj+138]<=0)) goto l49;
x[jvj+30]=s[x[jvj+138]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+138];
x[jvj+139]=incon;
if((x[N]!=68)) goto l18;
if((x[jvj+30]!=105)) goto l18;
x[jvj+139]=x[X] ;z[jvj+139]=z[X];
l44:pile[v[22]]=jvj+30; pile[WZ1]=X; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(jvj+30,X,jvj+81)*/
x[jvj+31]=x[jvj+139] ;z[jvj+31]=z[jvj+139];
x[jvj+140]=x[jvj+81] ;z[jvj+140]=z[jvj+81];
l45:if((x[jvj+140]>0)) goto l46;
x[jvj+138]=t[x[jvj+138]];
goto l43;
l2:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,X,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==433)) goto l3;
if((x[jvj+9]==55)) goto l6;
if((x[jvj+9]!=536)) goto l11;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,X,jvj+19)*/
if((x[jvj+19]!=73)) goto l11;
pile[v[22]]=102; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(102,X,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=(-20); pile[WZ2]=105; pile[WZ3]=jvj+95; 
(*f[180])( );     /*TRIENS0(jvj+21,(-20),105,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=42; pile[WZ2]=100; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+95,42,100,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=(-20); pile[WZ2]=184; pile[WZ3]=jvj+85; 
(*f[180])( );     /*TRIENS0(jvj+84,(-20),184,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+85,47,100,jvj+7)*/
if((V230=w[x[BT]][1])==incon) goto l1;
if((V230!=23)) goto l57;
V229=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V229; 
(*f[134])( );     /*OTA0(BT,R,V229)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+7)*/
l1:pile[v[22]]=337; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(337,X,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[378])( );     /*CPI0(jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=337; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+7,337,jvj+6)*/
l10:pile[v[22]]=N; pile[WZ1]=jvj+7; pile[WZ2]=BT; pile[WZ3]=R; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(N,jvj+7,BT,R,E,P,RM,SM)*/
l11:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(140,X,V)*/
V=pile[WZ2]; 
if(V==(-3629)||V==(-4348)||V==(-4349)||V==(-3704)||V==(-1761)||V==(-1278)||V==(-3031)||V==(-5598)||V==(-6170)||V==(-6470)||V==(-10635)||V==(-10974)||V==(-11168)) goto l28;
x[jvj+22]=vo[15];z[jvj+22]=vz[15];
pile[v[22]]=292; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(292,jvj+22,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==V) goto l28;
x[jvj+137]=x[E] ;z[jvj+137]=z[E];
l12:if((x[jvj+137]<=0)) goto l28;
x[jvj+24]=s[x[jvj+137]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+137];
pile[v[22]]=140; pile[WZ1]=jvj+24; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(140,jvj+24,V29)*/
V29=pile[WZ2]; 
if((V29!=V)) goto l13;
pile[v[22]]=110; 
(*f[44])( );if(v[102]) goto l13;     /*FNDC1(110,jvj+24,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=X; pile[WZ1]=140; pile[WZ2]=V34; 
(*f[177])( );     /*CHGC4(X,140,V34)*/
l13:x[jvj+137]=t[x[jvj+137]];
goto l12;
l3:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,X,jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l11;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=452)) goto l5;
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+14)*/
if((x[jvj+14]!=0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+11,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[255])( );     /*COPEXP0(jvj+15,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=646; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+90; 
(*f[181])( );     /*QUADRI2(100,646,102,jvj+16,jvj+90)*/
x[jvj+135]=107 ;z[jvj+135]=107;
if((V223=w[x[jvj+135]][1])==incon) goto l5;
if((V223!=23)) goto l55;
V222=x[jvj+13];
pile[v[22]]=jvj+135; pile[WZ1]=X; pile[WZ2]=V222; 
(*f[134])( );     /*OTA0(jvj+135,X,V222)*/
pile[v[22]]=X; pile[WZ1]=jvj+135; pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(X,jvj+135,jvj+90)*/
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l6:pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,X,jvj+17)*/
l7:if((x[jvj+17]<=0)) goto l11;
x[jvj+2]=s[x[jvj+17]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+17];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==48)) goto l8;
l9:pile[v[22]]=jvj+2; pile[WZ1]=jvj+18; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+93; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+92,107,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+93,22,100,jvj+94)*/
x[jvj+136]=107 ;z[jvj+136]=107;
if((V227=w[x[jvj+136]][1])==incon) goto l8;
if((V227!=23)) goto l56;
V226=x[jvj+2];
pile[v[22]]=jvj+136; pile[WZ1]=X; pile[WZ2]=V226; 
(*f[134])( );     /*OTA0(jvj+136,X,V226)*/
pile[v[22]]=X; pile[WZ1]=jvj+136; pile[WZ2]=jvj+94; 
(*f[36])( );     /*PLUSC0(X,jvj+136,jvj+94)*/
l8:x[jvj+17]=t[x[jvj+17]];
goto l7;
l14:if((F==278)) goto l15;
if((F==228)) goto l51;
l52:pile[v[22]]=jvj+82; pile[WZ1]=X; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(jvj+82,X,jvj+83)*/
pile[v[22]]=N; pile[WZ1]=jvj+83; pile[WZ2]=jvj+82; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(N,jvj+83,jvj+82,X,E,P,RM,SM)*/
l51:x[jvj+142]=t[x[jvj+142]];
l50:if((x[jvj+142]<=0)) goto l53;
x[jvj+82]=s[x[jvj+142]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+142];
if((x[jvj+80]!=22)) goto l52;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(111,X,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+25,jvj+26)*/
F=x[jvj+26];
if((x[N]==68)) goto l14;
if((x[N]==228)) goto l16;
if((x[N]!=278)) goto l52;
if((x[jvj+82]!=102)) goto l52;
if(F==650||F==649||F==654||F==651||F==151) goto l51;
goto l52;
l15:if((x[jvj+82]==103)) goto l51;
goto l52;
l16:if(F==295||F==585||F==137||F==149||F==139||F==138||F==141||F==432||F==647||F==1382) goto l51;
goto l52;
l17:V45=67;
if((x[N]!=278)) goto l43;
if((x[jvj+80]!=22)) goto l43;
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,X,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]==654)) goto l49;
goto l43;
l18:x[jvj+139]=x[RM] ;z[jvj+139]=z[RM];
goto l44;
l19:x[jvj+141]=x[SM] ;z[jvj+141]=z[SM];
l48:x[jvj+32]=x[jvj+141] ;z[jvj+32]=z[jvj+141];
if((V45==67)) goto l20;
if((V45!=68)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+29,jvj+33)*/
pile[v[22]]=N; pile[WZ1]=jvj+33; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=jvj+31; pile[v[22]+7]=jvj+32; 
(*f[1632])( );     /*COPA0(N,jvj+33,102,jvj+29,E,P,jvj+31,jvj+32)*/
l47:x[jvj+140]=t[x[jvj+140]];
goto l45;
l20:pile[v[22]]=N; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=jvj+31; pile[v[22]+7]=jvj+32; 
(*f[1632])( );     /*COPA0(N,jvj+29,jvj+30,X,E,P,jvj+31,jvj+32)*/
goto l47;
l22:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=110; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(110,jvj+35,V113)*/
V113=pile[WZ2]; 
if((V113!=V97)) goto l23;
x[jvj+66]=x[jvj+35] ;z[jvj+66]=z[jvj+35];
l35:pile[v[22]]=P; pile[WZ1]=159; pile[WZ2]=jvj+66; 
(*f[36])( );     /*PLUSC0(P,159,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+66,117,1)*/
l36:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,X,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+67,jvj+68)*/
if(x[jvj+68]!=650&&x[jvj+68]!=649&&x[jvj+68]!=651&&x[jvj+68]!=654&&x[jvj+68]!=848) goto l37;
pile[v[22]]=68; pile[WZ1]=jvj+60; pile[WZ2]=102; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(68,jvj+60,102,X,E,P,RM,SM)*/
l37:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,X,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]==151)) goto l38;
if((x[jvj+70]==848)) goto l39;
if((x[jvj+70]!=654)) goto l42;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(107,X,jvj+73)*/
l40:if((x[jvj+73]<=0)) goto l42;
x[jvj+74]=s[x[jvj+73]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+73];
pile[v[22]]=68; pile[WZ1]=jvj+74; pile[WZ2]=107; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(68,jvj+74,107,X,E,P,RM,SM)*/
x[jvj+73]=t[x[jvj+73]];
goto l40;
l23:x[jvj+34]=t[x[jvj+34]];
l21:if((x[jvj+34]>0)) goto l22;
pile[v[22]]=V97; pile[WZ1]=110; pile[WZ2]=jvj+66; 
(*f[329])( );     /*TRI13(V97,110,jvj+66)*/
goto l35;
l27:pile[v[22]]=436; pile[WZ1]=R; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(436,R,jvj+47)*/
pile[v[22]]=140; pile[WZ1]=jvj+47; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,jvj+47,V155)*/
V155=pile[WZ2]; 
if((V158!=V155)) goto l42;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,R,jvj+48)*/
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]==228)) goto l33;
goto l42;
l28:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,X,jvj+51)*/
pile[v[22]]=101; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+51,jvj+52)*/
if((x[jvj+52]==880)) goto l29;
if((x[jvj+52]==228)) goto l31;
if((x[jvj+52]!=278)) goto l32;
pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,X,jvj+56)*/
pile[v[22]]=278; pile[WZ1]=jvj+56; pile[WZ2]=103; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(278,jvj+56,103,X,E,P,RM,SM)*/
l32:pile[v[22]]=140; pile[WZ1]=X; 
(*f[44])( );if(v[102]) goto l42;     /*FNDC1(140,X,V158)*/
V158=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,R,jvj+57)*/
if((x[jvj+57]==435)) goto l27;
if((x[jvj+57]!=22)) goto l42;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,R,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=25)) goto l42;
x[jvj+40]=d[20];z[jvj+40]=0;
l25:if((x[jvj+40]<=0)) goto l42;
x[jvj+41]=s[x[jvj+40]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+40];
pile[v[22]]=jvj+41; pile[WZ1]=R; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(jvj+41,R,jvj+42)*/
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l26;     /*FNDC1(140,jvj+42,V134)*/
V134=pile[WZ2]; 
if((V158!=V134)) goto l26;
pile[v[22]]=268; pile[WZ1]=jvj+41; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(268,jvj+41,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(jvj+43,R,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]==228)) goto l33;
l26:x[jvj+40]=t[x[jvj+40]];
goto l25;
l29:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; 
(*f[255])( );     /*COPEXP0(jvj+53,jvj+54)*/
(*f[1817])( );     /*NOUV2(V122)*/
V122=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+96; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+96)*/
if((V233=w[x[BT]][1])==incon) goto l54;
if((V233!=23)) goto l58;
V232=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V232; 
(*f[134])( );     /*OTA0(BT,R,V232)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+96; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+96)*/
l54:pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+86; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+86)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10594; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,10594,jvj+101)*/
pile[WZ3]=239; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,239,jvj+99)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5723); pile[WZ4]=jvj+107; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5723),jvj+107)*/
pile[WZ3]=(-630); pile[WZ4]=jvj+105; 
(*f[270])( );     /*QUADRI7(100,21,140,(-630),jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=103; pile[WZ2]=jvj+106; 
(*f[54])( );     /*TRI1(jvj+105,103,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+107; pile[WZ4]=jvj+106; pile[WZ5]=jvj+102; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+107,jvj+106,jvj+102)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5724); pile[WZ4]=jvj+110; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5724),jvj+110)*/
pile[WZ3]=(-4548); pile[WZ4]=jvj+108; 
(*f[270])( );     /*QUADRI7(100,21,140,(-4548),jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=103; pile[WZ2]=jvj+109; 
(*f[54])( );     /*TRI1(jvj+108,103,jvj+109)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+110; pile[WZ4]=jvj+109; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+110,jvj+109,jvj+103)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5725); pile[WZ4]=jvj+113; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5725),jvj+113)*/
pile[WZ3]=(-657); pile[WZ4]=jvj+111; 
(*f[270])( );     /*QUADRI7(100,21,140,(-657),jvj+111)*/
pile[v[22]]=jvj+111; pile[WZ1]=103; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,103,jvj+112)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+113; pile[WZ4]=jvj+112; pile[WZ5]=jvj+104; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+113,jvj+112,jvj+104)*/
pile[v[22]]=jvj+99; pile[WZ1]=337; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,337,jvj+100)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+101; pile[WZ4]=jvj+100; pile[WZ5]=jvj+97; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+101,jvj+100,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=113; pile[WZ2]=jvj+102; 
(*f[36])( );     /*PLUSC0(jvj+97,113,jvj+102)*/
pile[WZ2]=jvj+103; 
(*f[36])( );     /*PLUSC0(jvj+97,113,jvj+103)*/
pile[WZ2]=jvj+104; 
(*f[36])( );     /*PLUSC0(jvj+97,113,jvj+104)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10594; pile[WZ4]=jvj+118; 
(*f[181])( );     /*QUADRI2(100,20,101,10594,jvj+118)*/
pile[WZ3]=229; pile[WZ4]=jvj+114; 
(*f[181])( );     /*QUADRI2(100,20,101,229,jvj+114)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5723); pile[WZ4]=jvj+124; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5723),jvj+124)*/
pile[WZ3]=(-743); pile[WZ4]=jvj+122; 
(*f[270])( );     /*QUADRI7(100,21,140,(-743),jvj+122)*/
pile[v[22]]=jvj+122; pile[WZ1]=103; pile[WZ2]=jvj+123; 
(*f[54])( );     /*TRI1(jvj+122,103,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+119; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+124,jvj+123,jvj+119)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5724); pile[WZ4]=jvj+127; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5724),jvj+127)*/
pile[WZ3]=(-599); pile[WZ4]=jvj+125; 
(*f[270])( );     /*QUADRI7(100,21,140,(-599),jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=103; pile[WZ2]=jvj+126; 
(*f[54])( );     /*TRI1(jvj+125,103,jvj+126)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+127; pile[WZ4]=jvj+126; pile[WZ5]=jvj+120; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+127,jvj+126,jvj+120)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-5725); pile[WZ4]=jvj+130; 
(*f[270])( );     /*QUADRI7(100,21,140,(-5725),jvj+130)*/
pile[WZ3]=(-691); pile[WZ4]=jvj+128; 
(*f[270])( );     /*QUADRI7(100,21,140,(-691),jvj+128)*/
pile[v[22]]=jvj+128; pile[WZ1]=103; pile[WZ2]=jvj+129; 
(*f[54])( );     /*TRI1(jvj+128,103,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+130; pile[WZ4]=jvj+129; pile[WZ5]=jvj+121; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+130,jvj+129,jvj+121)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+133; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+133)*/
pile[WZ3]=(-730); pile[WZ4]=jvj+131; 
(*f[270])( );     /*QUADRI7(100,21,140,(-730),jvj+131)*/
pile[v[22]]=jvj+131; pile[WZ1]=103; pile[WZ2]=jvj+132; 
(*f[54])( );     /*TRI1(jvj+131,103,jvj+132)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+133; pile[WZ4]=jvj+132; pile[WZ5]=jvj+116; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+133,jvj+132,jvj+116)*/
pile[v[22]]=jvj+114; pile[WZ1]=337; pile[WZ2]=jvj+115; 
(*f[54])( );     /*TRI1(jvj+114,337,jvj+115)*/
pile[v[22]]=jvj+116; pile[WZ1]=(-20); pile[WZ3]=113; pile[WZ4]=jvj+117; 
(*f[298])( );     /*TRIENS1(jvj+116,(-20),jvj+115,113,jvj+117)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+118; pile[WZ5]=jvj+98; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+118,jvj+117,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=114; pile[WZ2]=jvj+119; 
(*f[36])( );     /*PLUSC0(jvj+98,114,jvj+119)*/
pile[WZ2]=jvj+120; 
(*f[36])( );     /*PLUSC0(jvj+98,114,jvj+120)*/
pile[WZ2]=jvj+121; 
(*f[36])( );     /*PLUSC0(jvj+98,114,jvj+121)*/
pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+88; 
(*f[54])( );     /*TRI1(42,100,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=105; pile[WZ2]=jvj+97; 
(*f[36])( );     /*PLUSC0(jvj+88,105,jvj+97)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+88,105,jvj+54)*/
pile[WZ2]=jvj+98; 
(*f[36])( );     /*PLUSC0(jvj+88,105,jvj+98)*/
pile[v[22]]=jvj+86; pile[WZ1]=436; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,436,jvj+87)*/
pile[v[22]]=jvj+88; pile[WZ1]=(-20); pile[WZ3]=184; pile[WZ4]=jvj+89; 
(*f[298])( );     /*TRIENS1(jvj+88,(-20),jvj+87,184,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=47; pile[WZ2]=100; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+89,47,100,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V122; pile[WZ4]=jvj+134; 
(*f[270])( );     /*QUADRI7(100,21,140,V122,jvj+134)*/
if((V236=w[x[BT]][1])==incon) goto l24;
if((V236!=23)) goto l59;
V235=x[X];
pile[v[22]]=BT; pile[WZ1]=R; pile[WZ2]=V235; 
(*f[134])( );     /*OTA0(BT,R,V235)*/
pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+134; 
(*f[36])( );     /*PLUSC0(R,BT,jvj+134)*/
l24:pile[v[22]]=337; pile[WZ1]=SM; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(337,SM,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=337; 
(*f[35])( );     /*CHGC1(jvj+37,337,jvj+36)*/
l30:pile[v[22]]=RM; pile[WZ1]=105; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(RM,105,jvj+37)*/
goto l32;
l31:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(102,X,jvj+55)*/
pile[v[22]]=228; pile[WZ1]=jvj+55; pile[WZ2]=102; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(228,jvj+55,102,X,E,P,RM,SM)*/
goto l32;
l33:x[jvj+58]=vo[15];z[jvj+58]=vz[15];
pile[v[22]]=jvj+58; pile[WZ1]=748; pile[WZ2]=V158; 
(*f[735])( );     /*PLUSC4(jvj+58,748,V158)*/
goto l42;
l34:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,X,jvj+59)*/
if((x[jvj+59]!=22)) goto l37;
pile[v[22]]=102; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(102,X,jvj+60)*/
pile[v[22]]=140; pile[WZ1]=jvj+60; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+60,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,X,jvj+61)*/
pile[v[22]]=101; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+61,jvj+62)*/
if(x[jvj+62]!=650&&x[jvj+62]!=649&&x[jvj+62]!=651) goto l36;
x[jvj+63]=vo[15];z[jvj+63]=vz[15];
pile[v[22]]=297; pile[WZ1]=jvj+63; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(297,jvj+63,jvj+64)*/
pile[v[22]]=147; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(147,jvj+64,jvj+65)*/
for(a=x[jvj+65];a>0;a=t[a]) if(s[a]==V97) goto l36;
x[jvj+66]=incon;
pile[v[22]]=159; pile[WZ1]=P; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(159,P,jvj+34)*/
goto l21;
l38:pile[v[22]]=102; pile[WZ1]=X; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,X,jvj+71)*/
pile[v[22]]=N; pile[WZ1]=jvj+71; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(N,jvj+71,102,jvj+71,E,P,RM,SM)*/
goto l42;
l39:pile[v[22]]=103; pile[WZ1]=X; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,X,jvj+72)*/
pile[v[22]]=68; pile[WZ1]=jvj+72; pile[WZ2]=102; pile[WZ3]=X; pile[WZ4]=E; pile[WZ5]=P; pile[v[22]+6]=RM; pile[v[22]+7]=SM; 
(*f[1632])( );     /*COPA0(68,jvj+72,102,X,E,P,RM,SM)*/
goto l42;
l46:x[jvj+29]=s[x[jvj+140]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+140];
x[jvj+141]=incon;
if((x[N]!=68)) goto l19;
if((x[jvj+30]!=105)) goto l19;
x[jvj+141]=x[jvj+29] ;z[jvj+141]=z[jvj+29];
goto l48;
l49:x[jvj+142]=w[x[jvj+80]][9];
goto l50;
l53:x[jvj+1]=incon; v[0]=jvj; v[22]-=8; return;
l55:pile[v[22]]=X; pile[WZ1]=jvj+135; pile[WZ2]=jvj+90; 
(*f[35])( );     /*CHGC1(X,jvj+135,jvj+90)*/
goto l5;
l56:pile[v[22]]=X; pile[WZ1]=jvj+136; pile[WZ2]=jvj+94; 
(*f[35])( );     /*CHGC1(X,jvj+136,jvj+94)*/
goto l8;
l57:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(R,BT,jvj+7)*/
goto l1;
l58:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+96; 
(*f[35])( );     /*CHGC1(R,BT,jvj+96)*/
goto l54;
l59:pile[v[22]]=R; pile[WZ1]=BT; pile[WZ2]=jvj+134; 
(*f[35])( );     /*CHGC1(R,BT,jvj+134)*/
goto l24;
}
