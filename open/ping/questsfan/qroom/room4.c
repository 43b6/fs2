#include <ansi.h>
#include <room.h>
inherit ROOM;

void create()
{
  set ("short", "�羧�ź��");
  set ("long", @LONG
���ŵĺ��ο�����ΪԽ��Խ�ӽ���һ���ˣ�ͬʱҲ
��Զ����������ˣ���ǿ����������Ҳ���������ˡ�����
̤��½�ص���һɲ�ǡ��ٸн���ٲȻ���øմӹ��Ź�����
һ�⣬�����˵Ĺ��˻����ˡ���������½���ϵĸо���̤
ʵ��������

LONG);


        set("exits", ([ /* sizeof() == 1 */
  "north" : __FILE__,
  "south" : __FILE__,
]));

        set("objects", ([
]));
        setup();
}
void init()
{
        object me=this_player();

        message_vision(HIY"$N�پ��������죬��ͷһ�����ŷ����Լ������ڿ���֮�У�$N����������Ӧ�������Ѿ���ֱ�ĵ������!!!\n"NOR,me);
        me->set_temp("last_damage_from",me);
        me->set_temp("kill_it_self",1);
      tell_object(users(),HIR"
������������������������һ���ҽ�, �Ӷμҵĺ�ɽ����, "+me->query("name")+"����ʧ��������,
ʬ���޴�!!!\n"NOR);

        me->die();
        call_out("do_clean",2);
}
int do_clean()
{
    object *inv;
    int i;

    inv=all_inventory(this_object());
    for(i=0;i<sizeof(inv);i++){
      if(!inv[i]) continue;
      destruct(inv[i]);
    }
    return 1;
}

