inherit ROOM;
#include <ansi.h>
void create ()
{
set("short",HIB"��ڤ����̨"NOR);
set("long",@LONG
�����ǡ�����ڤ���ļ�̨, ������ǰ��һ��
СС��ʯ��(stone),����֮��, ���滹��������
��������ֵֹĹ���, �������ܶ��Ǽ����õ�
���ߡ�
LONG);
set("item_desc",([
"stone":"���ķ���(g-sac)��ڤ��֮ͷ�ߣ����˽��ԡ���������Ϊл��\n",
"ʯ��":"���ķ���(g-sac)��ڤ��֮ͷ�ߣ����˽��ԡ���������Ϊл��\n",
]));
set("no_light",1);
set("exits",([
"east":__DIR__"g-s01",
]));
set("no_transmit",1);
setup();
}

void init()
{
add_action("do_gsac","g-sac");
}

int do_gsac(string arg)
{
object ob,ob2,me;
me=this_player();
ob=present("life-ghost-head",me);
ob2=new(__DIR__"obj/death-butterfly");
if(!arg)
return notify_fail("��Ҫ����ʲô����??\n");
if(arg!="life-ghost-head"&&arg!="head")
return notify_fail("������̨���������������׵���Ʒ!!\n");
if(!present("life-ghost-head",me))
return notify_fail("�����ϲ�û����ڤ����ͷ!!\n");
destruct(ob);
message_vision(HIB"һ����ɫ�Ĺ�â�������, �����л���Ʈ��һֻ
����, �պ�����$N������!!\n"NOR,me);
ob2->move(me);
tell_object(me,HIY"��õ���һֻ����\n"NOR);
me->set_temp("ghost-hole/sac/life",1);
return 1;
}

