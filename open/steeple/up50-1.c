inherit ROOM;
string moveout();
#include <ansi.h>
void create()
{
set("short","����������վ");
set("long",@LONG

������������ʮ¥�Ĵ򶷺������������˿���ͨ��������
�ż��ˣ���������һ��Բ�̣������վ��Բ�������룬̧ͷ��
�Ͽ���һƬ����ǿ������۵ף����������Ƿ·���ף����һ��
�����ϵķ�����˸�����⣬����ʤ�ա�

���������и�͸���Ĳ�����״��(glass pillar)��
LONG);
set("exits",([
"north":__DIR__"up50-2",
]));
set("no_die_room",1);
set("no_fight",1);
set("light_up",1);
set("no_transmit",1);
set("no_auc", 1);
set("item_desc",([
"glass pillar":(:moveout:),
"pillar":(:moveout:),
]));
setup();
}
string moveout()
{
object me;
me=this_player();
tell_object(me,HIW"
����һ��������״�Ŀ������Ա���һЩ��ť(button)������԰���ȥ��\n"NOR);
return "\n";
}

void init()
{
add_action("do_push","push");
}

int do_push(string arg)
{
object me=this_player();
if(!arg)
return 0;
if(arg!="button")
{
tell_object(me,"���쳤���֣�ȴ���Ҳ���Ҫ���µĶ�����\n");
return 1;
}
else
{
message_vision(HIW"$N�����߽��˲�����״�ڡ�\n"NOR,me);
me->move(__DIR__"moveroom");
return 1;
}
}