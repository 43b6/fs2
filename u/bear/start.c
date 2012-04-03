// Room: /open/death/gate.c
#include <ansi.h>
#include <login.h>
#include </include/basic_skill.c>
inherit ROOM;
void end_death(object me);
void create ()
{
  set ("short", "[31m�������[2;37;0m");
  set ("long", @LONG
���Ѿ��������������ڡ���Ȼ����ظ�����һ�ξ��룬�������Ѿ�
���ܵ�����̹ǵ����硣����һƬ����������ȴ��Ӱ������������ߵ�ҹ
�ܻ������ֵģ�Ӧ�ò���û�顣�ϱߺ���������Ǻ���������ͨ�Ĺܵ���
����������һ�����ε�����������������ͬ�����磬����Ҫ������������
��ȥ������ô�򵥵����顣
LONG);

  set("exits", ([ /* sizeof() == 3 */
//  "up" : "/open/common/room/inn",
//  "south" : "/open/common/room/inn",
  "north" : __DIR__"bridge1",
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_transmit", 1);

  setup();
}

int valid_leave(mixed me, string dir)
{
        int i;
        string room;

        if (dir == "south") {
                i = (int)me->query_temp("back_road");
                i = i + 1;
                if (i >= (random(5) + 5)) {
                    me->set_temp("back_road", 10);
                    return notify_fail("�������ô��ؼ���  �ðɣ�����������Ը������Ҫ�����ܴ�Ĵ���ร���\n�������֮�� �������Ҫ��ȥ�Ļ����������߰ɣ���\n");
                } else {
                        me->set_temp("back_road",i);
                        return notify_fail("�㻹��ؼң����˵ظ���û��·�����ˣ�\n");
                }
        }
        else if (dir == "north") {
                me->delete_temp("back_road");
                return 1;
                }
        else if (dir == "up" || dir == "����")
        {
            if ( (int) me->query_temp("back_road") >= 10 )
            {
                end_death(me);
		me->delete_temp("back_road");
                me->reincarnate();
                if(!stringp(room = me->query("startroom")))
                    room = STARTROOM;
                me->move(room);
                message_vision(
                "ͻȻ���н���һ����⣬�����޷�������ֱ�ӡ�\n����һ��������ɢȥ��һ����Ӱ���֣�$N���ڴ�����͵�ܻ����ˡ�\n",me);
                return notify_fail("���������ػ������ˡ�\n");
            } else
		return notify_fail("���ȥ���� û��ô�򵥣���\n");
        }
        else
        return 1;
}

void auto_revive(object ob)
{
	end_death(ob);
	ob->reincarnate();
	ob->move(REVIVEROOM);
	tell_object(ob, "���������㲻ˬ������������˼䣡��\n");
}

void start_death(object ob)
{
	if(ob->query("combat_exp"))
        ob->set_temp("death/combat_exp", 1);

	if( ob->query("death/time") >= random(3)+3 ) {
	    ob->set("death/time", 0);
	    return; 
	}

	ob->add("death/time", 1);
	ob->set_temp("death/skill", 1);
	if( ob->query("max_force") || ob->query("max_mana") || ob->query("max_atman") )
	{
	if( ob->query("max_force") >= ob->query("max_mana")
	&& ob->query("max_force") >= ob->query("max_atman") )
        ob->set_temp("death/force", 1);
        else if( ob->query("max_mana") >= ob->query("max_force")
        && ob->query("max_mana") >= ob->query("max_atman") )
                ob->set_temp("death/mana", 1);
	else
                ob->set_temp("death/atman", 1);
	}
//	call_out("auto_revive", 300, ob);
}

void end_death(object me)
{
    	int cost;
	mapping skl, lrn, map;
	string *sname, *mapped;
    	int i;


    if( me->query_temp("death/combat_exp") )
    {
        // cost =(int) ( me->query("combat_exp") *
// int �� str �ߵ��˵�ʵս����ȽϿ�... so �۱Ƚ϶�... 5% - 10%
//       ( (random(me->query("int")*2 + me->query("str") - 30) + 60) / 12 ) /
// kar �Ƚϸߵ���.. �Ƚ��и���... ���Դ���... ���� 1 - 2....
//        ( random(me->query("kar") - 10) / 15 + 1) / 100 );
	if( !me->query("death/time") ) {
	    cost = me->query("combat_exp") / 100 * 3;
            me->add("combat_exp", -cost);
            tell_object(me, "���ʵս���鱻����"+chinese_number(cost)+"�㡣\n");
	    return;
	}

        cost = me->query("combat_exp") / 100 * 7;

        me->add("combat_exp", -cost);
	tell_object(me, "���ʵս���鱻����"+chinese_number(cost)+"�㡣\n");
    }
    if( me->query_temp("death/skill") )
    {
        skl = me->query_skills();
        if(sizeof(skl)) {
            sname  = keys(skl);
            map = me->query_skill_map();
            if( mapp(map) ) mapped = values(map);
            if( !mapped ) mapped = ({});
            for(i=0; i<sizeof(skl); i++) 
            if((member_array(sname[i], mapped) != -1 ) || (sname[i] == basic_skill[sname[i]]) )
	    {
		if (random(me->query("kar")-10) < 8)
		{
		cost = (int) ( skl[sname[i]] * 
// int �ϸ��ߵ� skill �ȽϿ�... so �۱Ƚ϶�..  1% - 4%
		((random(me->query("int")) + 10) / 10 ) /
// ��Ե�ϸ���.. �۽���.. ���� 1 - 2
        	(random(me->query("kar") - 10) / 20 + 1) / 100 );
		skl[sname[i]] -= cost;
		tell_object(me, "���"+to_chinese(sname[i])+"���ɱ�����"+chinese_number(cost)+"�㡣\n");
		}
	    }
        }
    }


    if( me->query_temp("death/force") )
    {
        cost = (int) ( me->query("max_force") *
// con �ϸ��ߵ� force �ȽϿ�... so �۱Ƚ϶�..  2% - 5%
        ((random(me->query("con")) + 20) / 10 ) /
// ��Ե�ϸ���.. �۽���.. ���� 1 - 2
        (random(me->query("kar") - 10) / 20 + 1) / 100 );
        if( cost > 10)
          cost = 10;
        me->add("max_force", -cost);
        tell_object(me, "����������ޱ�����"+chinese_number(cost)+"�㡣\n");
    }
    if( me->query_temp("death/mana") )
    {
        cost = (int) ( me->query("max_mana") *
// spi �ϸ��ߵ� mana �ȽϿ�... so �۱Ƚ϶�..  2% - 5%
        ((random(me->query("spi")) + 20) / 10 ) /
// ��Ե�ϸ���.. �۽���.. ���� 1 - 2
        (random(me->query("kar") - 10) / 20 + 1) / 100);
        if( cost > 10)
          cost = 10;
        me->add("max_mana", -cost);
        tell_object(me, "��ķ������ޱ�����"+chinese_number(cost)+"�㡣\n");
    }
    if( me->query_temp("death/atman") )
    {
        cost = (int) ( me->query("max_atman") *
// spi �ϸ��ߵ� ���� �ȽϿ�... so �۱Ƚ϶�..  2% - 5%
        ((random(me->query("spi")) + 20) / 10 ) /
// ��Ե�ϸ���.. �۽���.. ���� 1 - 2
        (random(me->query("kar") - 10) / 20 + 1) / 100 );
        if( cost > 10)
          cost = 10;
        me->add("max_atman", -cost);
        tell_object(me, "����������ޱ�����"+chinese_number(cost)+"�㡣\n");
    }
    me->delete_temp("death");
}
