#include <ansi.h>

inherit ROOM;

void create()
{
	set( "short", "��"HIB"����ʯ��"NOR"��" );
	set( "long", HIG"
   [����]     [�����]     [���]  [������]
"HIR"----------------------------------------------"NOR"
   09/03/2001 Alucard        350        0
   09/03/2001 Abc            100        5
   09/03/2001 Prince         100        5
   09/04/2001 Srat           300       10
   09/04/2001 Ywarter        500       10
   09/04/2001 Onesnowhot     500       10
   09/05/2001 Salicili       100        5
   09/12/2001 Sula          2000       15
   09/14/2001 Del            100        5
                           "HIB"------   ------"HIM"
                       С�� 4050       65
"HIR"----------------------------------------------"HIY"
                       �ܼ� 3985 Ԫ
\n"NOR );
	set( "no_fight", 1 );
	set( "exits", ([
"east" : "/open/wiz/donate_3",
		"west" : "/open/wiz/donate",
	]) );
	setup();
}
