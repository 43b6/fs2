#include <ansi.h>

inherit ROOM;

void create ()
{
	set( "short", "����֮�䶷�᳡" );
	set( "long", @LONG
�����ǿ���ռ������ִ��Ļ᳡, ������һ��, ֻ�������Ѽ���
��ǰ�������ֵĹ���, ���������Ѿ������μ�����������, ������һ
�����ڱصõ�����

LONG);

  set("light_up", 1);
  set("no_auc", 1);
  set("no_transmit", 1);
  set("pkroom", 1);
  set("outdoors", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"room05.c",
  "out" : "/open/capital/room/fight.c",
  "east" : __DIR__"room02.c",
]));

  setup();
}

// by babe
int valid_leave( object me, string dir )
{
	int	i, n, fee;
	string	pay, money;
	object	*inv;

	if( dir == "out" ) {
		if( me->query_temp("multipk") )
			fee = time() - me->query_temp( "multipk" );
		else
			fee = 10000;
		if( fee<0 )
			fee = 0;
		fee *= 100;

		if( !me->can_afford(fee) ) {
			inv = all_inventory( me );
			for( i=0, n=sizeof(inv); i<n; i++ ) {
				money = inv[i]->query("id");
				if( money=="diamond" ||
					money=="thousand-cash" ||
					money=="gold" ||
					money=="silver" ||
					money=="coin" )
					destruct(inv[i]);
			}
		}
		else
			me->pay_money(fee);

		me->delete_temp("multipk");
		pay = "";
		if( fee > 10000 )
			pay += CHINESE_D->chinese_number(fee/10000) + "���ƽ�";
		if( fee%10000 > 100 )
			pay += CHINESE_D->chinese_number(fee%10000/100) + "������";
		if( fee%10000%100 > 0 )
			pay += CHINESE_D->chinese_number(fee%10000%100) + "��Ǯ";
		message_vision( HIY"�䶷�᳡������$N��ȡ���ִ�᳡�ط�" + pay + "��\n"NOR, me );
	}

	return 1;
}
