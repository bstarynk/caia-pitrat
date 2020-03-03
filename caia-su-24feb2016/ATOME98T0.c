#include "dx.h"
void ATOME98T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V29=0,V42=0,V40=0,I=0,V51=0,V44=0,V36=0,V37=0,V38=0,J=0,V41=0,V39=0,V43=0,V45=0,M=0,V28=0,V47=0,V9=0,XA=0,XB=0,XC=0,V14=0,V13=0,V12=0,V11=0,MZ=0,V88=0,V86=0,V18=0,V82=0,V83=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=55;
x[jvj+1]=20098;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3602&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,R,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]!=25)) goto l17;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(870,R,V28)*/
V28=pile[WZ2]; 
if((V28!=2)) goto l17;
pile[v[22]]=869; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(869,R,jvj+7)*/
if((x[jvj+7]==769)) goto l17;
l10:x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(642,jvj+18,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(R,jvj+19)*/
l11:if((x[jvj+19]<=0)) goto l17;
x[jvj+4]=s[x[jvj+19]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+19];
pile[v[22]]=202; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(202,jvj+4,jvj+5)*/
if((x[jvj+5]==68)) goto l12;
l13:pile[v[22]]=R; pile[WZ1]=jvj+4; pile[WZ2]=jvj+20; pile[WZ3]=jvj+3; pile[WZ4]=jvj+21; 
(*f[3603])( );if(v[102]) goto l12;     /*QUADRATIQUE0(R,jvj+4,jvj+20,jvj+3,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+3,V29)*/
V29=pile[WZ2]; 
if((V29==0)) goto l12;
l1:pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
x[jvj+55]=x[jvj+6] ;z[jvj+55]=z[jvj+6];
l2:if((x[jvj+55]<=0)) goto l12;
x[jvj+10]=s[x[jvj+55]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+55];
if((x[jvj+10]!=x[jvj+4])) goto l14;
x[jvj+55]=t[x[jvj+55]];
goto l2;
l3:x[jvj+9]=0 ;z[jvj+9]=0;
V42=2*XA;
V40=(-XB);
V88=abs(MZ);
V86=V88;
pile[v[22]]=V86; pile[WZ1]=jvj+53; 
(*f[991])( );if(v[102]) goto l8;     /*ENSFACT0(V86,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=V86; 
(*f[207])( );     /*PLUE2(jvj+53,V86)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+53,1)*/
x[jvj+54]=0 ;z[jvj+54]=0;
l18:if((x[jvj+53]>0)) goto l19;
V18=x[jvj+54];
V51=V18;
l4:if((V51<=0)) goto l8;
I=s[V51];
V44=MZ/I;
if((I>V44)) goto l5;
V36=I+V44;
V37=V36%2;
if((V37!=0)) goto l5;
V38=V36/2;
x[jvj+8]=d[136];z[jvj+8]=0;
l6:if((x[jvj+8]<=0)) goto l5;
J=s[x[jvj+8]];
V41=J*V38;
V39=V40+V41;
V43=V39%V42;
if((V43!=0)) goto l7;
V45=V39/V42;
pile[v[22]]=jvj+9; pile[WZ1]=V45; 
(*f[207])( );     /*PLUE2(jvj+9,V45)*/
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l5:V51=t[V51];
goto l4;
l8:x[jvj+15]=0 ;z[jvj+15]=0;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1290])( );if(v[102]) goto l16;     /*DEPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
x[jvj+13]=d[76];z[jvj+13]=0;
l9:if((x[jvj+9]<=0)) goto l16;
M=s[x[jvj+9]];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=M; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+37; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+37,jvj+14)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[196])( );     /*PLUF0(jvj+13,jvj+14,jvj+15)*/
x[jvj+9]=t[x[jvj+9]];
goto l9;
l14:pile[v[22]]=jvj+3; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+20,jvj+24)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+38)*/
pile[WZ3]=486; pile[WZ4]=jvj+41; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+41)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+41; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+41,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=107; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+39,107,jvj+22)*/
pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+39,107,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+42)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-4); pile[WZ4]=jvj+43; 
(*f[192])( );     /*QUADRI4(100,41,130,(-4),jvj+43)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+42; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+42,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=107; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+43)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+24)*/
pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+40,107,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+38; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+38,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=107; pile[WZ2]=jvj+39; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+39)*/
pile[WZ2]=jvj+40; 
(*f[36])( );     /*PLUSC0(jvj+26,107,jvj+40)*/
pile[v[22]]=129; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[1157])( );if(v[102]) goto l12;     /*NORME1(129,jvj+26,jvj+27)*/
x[jvj+28]=x[jvj+27] ;z[jvj+28]=z[jvj+27];
pile[v[22]]=jvj+28; 
(*f[897])( );if(v[102]) goto l12;     /*DGR0(jvj+28,V9)*/
V9=pile[WZ1]; 
if((V9!=2)) goto l12;
pile[WZ4]=jvj+29; 
(*f[1675])( );if(v[102]) goto l12;     /*TRINOME0(jvj+28,XA,XB,XC,jvj+29)*/
XA=pile[WZ1]; XB=pile[WZ2]; XC=pile[WZ3]; 
if((x[jvj+29]==68)) goto l15;
l12:x[jvj+19]=t[x[jvj+19]];
goto l11;
l15:pile[v[22]]=XB; pile[WZ1]=XB; 
(*f[1024])( );if(v[102]) goto l12;     /*POSPRD0(XB,XB,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=XC; pile[WZ1]=XA; 
(*f[1024])( );if(v[102]) goto l12;     /*POSPRD0(XC,XA,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=V13; pile[WZ1]=(-4); 
(*f[1024])( );if(v[102]) goto l12;     /*POSPRD0(V13,(-4),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=V14; 
(*f[1025])( );if(v[102]) goto l12;     /*POSOM0(V12,V14,V11)*/
V11=pile[WZ2]; 
MZ=V11;
if((MZ==0)) goto l12;
pile[v[22]]=XA; pile[WZ1]=jvj+30; 
(*f[3604])( );     /*RACINEXACTE1(XA,jvj+30)*/
if((x[jvj+30]==135)) goto l3;
goto l12;
l16:pile[v[22]]=jvj+15; pile[WZ1]=jvj+31; 
(*f[299])( );     /*COPEL0(jvj+15,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+48)*/
pile[v[22]]=V47; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V47,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3602; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3602,246,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=20098; pile[WZ2]=218; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+46,20098,218,jvj+47)*/
pile[v[22]]=jvj+48; pile[WZ1]=(-20); pile[WZ2]=jvj+47; pile[WZ3]=159; pile[WZ4]=jvj+49; 
(*f[298])( );     /*TRIENS1(jvj+48,(-20),jvj+47,159,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+49,1,158,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+31; pile[WZ2]=107; pile[WZ3]=jvj+52; 
(*f[301])( );     /*TRI11(jvj+51,jvj+31,107,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+52,22,100,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+32; 
(*f[1296])( );     /*NOUVCONTR0(jvj+33,jvj+32)*/
goto l12;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l19:V82=s[x[jvj+53]];
V83=(-V82);
pile[v[22]]=jvj+54; pile[WZ1]=V83; 
(*f[207])( );     /*PLUE2(jvj+54,V83)*/
pile[WZ1]=V82; 
(*f[207])( );     /*PLUE2(jvj+54,V82)*/
x[jvj+53]=t[x[jvj+53]];
goto l18;
}
