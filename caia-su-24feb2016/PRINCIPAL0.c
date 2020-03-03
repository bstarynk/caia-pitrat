#include "dx.h"
void PRINCIPAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V1=0,V2=0;


signal(SIGALRM,ZEUS0);
signal(SIGQUIT,QUIT0);
signal(SIGILL,ILL0);
signal(SIGFPE,SIGFPE0);
signal(SIGBUS,BUS0);
signal(SIGSYS,SYS0);
signal(SIGSEGV,SEV0);
depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+600;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : 600);
fx[0]=stdout;
v[0]=fintravail;
vv[15]=1;
I=1;
l3:v[I]=0;
I++;
if((I<=300)) goto l3;
V1=vv[40];
v[90]=V1;
(*f[3])( );     /*MMM0()*/
V2=knr[1];
if((V2>=0)) goto l4;
(*f[4])( );     /*EVLC0()*/
(*f[5])( );     /*ERR0()*/
(*f[6])( );     /*ERRV0()*/
l4:exit(0);
return;
}
