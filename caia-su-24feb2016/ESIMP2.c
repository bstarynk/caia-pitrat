#include "dx.h"
void ESIMP2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V70=0,V72=0,V74=0,V63=0,V64=0,V65=0,V66=0,V67=0,V69=0,V71=0,V73=0,V1=0;
int T,NY,O;
int NX,NT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
x[jvj+1]=10741;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1665&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
T=pile[v[22]]; NY=pile[v[22]+1]; O=pile[v[22]+2]; NX=pile[v[22]+3]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[T]==827)) goto l1;
if((x[T]!=826)) goto l34;
if((x[O]==134)) goto l28;
if((x[O]!=135)) goto l34;
pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1873])( );if(v[102]) goto l34;     /*Z64Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
l32:V1=g[266];
if((V1<=0)) goto l35;
V2=vg[266];
if((V2!=0)) goto l29;
if((V1<3)) goto l31;
l29:pile[v[22]]=266; pile[WZ1]=10741; pile[WZ2]=2; pile[WZ3]=(-620); pile[WZ4]=T; pile[WZ5]=(-3188); pile[v[22]+6]=NY; pile[v[22]+7]=(-3141); pile[v[22]+8]=NT; pile[v[22]+9]=(-2863); pile[v[22]+10]=O; pile[v[22]+11]=jvj+3; 
(*f[1272])( );     /*INTERP14(266,10741,2,(-620),T,(-3188),NY,(-3141),NT,(-2863),O,jvj+3)*/
if((x[jvj+3]==135)) goto l30;
l35:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+4]=NT; v[102]=0;return;
l1:if((x[O]==485)) goto l2;
if((x[O]==486)) goto l3;
if((x[O]==48)) goto l4;
if((x[O]==55)) goto l5;
if((x[O]==52)) goto l6;
if((x[O]==326)) goto l7;
if((x[O]==25)) goto l8;
if((x[O]==26)) goto l9;
if((x[O]==27)) goto l10;
if((x[O]==28)) goto l11;
if((x[O]==29)) goto l12;
if((x[O]==30)) goto l13;
if((x[O]==63)) goto l14;
if((x[O]==990)) goto l15;
if((x[O]==87)) goto l16;
if((x[O]==88)) goto l17;
if((x[O]==548)) goto l18;
if((x[O]==1214)) goto l19;
if((x[O]==1215)) goto l20;
if((x[O]==1273)) goto l21;
if((x[O]==962)) goto l22;
if((x[O]==625)) goto l23;
if((x[O]==408)) goto l24;
if((x[O]==596)) goto l25;
if((x[O]==636)) goto l26;
if((x[O]==1280)) goto l27;
if((x[O]!=1356)) goto l34;
pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1896])( );if(v[102]) goto l34;     /*Z244Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l2:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1868])( );if(v[102]) goto l34;     /*Z54Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l3:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1869])( );if(v[102]) goto l34;     /*Z55Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l4:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1870])( );if(v[102]) goto l34;     /*Z56Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l5:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1871])( );if(v[102]) goto l34;     /*Z57Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l6:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1874])( );if(v[102]) goto l34;     /*Z66Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l7:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1875])( );if(v[102]) goto l34;     /*Z69Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l8:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1876])( );if(v[102]) goto l34;     /*Z70Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l9:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1877])( );if(v[102]) goto l34;     /*Z71Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l10:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1878])( );if(v[102]) goto l34;     /*Z140Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l11:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1879])( );if(v[102]) goto l34;     /*Z141Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l12:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1880])( );if(v[102]) goto l34;     /*Z142Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l13:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1881])( );if(v[102]) goto l34;     /*Z143Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l14:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1882])( );if(v[102]) goto l34;     /*Z149Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l15:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1883])( );if(v[102]) goto l34;     /*Z150Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l16:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1884])( );if(v[102]) goto l34;     /*Z152Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l17:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1885])( );if(v[102]) goto l34;     /*Z153Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l18:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1886])( );if(v[102]) goto l34;     /*Z154Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l19:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1887])( );if(v[102]) goto l34;     /*Z157Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l20:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1888])( );if(v[102]) goto l34;     /*Z162Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l21:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1889])( );if(v[102]) goto l34;     /*Z166Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l22:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1890])( );if(v[102]) goto l34;     /*Z257Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l23:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1891])( );if(v[102]) goto l34;     /*Z259Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l24:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1892])( );if(v[102]) goto l34;     /*Z267Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l25:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1893])( );if(v[102]) goto l34;     /*Z270Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l26:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1894])( );if(v[102]) goto l34;     /*Z215Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l27:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1895])( );if(v[102]) goto l34;     /*Z282Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l28:pile[v[22]]=NY; pile[WZ1]=NX; 
(*f[1872])( );if(v[102]) goto l34;     /*Z63Z0(NY,NX,NT)*/
NT=pile[WZ2]; 
goto l32;
l30:if((V1<4)) goto l31;
goto l35;
l31:V70=x[T];
V72=x[NY];
V74=x[O];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V63; pile[WZ2]=10741; 
(*f[98])( );     /*SRA3(135,V63,10741,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,2,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V65,125,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,NT,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(20,V70,V67,V69)*/
V69=pile[WZ3]; 
pile[WZ1]=V72; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(20,V72,V69,V71)*/
V71=pile[WZ3]; 
pile[WZ1]=V74; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,V74,V71,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; 
(*f[40])( );     /*SLG0(V73)*/
if((V1!=2)) goto l35;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l35;
l34:x[NX]=NT=incon;
l33:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; v[102]=1;return;
}
