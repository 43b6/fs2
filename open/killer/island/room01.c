#include <ansi.h>
inherit ROOM;
void create ()
{
set("short","����");
set("long",@LONG
����İ��輫Ϊ�򵥣���ƽ���˼ҵ��Է�û��ʲô����������ȴ���˼��߲�ȱ
��ȫ��ʬ����Ѫ�գ��ɴ˿ɼ������ƺ������й���ɱ�ĳ��棬������Ѫ����������
�������������һ���������ַ��ɾ����䣬����ɱ�˲����˵��㶼���ɵÿ�������
��
LONG);
set("exits",([
"east":__DIR__"b_r02",
]));
set("objects",([
__DIR__"npc/corpse01":1,
]));
setup();
}
void init()
{
        add_action("do_search", "search");
}

int do_search()
{
object me;
me = this_player();
if (me->query_temp("quest_corpse")==2)
{
tell_object(me,"���ʬ�忴������������!!\n");
return 1;
}
else
{
tell_object(me,"�㷢����ʬ������һЩ��λ��\n");
me->set_temp("quest_corpse",1);
return 1;
}
}
