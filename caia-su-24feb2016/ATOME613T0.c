#include "dx.h"
void ATOME613T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int DW=0,V47=0,D=0,V48=0,V34=0,V33=0,V35=0,V37=0,V36=0,V38=0,V39=0,V42=0,V21=0,V45=0,A=0,B=0,C=0,AA=0,V31=0,T=0,V14=0,V25=0,V23=0,V24=0,V29=0,V22=0,V67=0,V68=0,V79=0,V77=0,V73=0,V74=0;
int NNNI;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=20613;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3923&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNI=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=NNNI; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,NNNI,jvj+13)*/
if((x[jvj+13]!=43)) goto l13;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,NNNI,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1929)) goto l13;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(642,jvj+10,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=NNNI; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(103,NNNI,jvj+16)*/
pile[v[22]]=2; pile[WZ1]=jvj+16; 
(*f[1963])( );     /*COEFFDEG0(2,jvj+16,A)*/
A=pile[WZ2]; 
if((A==0)) goto l13;
pile[v[22]]=1; 
(*f[1963])( );     /*COEFFDEG0(1,jvj+16,B)*/
B=pile[WZ2]; 
pile[v[22]]=0; 
(*f[1963])( );     /*COEFFDEG0(0,jvj+16,C)*/
C=pile[WZ2]; 
pile[v[22]]=A; 
(*f[627])( );if(v[102]) goto l13;     /*RACINEXACTE0(A,AA)*/
AA=pile[WZ1]; 
V31=2*AA;
V67=B%V31;
if((V67!=0)) goto l13;
if((V31==0)) goto l13;
V68=B/V31;
T=V68;
pile[v[22]]=2; pile[WZ1]=T; 
(*f[1006])( );if(v[102]) goto l13;     /*POWER0(2,T,V14)*/
V14=pile[WZ2]; 
V25=C-V14;
if((V25==0)) goto l13;
x[jvj+11]=0 ;z[jvj+11]=0;
pile[v[22]]=929; pile[WZ1]=jvj+10; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(929,jvj+10,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=V42; 
(*f[207])( );     /*PLUE2(jvj+11,V42)*/
l7:pile[v[22]]=1006; pile[WZ1]=NNNI; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1006,NNNI,jvj+12)*/
l8:if((x[jvj+12]>0)) goto l9;
x[jvj+6]=0 ;z[jvj+6]=0;
V79=abs(V25);
V77=V79;
pile[v[22]]=V77; pile[WZ1]=jvj+34; 
(*f[991])( );if(v[102]) goto l10;     /*ENSFACT0(V77,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=V77; 
(*f[207])( );     /*PLUE2(jvj+34,V77)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+34,1)*/
x[jvj+35]=0 ;z[jvj+35]=0;
l14:if((x[jvj+34]>0)) goto l15;
V48=x[jvj+35];
l3:if((V48<=0)) goto l10;
D=s[V48];
V34=V25/D;
V33=D-V34;
V35=V33%2;
if((V35!=0)) goto l4;
V37=V33/2;
V36=V37-T;
V38=V36%AA;
if((V38!=0)) goto l4;
V39=V36/AA;
pile[v[22]]=jvj+6; pile[WZ1]=V39; 
(*f[207])( );     /*PLUE2(jvj+6,V39)*/
l4:V48=t[V48];
goto l3;
l2:DW=s[V47];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+24)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=DW; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,DW,jvj+26)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+27; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+27,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[522])( );     /*PLUB2(jvj+4,jvj+5)*/
V47=t[V47];
l1:if((V47>0)) goto l2;
for(i=x[jvj+4],V22=0;i>0;i=t[i],V22++)  ;
if((V22!=V23)) goto l12;
x[jvj+9]=0 ;z[jvj+9]=0;
l5:if((x[jvj+4]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+23; 
(*f[301])( );     /*TRI11(jvj+22,jvj+9,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+23,22,100,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1006; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(jvj+19,1006,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=NNNI; pile[WZ2]=110; pile[WZ3]=(-11593); pile[WZ4]=jvj+32; 
(*f[270])( );     /*QUADRI7(101,NNNI,110,(-11593),jvj+32)*/
pile[v[22]]=V45; pile[WZ1]=858; pile[WZ2]=jvj+28; 
(*f[46])( );     /*TRI0(V45,858,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,v[13],642,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=3923; pile[WZ2]=246; pile[WZ3]=jvj+30; 
(*f[189])( );     /*TRI4(jvj+29,3923,246,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=20613; pile[WZ2]=218; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+30,20613,218,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=159; pile[WZ4]=jvj+33; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,159,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+33,1,158,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+19,jvj+20)*/
l12:x[jvj+18]=t[x[jvj+18]];
l11:if((x[jvj+18]<=0)) goto l13;
x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
V47=x[jvj+6];
goto l1;
l6:x[jvj+7]=s[x[jvj+4]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+4];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+8)*/
x[jvj+4]=t[x[jvj+4]];
goto l5;
l9:V21=s[x[jvj+12]];
pile[v[22]]=jvj+11; pile[WZ1]=V21; 
(*f[207])( );     /*PLUE2(jvj+11,V21)*/
x[jvj+12]=t[x[jvj+12]];
goto l8;
l10:for(i=x[jvj+6],V23=0;i>0;i=t[i],V23++)  ;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[1945])( );if(v[102]) goto l13;     /*DEGREE0(jvj+16,jvj+17)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+17,V24)*/
V24=pile[WZ2]; 
if((V24!=2)) goto l13;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; 
(*f[891])( );     /*VAREXP0(jvj+16,jvj+18)*/
for(i=x[jvj+18],V29=0;i>0;i=t[i],V29++)  ;
if((V29==1)) goto l11;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l15:V73=s[x[jvj+34]];
V74=(-V73);
pile[v[22]]=jvj+35; pile[WZ1]=V74; 
(*f[207])( );     /*PLUE2(jvj+35,V74)*/
pile[WZ1]=V73; 
(*f[207])( );     /*PLUE2(jvj+35,V73)*/
x[jvj+34]=t[x[jvj+34]];
goto l14;
}
